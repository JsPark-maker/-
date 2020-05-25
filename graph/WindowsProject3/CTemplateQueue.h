#pragma once
#define MAX 100

template <class T>
class CTemplateQueue
{
public:

	T cQueue[MAX];
	int front = 0;
	int rear = 0;
	bool EnQueue(T val) {
		if (isFull() == true) {
			DeQueue();
			EnQueue(val);
			return true;
		}
		else {
			rear = ++rear % MAX;
			cQueue[rear] = val;
			return true;
		}
	}; // ť�� ���� �ִ� �Լ�

	bool DeQueue() {
		if (isEmpty() == true)
			return false;
		else {
			front = ++front % MAX;
			//*val = cQueue[front];
			return true;
		}
	}; // ť�� ���� ����ϴ� �Լ�

	bool isFull() {
		if ((rear + 1) % MAX == front)
			return true;
		else
			return false;
	}; // ť�� �� á���� Ȯ���ϴ� �Լ�

	bool isEmpty() {
		if (front == rear)
			return true;
		else
			return false;
	}; // ť�� ������� Ȯ���ϴ� �Լ�

	bool Peek(T* val) {
		if (isEmpty() == true) {
			return false;
		}
		else {
			*val = cQueue[(front + 1) % MAX];
			return true;
		}
	}; // ������ ��µ� ���� Ȯ���ϴ� �Լ�

	void Print() {

	}
};