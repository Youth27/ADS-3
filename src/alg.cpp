// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int result = 0, start = 0, end = size - 1, centor = 0;
  while (start < end) {
    centor = (start + end) * 0.5; 
    if (arr[centor] < value) {
      start = centor + 1;
    } else {
     end = centor; 
    }
  }
  while (arr[start] == value) {
    start = start + 1;
    result = result + 1;
  }
  if (result != 0) {
    return result;
  } else {
    return 0; // если ничего не найдено
  }
}
