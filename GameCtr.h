#pragma once
#include <memory>
#include <map>

class Obj;
class Key;

class GameCtr
{
public:
	static GameCtr *Get()
	{
		return Instance;
	}
	static void Create();
	static void Destroy();

	void Update();
	void Draw();

	void Init();

private:
	
	
	GameCtr();
	~GameCtr();
	static GameCtr* Instance;
	std::shared_ptr<Key> key;
	//std::map<std::string, Obj* > uni;

};

