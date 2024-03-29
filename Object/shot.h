#pragma once
#include "Vec2.h"

class Enemy;

class Shot
{
public:
	Shot();
	virtual ~Shot();

	void setHandle(int handle) { m_handle = handle; }

	// 発射
	void start(Vec2 pos);

	// 更新
	void update();
	// 表示
	void draw();

	// 存在するか
	bool isExist() const { return m_isExist; }
	void setExist(bool isExist) { m_isExist = isExist; }

	// 敵との当たり判定
	bool isCol(Enemy& enemy);

private:
	// グラフィックハンドル
	int m_handle;

	// 存在フラグ
	bool m_isExist;

	// 表示位置
	Vec2	m_pos;
	// 移動
	Vec2	m_vec;
};