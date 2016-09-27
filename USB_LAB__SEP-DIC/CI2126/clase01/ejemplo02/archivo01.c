int VariableGlobal;
  void UnaFuncion (void);

  int main() {
    VariableGlobal= 1;
    printf("%d", VariableGlobal);
    UnaFuncion ();
    printf("%d", VariableGlobal);
    return 0;
  }
