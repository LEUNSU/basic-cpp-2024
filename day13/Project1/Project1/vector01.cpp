#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//vector<int> v;		// int타입 vector 생성

	//for (int i = 0; i < 10; i++)
	//{
	//	v.push_back(i + 1);
	////	printf("v[%d]: %d\n", i, v[i]);
	////	printf("v.size(): %d\n", v.size());				// 원소 갯수
	////	printf("v.capacity(): %d\n", v.capacity());		// 메모리 공간
	//}
	//v.push_back(20);
	//v.push_back(21);

	//for (int i = 0; i < v.size(); i++)
	//{
	//	// v.push_back(i + 1); 
	//	printf("v[%d]: %d\n", i, v[i]); 
	//	printf("v.at(i): %d\n", v.at(i)); 
	//}
	//
	//cout << "iterator: 반복자" << endl;
	//vector<int>::iterator iter;
	//for (iter = v.begin(); iter != v.end(); iter++)
	//{
	//	cout << "*iter: " << *iter << endl;
	//}

	vector<string> vs;

	vs.push_back("Hi");
	vs.push_back("Hello"); 
	vs.push_back("Hongkildon");
	cout << "vs.front()" << vs.front() << endl;
	cout << "vs.backl()" << vs.back() << endl;
	vector<string>::iterator it; 
	for (it = vs.begin(); it != vs.end(); it++)
	{
		cout << *it << endl;
	}
	vector<int> v1;		// 크기가 0인 벡터가 생성  
	vector<int> v2(5);	// 크기가 5인 벡터가 생성(0으로 초기화)
	vector<int> v3 = { 10, 20, 30 }; // 10, 20, 30으로 vector 초기화
	vector<int> v4(10, 7);			 // 크기가 10이고, 7로 초기화


	return 0;
}


















// 동일한 자료형을 사용하기 위해 배열을 사용
// 배열은 연속적이어야 함. 중간에 비면 안됨
// 배열 : ① 배열이름은 주소
//		  ② 배열은 for문
// 배열의 단점 : 검색 <----> 수정

// vector는 배열이 가진 단점을 극복한 것. 자동으로 메모리가 할당됨
// template을 통해 vector을 구현해야 함
// vector의 맨 끝에 삽입과 제거가 가능. (중간도 가능)
// -> 삽입 : puch_back(), 제거 : pop_back()
// vertor라는 헤더파일 필요, using namespce