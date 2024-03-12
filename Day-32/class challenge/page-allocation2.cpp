int findPages(int A[], int N, int M)
{
  // If M is greater than N, no distribution is possible to further now,
  if (M > N)
    return -1;

  int start = 0, end = 0, mid;
  int ans = -1;

  for (int i = 0; i < N; i++)
  {
    start = max(start, A[i]);
    end += A[i];
  }

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    int page = 0, count = 1;
    for (int i = 0; i < N; i++)
    {
      page += A[i];
      if (page > mid)
      {
        count++;
        page = A[i];
      }
    }

    if (count <= M)
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}


/*  
Output:-
-----------
TC :  (N*log(n))
Auxiliary SC : O(1)

*/