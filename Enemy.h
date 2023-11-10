#pragma once




class Enemy {
public:

	void Update();



	void Proximity();

	void Shooting();

	void Leave();
private:
	//メンバ関数ポインタのテーブル
	static void (Enemy::* phaseFuncTable[])();


	enum class Phase {
		kProximity,
		kShooting,
		kLeave,
	};


	
};
