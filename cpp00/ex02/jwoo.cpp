// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	// Account 클래스 vector 자료형을 accounts_t로 명명
	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	
	// amounts_size 라는 이름을 가진 변수를 sizeof(amounts) / sizeof(int) = 8 로 초기화
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );

	// amounts 배열의 값을 복사한 vector accounts 생성
	// 혹시 amounts 배열 요소가 Account(int initial_deposit) 생성자의 initial_deposit 이 되는건가?
	// 무슨 원리로?
	// PhoneBook 프로그램 생성할때 8개의 소멸자가 바로 나타난 것과 연관 있는가?
	// 배열이나 벡터에 할당? 선언?되면 자동적으로 생성자가 불러와지나?
	accounts_t				accounts( amounts, amounts + amounts_size );
	// accounts_t == std::vector<Account>
	// amounts : 배열의 시작 주소
	// amounts + amounts_size : 배열의 끝 주소
	
	
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //