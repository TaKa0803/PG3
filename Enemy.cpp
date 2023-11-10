#include"Enemy.h"
#include<stdio.h>

void Enemy::Proximity() {
	printf("近接！\n");
}

void Enemy::Shooting() {
	printf("射撃！\n");
}

void Enemy::Leave() {
	printf("離脱！\n");

}

void (Enemy::*Enemy::phaseFuncTable[])() = {
	&Enemy::Proximity,//0

	&Enemy::Shooting,//1

	&Enemy::Leave//2
};


void Enemy::Update() {
	(this->*phaseFuncTable[static_cast<size_t>(Phase::kProximity)])();

	(this->*phaseFuncTable[static_cast<size_t>(Phase::kShooting)])();

	(this->*phaseFuncTable[static_cast<size_t>(Phase::kLeave)])();

}
