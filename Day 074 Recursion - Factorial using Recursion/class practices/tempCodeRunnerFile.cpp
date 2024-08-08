int sumOfNNaturalNumber(int N){
  if (N == 1 ) return 1; 
  
  return N + sumOfNNaturalNumber(N-1);
}