#include <bits/stdc++.h>
using namespace std;


//T.C : O(n log n)
//S.C : O(n)


void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}

void mS(vector<int> &v, int low, int high)
{
    if (low == high)
        return;

    int mid = (low + high) / 2;

    mS(v, low, mid);
    mS(v, mid + 1, high);
    merge(v, low, mid, high);
}

void mergeSort(vector<int> &v, int n)
{
    mS(v, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    mergeSort(v, n);
    for (const int &i : v)
    {
        cout << i << " ";
    }
}