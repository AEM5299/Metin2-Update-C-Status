2:
	#undef __FreeBSD__

3:
	boost:: -> std::

4:
	-std=gnu++17 -> -std=c++2a
	
7:
	gcc7 -> clang-devel
	g++7 -> clang++-devel
	
10:
	TR1_NS::unordered -> std::unordered
	
12:
	DBManager::instance().FuncQuery(std::bind1st(std::mem_fun(&MessengerManager::LoadList), this) -> DBManager::instance().FuncQuery(std::bind(&MessengerManager::LoadList, this, std::placeholders::_1)
	
13:
	CHARACTER_MANAGER::instance().for_each_pc(std::bind1st(std::mem_fun(&CMobManager::RebindMobProto),this)); -> CHARACTER_MANAGER::instance().for_each_pc(std::bind(&CMobManager::RebindMobProto, this, std::placeholders::_1));
	
14:
	DBManager::instance().FuncQuery(std::bind1st(std::mem_fun(&CGuild::SendGuildDataUpdateToAllMember), iter->second) -> DBManager::instance().FuncQuery(std::bind(&CGuild::SendGuildDataUpdateToAllMember, iter->second, std::placeholders::_1)
	
15:
	DBManager::instance().FuncQuery(std::bind1st(std::mem_fun(&CGuild::LoadGuildData), this), -> DBManager::instance().FuncQuery(std::bind(&CGuild::LoadGuildData, this, std::placeholders::_1),
	DBManager::instance().FuncQuery(std::bind1st(std::mem_fun(&CGuild::LoadGuildGradeData), this), -> DBManager::instance().FuncQuery(std::bind(&CGuild::LoadGuildGradeData, this, std::placeholders::_1),
	DBManager::instance().FuncQuery(std::bind1st(std::mem_fun(&CGuild::LoadGuildMemberData), this), -> DBManager::instance().FuncQuery(std::bind(&CGuild::LoadGuildMemberData, this, std::placeholders::_1),
	DBManager::instance().FuncQuery(std::bind1st(std::mem_fun(&CGuild::__P2PUpdateGrade),this), -> DBManager::instance().FuncQuery(std::bind(&CGuild::__P2PUpdateGrade, this, std::placeholders::_1),
	DBManager::instance().FuncAfterQuery(void_bind(std::bind1st(std::mem_fun(&CGuild::RefreshCommentForce),this),ch->GetPlayerID()), -> DBManager::instance().FuncAfterQuery(std::bind(&CGuild::RefreshCommentForce,this, ch->GetPlayerID()),
	for_each(m_memberOnline.begin(), m_memberOnline.end(), std::bind1st(std::mem_fun_ref(&CGuild::SendSkillInfoPacket),*this)); -> std::for_each(m_memberOnline.begin(), m_memberOnline.end(), std::bind(&CGuild::SendSkillInfoPacket, this, std::placeholders::_1));
	for_each(m_memberOnline.begin(), m_memberOnline.end(), std::bind1st(std::mem_fun_ref(&CGuild::SendSkillInfoPacket),*this)); -> for_each(m_memberOnline.begin(), m_memberOnline.end(), std::bind(&CGuild::SendSkillInfoPacket, this, std::placeholders::_1));
	for_each(m_memberOnline.begin(), m_memberOnline.end(), std::bind1st(std::mem_fun(&CGuild::SendGuildInfoPacket), this)); -> for_each(m_memberOnline.begin(), m_memberOnline.end(), std::bind(&CGuild::SendGuildInfoPacket, this, std::placeholders::_1));
	
17:
	for_each(v.begin(), v.end(), bind2nd(mem_fun(&CHARACTER::UpdateCharacter), iPulse)); -> for_each(v.begin(), v.end(), std::bind(&CHARACTER::UpdateCharacter, std::placeholders::_1, iPulse));
	for_each(v.begin(), v.end(), bind2nd(mem_fun(&CHARACTER::UpdateStateMachine), iPulse)); -> for_each(v.begin(), v.end(), std::bind(&CHARACTER::UpdateStateMachine, std::placeholders::_1, iPulse));
	for_each(i.begin(), i.end(), bind2nd(mem_fun(&CHARACTER::UpdateStateMachine), iPulse)); -> for_each(i.begin(), i.end(), std::bind(&CHARACTER::UpdateStateMachine, std::placeholders::_1, iPulse));
	
