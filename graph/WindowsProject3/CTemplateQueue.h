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
	}; // 큐에 값을 넣는 함수

	bool DeQueue() {
		if (isEmpty() == true)
			return false;
		else {
			front = ++front % MAX;
			//*val = cQueue[front];
			return true;
		}
	}; // 큐에 값을 출력하는 함수

	bool isFull() {
		if ((rear + 1) % MAX == front)
			return true;
		else
			return false;
	}; // 큐가 꽉 찼는지 확인하는 함수

	bool isEmpty() {
		if (front == rear)
			return true;
		else
			return false;
	}; // 큐가 비었는지 확인하는 함수

	bool Peek(T* val) {
		if (isEmpty() == true) {
			return false;
		}
		else {
			*val = cQueue[(front + 1) % MAX];
			return true;
		}
	}; // 다음에 출력될 값을 확인하는 함수

	void Print() {

	}
};