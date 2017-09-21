int coef(int n, int k) {
  if (k == 0)
    return 1;
  if (n == 0)
    return 0;
  return coef(n - 1, k - 1) + coef(n - 1, k);
}