/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 3 September, 2018, 9:48 PM
 */

#include <bits/stdc++.h>

using namespace std;

bool isKPartitionPossibleRec(int arr[], int subsetSum[], bool taken[],
                   int subset, int K, int N, int curIdx, int limitIdx)
{
    if (subsetSum[curIdx] == subset)
    {
        /*  current index (K - 2) represents (K - 1) subsets of equal
            sum last partition will already remain with sum 'subset'*/
        if (curIdx == K - 2)
            return true;
 
        //  recursive call for next subsetition
        return isKPartitionPossibleRec(arr, subsetSum, taken, subset,
                                            K, N, curIdx + 1, N - 1);
    }
 
    //  start from limitIdx and include elements into current partition
    for (int i = limitIdx; i >= 0; i--)
    {
        //  if already taken, continue
        if (taken[i])
            continue;
        int tmp = subsetSum[curIdx] + arr[i];
 
        // if temp is less than subset then only include the element
        // and call recursively
        if (tmp <= subset)
        {
            //  mark the element and include into current partition sum
            taken[i] = true;
            subsetSum[curIdx] += arr[i];
            bool nxt = isKPartitionPossibleRec(arr, subsetSum, taken,
                                            subset, K, N, curIdx, i - 1);
 
            // after recursive call unmark the element and remove from
            // subsetition sum
            taken[i] = false;
            subsetSum[curIdx] -= arr[i];
            if (nxt)
                return true;
        }
    }
    return false;
}
bool isKPartitionPossible(int arr[], int N, int K)
{
    //  If K is 1, then complete array will be our answer
    if (K == 1)
        return true;
 
    //  If total number of partitions are more than N, then
    // division is not possible
    if (N < K)
        return false;
 
    // if array sum is not divisible by K then we can't divide
    // array into K partitions
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];
    if (sum % K != 0)
        return false;
 
    //  the sum of each subset should be subset (= sum / K)
    int subset = sum / K;
    int subsetSum[K];
    bool taken[N];
 
    //  Initialize sum of each subset from 0
    for (int i = 0; i < K; i++)
        subsetSum[i] = 0;
 
    //  mark all elements as not taken
    for (int i = 0; i < N; i++)
        taken[i] = false;
 
    // initialize first subsubset sum as last element of
    // array and mark that as taken
    subsetSum[0] = arr[N - 1];
    taken[N - 1] = true;
 
    //  call recursive method to check K-substitution condition
    return isKPartitionPossibleRec(arr, subsetSum, taken,
                                     subset, K, N, 0, N - 1);
}
int main(int argc, char** argv) {
    
    int n;
    cin>>n; 
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    if (isKPartitionPossible(A, n, 3))
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}

