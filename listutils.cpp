#include <iostream>

struct Node {
  int val;
  Node* next;
};

// ������������� �������� ������������ ������ ������

void init(Node* node) {
    node->val = 0;
    node->next = NULL;
}

// ����������� ������������ ������ �� �����
void show(Node* head) {
    while (head->val != NULL) {

        cout << head->val << " ";
        head = head->next;
    }
}

// ���������� �������� � ����������� ������
void pushNode(Node* head,Node* node) {
    int push_count = 0;
    while (head->next != NULL)
        head = head->next;
    head->next = node;
    node->next = NULL;
    push_count += 1;
} 


// �������� ������� ������������� size ��������� ������ �������� ��������� val.
void initList(Node* head, int size, int val)  {

}

// �������� ������� ����������� ��������� ������� source � ����� ������ dest
void copyMas(Node* source, Node* dest) {

}
  

// �������� ������� ��������� ������� source � dest. ���� ������ ����� 0, ���� �� ����� -1
int compareMas(Node* source, Node* dest) {
  return 0;
}


// �������� ������� �������� �� ������� ����� n-�� �������� ������.
void deleteList(Node* head,int n) {

}


// �������� ������� ������ �������� ������ �� n-��������� � ����������� ������� ��������� ������
void rShiftList(Node* head,int n) {

}



// �������� ������� ������ �������� ����� �� n-��������� � ����������� ������� ��������� ������.
void lShiftList(Node* head,int n) {

}


//�������� ������� ������ �������� ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(Node* head,int n, int size) {

}


// �������� ������� ���������� �������� �������� ��������� ������.
int averageList(Node* head, int size) {
  return 0;
}



// �������� ������� ���������� ������ ��������������� ���������� ��������� ������.
int skoFromList(Node* head, int size) {
  return 0;
}


int testSkoFromList() {
  return -1;
}


static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
  runTest(testSkoFromList,"testSkoFromList");


}