#pragma once
using namespace System;

ref class BankAccount
{
public:
	//derived classes  can override  this function 
	virtual String^ ToString() override;
	//derived classes  must override this function 
	//you can use '=0' instead of 'abstract'
	virtual  bool CanDebit(double amount) abstract;
	BankAccount(String^ holder);
	void Credit(double amount);
	bool Debit(double amount);
	double GetBalance();
private:
	String^ accountHolder;
	double balance;
};