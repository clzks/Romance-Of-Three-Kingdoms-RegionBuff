namespace 지역이점
{
    // 주,도시 세팅. 주는 삼국지 14를 기준으로
    array<int> 유주_도시 = { 도시_북평, 도시_계, 도시_양평 };         // 주도 : 북평
    array<int> 병주_도시 = { 도시_진양 };
    array<int> 기주_도시 = { 도시_업, 도시_남피 };
    array<int> 청주_도시 = { 도시_북해, 도시_평원 };
    array<int> 서주_도시 = { 도시_하비, 도시_소패 };
    array<int> 회남_도시 = { 도시_수춘, 도시_여강 };
    array<int> 연주_도시 = { 도시_진류, 도시_복양 };
    array<int> 예주_도시 = { 도시_허창, 도시_여남 };
    array<int> 사예_도시 = { 도시_낙양 };
    array<int> 경조_도시 = { 도시_장안, 도시_상용, 도시_완 };        // 주도 : 장안
    array<int> 량주_도시 = { 도시_무위, 도시_천수, 도시_안정 };      // 주도 : 무위
    array<int> 양주_도시 = { 도시_건업, 도시_오, 도시_회계, 도시_시상 };  // 주도 : 건업
    array<int> 형북_도시 = { 도시_양양, 도시_강릉, 도시_강하, 도시_신야 };  // 주도 : 양양
    array<int> 형남_도시 = { 도시_장사, 도시_무릉, 도시_계양, 도시_영릉 };  // 주도 : 장사
    array<int> 익주_도시 = { 도시_성도, 도시_한중, 도시_자동, 도시_강주, 도시_영안 };   // 주도 : 성도
    array<int> 남중_도시 = { 도시_건녕, 도시_운남 };

    const int 유주 = 0;       // YouZhou
    const int 병주 = 1;       // BingZhou
    const int 기주 = 2;       // JiZhou
    const int 청주 = 3;       // QingZhou
    const int 서주 = 4;       // XuZhou
    const int 회남 = 5;       // HuaiNan
    const int 연주 = 6;       // YanZhou
    const int 예주 = 7;       // YuZhou
    const int 사예 = 8;       // SiLi
    const int 경조 = 9;       // JingZhao
    const int 량주 = 10;      // LiangZhou
    const int 양주 = 11;      // YangZhou
    const int 형북 = 12;      // JingBei
    const int 형남 = 13;      // JingNan
    const int 익주 = 14;      // YiZhou
    const int 남중 = 15;      // NanZhong
    const int 지역_끝 = 16;

    const int 우호_대진국 = 0;   // 사예
    const int 우호_안식국 = 1;   // 경조
    const int 우호_천축국 = 2;   // 형남
    const int 우호_귀상국 = 3;   // 익주
    const int 우호_오환 = 4;     // 유주
    const int 우호_선비 = 5;     // *사용하지 않음
    const int 우호_강 = 6;       // 량주
    const int 우호_남만 = 7;     // 남중
    const int 우호_산월 = 8;     // 양주
    const int 우호_끝 = 9;
    
    array<string> 주_이름 = {"유주", "병주", "기주", "청주", "서주", "회남", "연주", "예주", "사예", "경조", "량주", "양주", "형북", "형남", "익주", "남중"};
    array<string> 교역대상_이름 = { "대진국", "안식국", "천축국", "귀상국", "오환", "선비", "강", "남만", "산월" };

    const int 교역불가_교역중 = 0;
    const int 교역불가_지역이점없음 = 1;
    const int 교역불가_기교부족 = 2;
    const int 교역불가_물자부족 = 3;
    const int 교역불가_최대 = 4;

    const int 이민족_공격 = 0;
    const int 이민족_수비 = 1;

    array<int> 오환_영향력 = { 유주, 병주, 기주, 청주, 연주 };
    array<int> 강_영향력 = { 예주,  사예, 경조 , 량주 };
    array<int> 남만_영향력 = { 형남, 익주, 남중 };
    array<int> 산월_영향력 = { 회남, 서주, 양주, 형북 };

    // ============================================== Customize ======================================================
    // ===============================================================================================================

    bool 플레이어_모든이점_적용 = false;                           // true시, 지역이점은 적용되지만, 교역 레벨은 그대로
    bool AI_모든이점_적용 = false;


    /* %로 설명해놓은 숫자들은 되도록 (0~100)사이의 값을 추천합니다. 0보다 작아지거나 아주 숫자가 커지면 의도하지 않은 결과가 나올 가능성이 있습니다 */

    array<int> 교역_금 = { 3000, 5000, 10000 };
    array<int> 교역_군량 = { 10000, 20000, 40000 };
    array<int> 교역_병사 = { 5000, 10000, 20000 };
    const int 교역_기교 = 1000;
    const int 교역_일수 = 36;          // (1 ~ 99 사이, 1 = 10일)
    const int 화친_기교 = 1000;
    const int 화친_일수 = 3;          // (1 ~ 3 사이, 1 = 10일)
    const int AI_교역_페널티 = 18;    // (1 = 10일, 교역 일수와 합이 99를 넘지 않게 해야함)
    const int AI_화친_레벨당_페널티 = 18; // (1 = 10일, 99까지 권장)

    const int 대진_1단계_창병방어 = 7;        // (%) 
    const int 대진_2단계_투석공격 = 10;       // (%)
    const int 대진_3단계_창병방어 = 15;       // (%)
    
    const int 안식_1단계_기병공격 = 7;        // (%)
    const int 안식_2단계_추가사격확률 = 20;      
    const int 안식_3단계_기병공격 = 15;       // (%)
    
    const int 천축_1단계_추가보존 = 100;      // 원래 값에 더해짐.  100으로 설정될 경우 (100 + 100)으로 두배.  
    const int 천축_2단계_징병치안보조 = 40;    // 징병시 치안감소를 경감시켜주는 비율
    const int 천축_3단계_공방상승 = 12;       // (%)

    const int 귀상_1단계_수송이동 = 4;
    const int 귀상_2단계_궁병공격 = 10;       // (%)
    const int 귀상_3단계_진정확률 = 20;       // (%) // (0% ~ 100%)

    
    const int 오환_3단계_포박상승 = 15;      // 0% 일경우는 효과 없음.  1%의 확률일 경우 -> 16%로 상승.

    const int 강_3단계_퇴각상승 = 25;       // (25일 경우 -> 포박확률을 기존의 75%로 경감시킴)  

    const int 남만_3단계_숲강화 = 15;       // (%)

    const int 산월_3단계_포박상승 = 20;      // 0% 일경우는 효과 없음.  1%의 확률일 경우 -> 21%로 상승.

    const int 병주_지역이점_기력상승 = 4;
    const int 병주_지역이점_이동증가 = 4;
    
    const int 기주_지역이점_충성상승 = 2;
    const int 기주_지역이점_녹봉할인 = 40;    // (%)

    const int 청주_지역이점_시설상승 = 10;    // (최대 체력 비율)
    const int 청주_지역이점_치안상승 = 5;

    const int 서주_지역이점_거점공격 = 20;    // (%)
    const int 서주_지역이점_내구회복 = 4;     // (최대 체력 비율. 관문, 항구는 절반)

    const int 회남_지역이점_기력경감 = 20;    // (%)
    
    const int 연주_지역이점_생산증가 = 20;    // (%)

    const int 예주_지역이점_이동소환경감 = 20;         // 10의 배수로 세팅
    const int 예주_지역이점_귀환경감 = 30;            // 10의 배수로 세팅

    const int 형북_지역이점_기교획득 = 100;
    const int 형북_지역이점_등용상승 = 20;            // (20일 경우 -> 기본확률 x 1.2)  기본확률이 0% 경우 효과없음

    const int 이민족_지속기간 = 9;           // 1 = 10일 
    const int 이민족_원군요청_기교 = 2000;
    // ==================================================================================================================================
    // ==================================================================================================================================
    class RegionBuff
    {
        array<int> forceRegionBuff(도시_끝);                           // 세력별 확인용
        pk::point rb_checkPoint = pk::point(0, 0);                     // 지역이점 스크립트 적용 여부 체크
        array<array<pk::point>> dataPointArray(도시_끝);               // 세력별 data건물 위치 배열
        array<pk::point> barbarianDataArray(4);                       // 이민족 원군요청 데이터
        bool loadSuccess = false;
        RegionBuff()
        {
            pk::bind(102, pk::trigger102_t(Init));
            pk::bind(102, pk::trigger102_t(OnGameInit));            // 특기 설명 수정을 위해 추가
            pk::bind(104, pk::trigger104_t(OnScenarioEnd));
            pk::bind(107, pk::trigger107_t(UpdateDayStart));
            pk::bind(108, pk::trigger108_t(UpdateMonthStart));
            pk::bind(109, pk::trigger109_t(UpdateSeasonStart));
            pk::bind(111, pk::trigger111_t(UpdateTurnStart));
            pk::bind(112, pk::trigger112_t(UpdateTurnEnd));
            pk::bind(174, pk::trigger174_t(UpdateUnitTurnEnd));

            pk::reset_func(101);
            pk::set_func(101, pk::func101_t(func101));                // 101 징병 치안 증감_기마책사님 버전
            pk::reset_func(102);
            pk::set_func(102, pk::func102_t(func102));                // 102 병기생산량_기마책사님 버전
            pk::reset_func(111);
            pk::set_func(111, pk::func111_t(func111));                // 111 등용확률
            pk::reset_func(158);
            pk::set_func(158, pk::func158_t(func158));                // 158 본거지 발생 확률
            pk::reset_func(163);
            pk::set_func(163, pk::func163_t(func163));                // 163 부대 능력치_기마책사님 버전
            pk::reset_func(168);
            pk::set_func(168, pk::func168_t(func168));                // 168 점령 후 처리_기마책사님 버전
            pk::reset_func(205);
            pk::set_func(205, pk::func205_t(func205));                // 205 계략 소비 기력_기마책사님 버전
            pk::reset_func(211);
            pk::set_func(211, pk::func211_t(func211));                // 211 건물의 공격 데미지_기마책사님 버전
            pk::reset_func(220);
            pk::set_func(220, pk::func220_t(func220));                // 220 포로 확률

            AddRegionBuffHelpMenu();                                  // Shift 우클릭 지역이점 도움말 
            AddPrintRegionBuffMenu();                                 // Shift 우클릭 지역이점 현황 표시
            AddTradeMenu();                                           // 외국 교역 메뉴 추가
            AddrapprochementMenu();                                   // 이민족 교류 메뉴추가
        }

        // 게임 최초 실행시 지역이점 적용여부 확인작업
        void Init()
        {
            ArrayInit();
            loadSuccess = true;
            BarbarianDataSetting();
            pk::building@ building = pk::get_building(rb_checkPoint);
            // 지역이점 적용 여부 확인 후 시작
            // 좌표(0,0)에 건물이 존재할 시 지역이점 db가 생성된 것으로 간주함
            if (building != null)
            {
                return;
            }
            else
            {
                // 좌표(0,0)이 공백일때 새롭게 세팅
                pk::building@ building = pk::create_building(pk::get_facility(시설_석벽), rb_checkPoint, -1);
                building.hp = 16383;
                building.completed = true;
            }
 
            validForceUpdate(true);
            //Test();
        }

        void OnGameInit()
        {
            pk::get_skill(특기_백출).desc = pk::u8encode("부대계략 소모기력 반감");
        }

        void OnScenarioEnd()
        {
            loadSuccess = false;
        }

        // 새날 적용될 것
        void UpdateDayStart()
        {
            validForceTrigger();
        }

        // 새달 적용될 것
        void UpdateMonthStart()
        {
            ExecuteJiZhouLoyalty();
            ExecuteQingZhouPublicOrder();
            ExecuteJingBeiTech();
            UpdateBarbarianRelation();
        }

        // 새분기 적용될 것
        void UpdateSeasonStart()
        {
            ExecuteBarbarianSupport();
        }

        // 턴 시작시 적용될 것
        void UpdateTurnStart(pk::force@ force)
        {
            UpdateRelation(force);
            ExecuteBarbarianSkill(force);
            ExecuteKushanLevelThree(force);
            ExecuteBingZhouEnergy(force);
        }

        // 턴 종료시 적용될 것
        void UpdateTurnEnd(pk::force@ force)
        {
            ExecuteJiZhouSalary(force);
            ExecuteQingZhouFacility(force);
            ExecuteXuZhouHp(force);
            ExecuteYuZhou(force);
            UpdateAITradeTimer(force);
            //DevelopementKousekiUpdate(force);
        }

        // 부대 행동 완료 시 적용될 것
        void UpdateUnitTurnEnd(pk::unit@ unit)
        {
            ExecuteParthianLevelThree(unit);
        }

        void Test()
        {
            auto forces = pk::get_force_list();

            for (int i = 0; i < forces.count; ++i)
            {
                pk::force@ force = forces[i];

                if (true == IsValidForce(force) && true == force.is_player())
                {
                    AddRelationValue(force, 우호_오환, 1);
                    AddRelationValue(force, 우호_강, 1);
                    AddRelationValue(force, 우호_남만, 2);
                    AddRelationValue(force, 우호_오환, 1);
                    AddRelationValue(force, 우호_산월, 2);
                    AddRelationValue(force, 우호_대진국, 3);
                    AddRelationValue(force, 우호_안식국, 3);
                    AddRelationValue(force, 우호_천축국, 3);
                    AddRelationValue(force, 우호_귀상국, 2);
                    AddRelationValue(force, 우호_선비, 1);
                }
            }
        }

        // ======================================================  지역 이점 ============================================================
        
        // AI의 자체 교역 쿨타임을 업데이트 하는 함수. AI 턴종시 실행
        void UpdateAITradeTimer(pk::force@ force)
        {
            if (false == IsValidForce(force))
            {
                return;
            }

            if (false == force.is_player())
            {
                // AI의 이민족 교역 
                UpdateAIRapprochmentTerm(force);

                if (0 >= GetAIRapprochmentTerm(force))
                {
                    int targetId = AIRapprochement(force);
                    if (-1 != targetId)
                    {
                        ExecuteRapprochment(force, targetId);
                        // AI의 이민족 쿨타임
                        SetAIRapprochmentTerm(force, (AI_화친_레벨당_페널티 + 3) + AI_화친_레벨당_페널티 * GetRelationLevel(force, targetId));
                    }
                }

                // AI의 외국 교역
                int targetId = AITrade(force);
                if (-1 != targetId)
                {
                    ExecuteTrade(force, targetId);
                }
            }
        }

        // 안식국 3단계 효과
        void ExecuteParthianLevelThree(pk::unit@ unit)
        {
            if (false == pk::is_alive(unit))
            {
                return;
            }

            if (병기_군마 != pk::get_weapon_id(unit))
            {
                return;
            }

            pk::force@ force = pk::get_force(unit.get_force_id());

            if (true == IsValidForce(force))
            {
                if (GetRelationLevel(force, 우호_안식국) >= 2 && true == force.tech[기교_기사])
                {
                    int value = 안식_2단계_추가사격확률;

                    if (false == IsEnableZhou(force, 경조))
                    {
                        value = value / 2;
                    }

                    if (true == pk::rand_bool(value))
                    {
                        array<pk::point> arr = pk::range(unit.get_pos(), 2, 2);
                        int count = 0;
                        array<pk::unit@> targets(6);

                        for (int i = 0; i < arr.length; ++i)
                        {
                            pk::unit@ target = pk::get_unit(arr[i]);

                            if (target == null || !pk::is_enemy(unit, target))
                            {
                                continue;
                            }

                            @targets[count] = target;
                            count++;
                        }

                        if (count != 0)
                        {
                            pk::attack(unit, targets[pk::rand(count)]);
                            pk::say(pk::u8encode("하하하. 이것이 안식사법이다!"), pk::get_person(unit.leader), unit);
                        }
                    }
                }
            }
        }
        
        // 이민족 2단계 특기전수 보너스
        void ExecuteBarbarianSkill(pk::force@ force)
        {
            pk::person@ kunshu = pk::get_person(force.kunshu);

            //if (!force.is_player())
            //{
            //    return;
            //}

            int day = pk::get_day();

            if (1 != day )
            {
                return;
            }

            int month = pk::get_month();

            if (false == IsValidForce(force))
            {
                return;
            }

            pk::list<pk::person@> officers = pk::get_person_list(force, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));
            
            if (officers.count == 0)
            {
                return;
            }


            int level = 0;
            int rand = -1;

            level = GetRelationLevel(force, 우호_오환);
            int barbarianSkillId = -1;
            string skillName = "";
            if (level >= 2 && month == 1)
            {
                pk::list<pk::person@> temp;
                
                for (int i = 0; i < officers.count; ++i)
                {
                    if (false == IsValidPerson(officers[i]))
                    {
                        continue;
                    }

                    if (-1 == officers[i].skill)
                    {
                        temp.add(officers[i]);
                    }
                }

                array<pk::person@> arr = pk::list_to_array(temp);
                array<pk::person@> result = RandPersonArray(arr, 5);

                pk::person@ barbarian = pk::get_person(무장_오환장수);

                rand = pk::rand(100);
                if (rand <= 14)
                {
                    // 백마
                    barbarianSkillId = 특기_백마;
                    skillName = "백마";
                }
                else if (rand <= 24)
                {
                    // 급습
                    barbarianSkillId = 특기_급습;
                    skillName = "급습";
                }
                else if (rand <= 28)
                {
                    // 번식
                    barbarianSkillId = 특기_번식;
                    skillName = "번식";
                }
                else if (rand <= 68)
                {
                    // 친오
                    barbarianSkillId = 특기_친오;
                    skillName = "친오";
                }
                else if (rand <= 73)
                {
                    // 맹장
                    barbarianSkillId = 특기_맹장;
                    skillName = "맹장";
                }
                else if (rand <= 98)
                {
                    // 앙양
                    barbarianSkillId = 특기_앙양;
                    skillName = "앙양";
                }
                else
                {
                    // 기장
                    barbarianSkillId = 특기_기장;
                    skillName = "기장";
                }
                
                if (result.length > 0)
                {
                    if (true == force.is_player())
                    {
                        // 전수무장 선택
                        SelectPersonAddSkill(result, kunshu, barbarian, "오환", barbarianSkillId, skillName);
                    }
                    else
                    {
                        // 컴터 로직
                        if (barbarianSkillId != 특기_친오)
                        {
                            result[0].skill = barbarianSkillId;
                            string s = pk::format("\x1b[2x{}군\x1b[0x의 \x1b[1x{}\x1b[0x, \x1b[2x{}\x1b[0x에게서 특기 \x1b[1x{}\x1b[0x 사사", pk::u8decode(pk::get_name(force)), pk::u8decode(pk::get_name(result[0])), "오환", skillName);
                            pk::history_log(result[0].get_pos(), force.color, pk::u8encode(s));
                        }
                    }
                }
            }

            level = GetRelationLevel(force, 우호_강);

            if (level >= 2 && month == 10)
            {
                pk::list<pk::person@> temp;

                for (int i = 0; i < officers.count; ++i)
                {
                    if (false == IsValidPerson(officers[i]))
                    {
                        continue;
                    }

                    if (-1 == officers[i].skill)
                    {
                        temp.add(officers[i]);
                    }
                }

                array<pk::person@> arr = pk::list_to_array(temp);
                array<pk::person@> result = RandPersonArray(arr, 5);

                pk::person@ barbarian = pk::get_person(무장_강장수);

                rand = pk::rand(100);

                if (rand <= 14)
                {
                    // 행군
                    barbarianSkillId = 특기_행군;
                    skillName = "행군";
                }
                else if (rand <= 24)
                {
                    // 급습
                    barbarianSkillId = 특기_급습;
                    skillName = "급습";
                }
                else if (rand <= 28)
                {
                    // 번식
                    barbarianSkillId = 특기_번식;
                    skillName = "번식";
                }
                else if (rand <= 68)
                {
                    // 친강
                    barbarianSkillId = 특기_친강;
                    skillName = "친강";
                }
                else if (rand <= 73)
                {
                    // 맹장
                    barbarianSkillId = 특기_맹장;
                    skillName = "맹장";
                }
                else if (rand <= 98)
                {
                    // 앙양
                    barbarianSkillId = 특기_앙양;
                    skillName = "앙양";
                }
                else
                {
                    // 도주
                    barbarianSkillId = 특기_도주;
                    skillName = "도주";
                }

                if (result.length > 0)
                {
                    if (true == force.is_player())
                    {
                        // 전수무장 선택
                        SelectPersonAddSkill(result, kunshu, barbarian, "강", barbarianSkillId, skillName);
                    }
                    else
                    {
                        // 컴터 로직
                        if (barbarianSkillId != 특기_친강)
                        {
                            result[0].skill = barbarianSkillId;
                            string s = pk::format("\x1b[2x{}군\x1b[0x의 \x1b[1x{}\x1b[0x, \x1b[2x{}\x1b[0x에게서 특기 \x1b[1x{}\x1b[0x 사사", pk::u8decode(pk::get_name(force)), pk::u8decode(pk::get_name(result[0])), "강", skillName);
                            pk::history_log(result[0].get_pos(), force.color, pk::u8encode(s));
                        }
                    }
                }
            }

            level = GetRelationLevel(force, 우호_남만);

            if (level >= 2 && month == 4)
            {
                pk::list<pk::person@> temp;

                for (int i = 0; i < officers.count; ++i)
                {
                    if (false == IsValidPerson(officers[i]))
                    {
                        continue;
                    }

                    if (-1 == officers[i].skill)
                    {
                        temp.add(officers[i]);
                    }
                }

                array<pk::person@> arr = pk::list_to_array(temp);
                array<pk::person@> result = RandPersonArray(arr, 5);

                pk::person@ barbarian = pk::get_person(무장_남만장수);

                rand = pk::rand(100);

                if (rand <= 14)
                {
                    // 난전
                    barbarianSkillId = 특기_난전;
                    skillName = "난전";
                }
                else if (rand <= 24)
                {
                    // 등갑
                    barbarianSkillId = 특기_등갑;
                    skillName = "등갑";
                }
                else if (rand <= 34)
                {
                    // 답파
                    barbarianSkillId = 특기_답파;
                    skillName = "답파";
                }
                else if (rand <= 74)
                {
                    // 친만
                    barbarianSkillId = 특기_친만;
                    skillName = "친만";
                }
                else if (rand <= 78)
                {
                    // 맹장
                    barbarianSkillId = 특기_맹장;
                    skillName = "맹장";
                }
                else if (rand <= 98)
                {
                    // 앙양
                    barbarianSkillId = 특기_앙양;
                    skillName = "앙양";
                }
                else
                {
                    // 극장
                    barbarianSkillId = 특기_극장;
                    skillName = "극장";
                }

                if (result.length > 0)
                {
                    if (true == force.is_player())
                    {
                        // 전수무장 선택
                        SelectPersonAddSkill(result, kunshu, barbarian, "남만", barbarianSkillId, skillName);
                    }
                    else
                    {
                        // 컴터 로직
                        if (barbarianSkillId != 특기_친만)
                        {
                            result[0].skill = barbarianSkillId;
                            string s = pk::format("\x1b[2x{}군\x1b[0x의 \x1b[1x{}\x1b[0x, \x1b[2x{}\x1b[0x에게서 특기 \x1b[1x{}\x1b[0x 사사", pk::u8decode(pk::get_name(force)), pk::u8decode(pk::get_name(result[0])), "남만", skillName);
                            pk::history_log(result[0].get_pos(), force.color, pk::u8encode(s));
                        }
                    }
                }
            }

            level = GetRelationLevel(force, 우호_산월);

            if (level >= 2 && month == 7)
            {
                pk::list<pk::person@> temp;

                for (int i = 0; i < officers.count; ++i)
                {
                    if (false == IsValidPerson(officers[i]))
                    {
                        continue;
                    }

                    if (-1 == officers[i].skill)
                    {
                        temp.add(officers[i]);
                    }
                }

                array<pk::person@> arr = pk::list_to_array(temp);
                array<pk::person@> result = RandPersonArray(arr, 5);

                pk::person@ barbarian = pk::get_person(무장_산월장수);

                rand = pk::rand(100);

                if (rand <= 14)
                {
                    // 소탕
                    barbarianSkillId = 특기_소탕;
                    skillName = "소탕";
                }
                else if (rand <= 24)
                {
                    // 강탈
                    barbarianSkillId = 특기_강탈;
                    skillName = "강탈";
                }
                else if (rand <= 34)
                {
                    // 노발
                    barbarianSkillId = 특기_노발;
                    skillName = "노발";
                }
                else if (rand <= 74)
                {
                    // 친월
                    barbarianSkillId = 특기_친월;
                    skillName = "친월";
                }
                else if (rand <= 78)
                {
                    // 맹장
                    barbarianSkillId = 특기_맹장;
                    skillName = "맹장";
                }
                else if (rand <= 98)
                {
                    // 앙양
                    barbarianSkillId = 특기_앙양;
                    skillName = "앙양";
                }
                else
                {
                    // 포박
                    barbarianSkillId = 특기_포박;
                    skillName = "포박";
                }

                if (result.length > 0)
                {
                    if (true == force.is_player())
                    {
                        // 전수무장 선택
                        SelectPersonAddSkill(result, kunshu, barbarian, "산월", barbarianSkillId, skillName);
                    }
                    else
                    {
                        // 컴터 로직
                        if (barbarianSkillId != 특기_친월)
                        {
                            result[0].skill = barbarianSkillId;
                            string s = pk::format("\x1b[2x{}군\x1b[0x의 \x1b[1x{}\x1b[0x, \x1b[2x{}\x1b[0x에게서 특기 \x1b[1x{}\x1b[0x 사사", pk::u8decode(pk::get_name(force)), pk::u8decode(pk::get_name(result[0])), "산월", skillName);
                            pk::history_log(result[0].get_pos(), force.color, pk::u8encode(s));
                        }
                    }
                }
            }
        }

        void SelectPersonAddSkill(array<pk::person@> result, pk::person@ kunshu, pk::person@ barbarian, string forceName, int barbarianSkillId, string skillName)
        {
            pk::force@ force = pk::get_force(kunshu.get_force_id());
            pk::play_se(17);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에서 사자가 도착했습니다.", forceName)));
            pk::message_box(pk::u8encode(pk::format("\x1b[1x{}\x1b[0x공 잘 지내셨소? 오늘은 우리 대왕의 명을 받아 찾아뵙게 되었소이다.", pk::u8decode(pk::get_name(kunshu)))), barbarian);
            pk::message_box(pk::u8encode("오오.. 어쩐일로 오셨는가?"), kunshu);
            pk::message_box(pk::u8encode(pk::format("우리 대왕께서는 맹우를 위해서 우리 \x1b[2x{}\x1b[0x의 강력한 기술을 전해준다고 하셨소.", forceName)), barbarian);
            pk::message_box(pk::u8encode(pk::format("우리가 각별히 아끼는 특기인 \x1b[1x{}\x1b[0x(을)를 그대들에게 전수해주겠다고 하셨는데 어떻소?", skillName)), barbarian);

            array<string> menuArray(result.length + 1);
            for (int i = 0; i < result.length; ++i)
            {
                menuArray[i] = pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에게 전수", pk::u8decode(pk::get_name(result[i]))));
            }
            menuArray[result.length] = pk::u8encode("거절한다");
            int choose = pk::choose(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x 특기를 전수받을 무장을 선택해주십시오.\n", skillName)), menuArray);

            if (choose < result.length)
            {
                result[choose].skill = barbarianSkillId;
                // 승낙
                pk::message_box(pk::u8encode("하하하. 큰 은혜를 입었군. 정말 감사하다고 전해주시오."), kunshu);
                pk::play_se(10);
                pk::message_box(pk::u8encode(pk::format("\x1b[1x{}\x1b[0x에게 특기 \x1b[1x{}\x1b[0x(을)를 전수했습니다.", pk::u8decode(pk::get_name(result[choose])), skillName)));
                string s = pk::format("\x1b[2x{}군\x1b[0x의 \x1b[1x{}\x1b[0x, \x1b[2x{}\x1b[0x에게서 특기 \x1b[1x{}\x1b[0x 사사", pk::u8decode(pk::get_name(force)), pk::u8decode(pk::get_name(result[choose])), forceName, skillName);
                pk::history_log(result[choose].get_pos(), force.color, pk::u8encode(s));
            }
            else
            {
                // 거절
                pk::play_se(7);
                pk::message_box(pk::u8encode("배려는 감사하지만 거절해야겠소."), kunshu);
                pk::message_box(pk::u8encode("으음... 유감이오. 그럼 이만.."), barbarian);
            }
        }

        // 이민족 물자 제공
        void ExecuteBarbarianSupport()
        {
            auto forceList = pk::get_force_list();
            array<pk::force@> arr = pk::list_to_array(forceList);
            int level = 0;

            for (int i = 0; i < arr.length; ++i)
            {
                if (false == IsValidForce(arr[i]))
                {
                    continue;
                }

                level = GetRelationLevel(arr[i], 우호_오환);

                if (level >= 2)
                {
                    for (int j = 0; j < 유주_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(유주_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 5000, true);
                            pk::add_weapon_amount(city, 병기_군마 , 5000, true);
                            break;
                        }
                    }
                }
                else if (level > 0)
                {
                    for (int j = 0; j < 유주_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(유주_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 3000, true);
                            pk::add_weapon_amount(city, 병기_군마, 3000, true);
                            break;
                        }
                    }
                }

                level = GetRelationLevel(arr[i], 우호_강);

                if (level >= 2)
                {
                    for (int j = 0; j < 량주_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(량주_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 5000, true);
                            pk::add_weapon_amount(city, 병기_군마, 5000, true);
                            break;
                        }
                    }
                }
                else if (level > 0)
                {
                    for (int j = 0; j < 량주_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(량주_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 3000, true);
                            pk::add_weapon_amount(city, 병기_군마, 3000, true);
                            break;
                        }
                    }
                }

                level = GetRelationLevel(arr[i], 우호_남만);

                if (level >= 2)
                {
                    for (int j = 0; j < 남중_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(남중_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 5000, true);
                            pk::add_weapon_amount(city, 병기_극, 2500, true);
                            pk::add_weapon_amount(city, 병기_창, 2500, true);
                            break;
                        }
                    }
                }
                else if (level > 0)
                {
                    for (int j = 0; j < 남중_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(남중_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 3000, true);
                            pk::add_weapon_amount(city, 병기_극, 1500, true);
                            pk::add_weapon_amount(city, 병기_창, 1500, true);
                            break;
                        }
                    }
                }

                level = GetRelationLevel(arr[i], 우호_산월);

                if (level >= 2)
                {
                    for (int j = 0; j < 양주_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(양주_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 3000, true);
                            pk::add_weapon_amount(city, 병기_극, 3000, true);
                            if (true == arr[i].tech[기교_투석개발])
                            {
                                pk::add_weapon_amount(city, 병기_투함, 1, true);
                            }
                            else
                            {
                                pk::add_weapon_amount(city, 병기_누선, 1, true);
                            }
                            break;
                        }
                    }
                }
                else if (level > 0)
                {
                    for (int j = 0; j < 양주_도시.length; ++j)
                    {
                        pk::city@ city = pk::get_city(양주_도시[j]);

                        if (city.get_force_id() == arr[i].get_force_id())
                        {
                            pk::add_troops(city, 3000, true);
                            pk::add_weapon_amount(city, 병기_극, 3000, true);
                            break;
                        }
                    }
                }
            }
        }

        // 귀상국 3단계 이점. 부대 상태이상 회복 및 행동가능
        void ExecuteKushanLevelThree(pk::force@ force)
        {
            if (3 > GetRelationLevel(force, 우호_귀상국))
            {
                return;
            }

            int value = 귀상_3단계_진정확률;
            if (false == IsEnableZhou(force, 익주))
            {
                value = value / 2;
            }

            auto unitList = pk::get_unit_list(force);
            array<pk::unit@> arr = pk::list_to_array(unitList);

            for (int i = 0; i < arr.length; ++i)
            {
                if (false == pk::is_alive(arr[i]))
                {
                    continue;
                }

                if (부대상태_통상 != arr[i].status )
                {
                    

                    if (true == pk::rand_bool(value))
                    {
                        arr[i].status = 부대상태_통상;

                        if (pk::rand(2) == 0)
                        {
                            pk::say(pk::u8encode("침착하게 대열을 갖추어라!"), pk::get_person(arr[i].leader), arr[i]);
                        }
                        else
                        {
                            pk::say(pk::u8encode("병사들의 동요가 빠르게 가라앉는군. 이것이 아미타바인가.."), pk::get_person(arr[i].leader), arr[i]);
                        }
                    }
                }

                if (true == arr[i].action_done && arr[i].status == 부대상태_통상)
                {
                    pk::set_action_done(arr[i], false);
                }
            }
        }

        // 병주 지역이점. 부대 기력상승
        void ExecuteBingZhouEnergy(pk::force@ force)
        {
            if (false == IsEnableZhou(force, 병주))
            {
                return;
            }

            int forceId = force.get_force_id();
            auto unitList = pk::get_unit_list(force);
            array<pk::unit@> arr = pk::list_to_array(unitList);
            

            for (int i = 0; i < arr.length; ++i)
            {
                if (arr[i].type == 0)
                {
                    bool isEnemyGround = false;

                    pk::city@ city = pk::get_city(pk::get_city_id(arr[i].get_pos()));

                    if (city == null)
                    {
                        isEnemyGround = true;
                    }
                    else
                    {
                        int cityId = city.get_force_id();
                        if (cityId != forceId && true == pk::is_enemy(force, city))
                        {
                            isEnemyGround = true;
                        }
                    }

                    if (true == isEnemyGround)
                    {
                        pk::add_energy(arr[i], 병주_지역이점_기력상승, true);
                    }
                }
            }
        }
        
        void ExecuteBingZhouMove(pk::force@ force, int& mov)
        {
            if (false == IsEnableZhou(force, 병주))
            {
                return;
            }

            mov += 병주_지역이점_이동증가;
        }

        // 기주 지역이점. 충성도 증가
        void ExecuteJiZhouLoyalty()
        {
            auto forces = pk::get_force_list();

            for (int i = 0; i < forces.count; ++i)
            {
                pk::force@ force = forces[i];

                if (true == IsValidForce(force))
                {
                    if (false == IsEnableZhou(force, 기주))
                    {
                        continue;
                    }

                    auto list = pk::get_person_list(force, pk::mibun_flags(신분_도독, 신분_태수, 신분_일반));

                    if (0 == list.count)
                    {
                        continue;
                    }

                    array<pk::person@> officers = pk::list_to_array(list);

                    for (int i = 0; i < officers.length; ++i)
                    {
                        if (true == IsValidPerson(officers[i]))
                        {
                            if (int(officers[i].loyalty) < 120)
                            {
                                pk::add_loyalty(officers[i], 기주_지역이점_충성상승);
                            }
                        }
                    }
                }
            }
        }

        // 기주 지역이점.  봉록 절약
        void ExecuteJiZhouSalary(pk::force@ force)
        {
            if (false == IsEnableZhou(force, 기주))
            {
                return;
            }
            
            auto cities = pk::get_city_list(force);
            
            for (int i = 0; i < cities.count; ++i)
            {
                pk::building@ city = pk::get_building(cities[i].get_pos());
                auto list = pk::get_person_list(city, pk::mibun_flags(신분_도독, 신분_태수, 신분_일반));
                
                if (0 == list.count)
                {
                    continue;
                }

                array<pk::person@> officers = pk::list_to_array(list);
                int savingGold = 0;
            
                for (int j = 0; j < officers.length; ++j)
                {
                    pk::person@ p = officers[j];
            
                    if (true == IsValidPerson(p))
                    {
                        // 무장의 기본급여
                        int pay = 5;
            
                        // 관직이 있는 경우 관직의 급여 추가
                        if (p.rank != -1)
                        {
                            pk::rank@ rank = pk::get_rank(p.rank);
                            pay += rank.pay;
                        }
            
                        // 급여의 40%를 도시에 더 해준다.
                        savingGold += (pay * 기주_지역이점_녹봉할인) / 100;
                    }
                }
            
                pk::add_gold(cities[i], savingGold, false);
            }
        }
        
        // 청주 지역이점. 내정시설 내구도 상승
        void ExecuteQingZhouFacility(pk::force@ force)
        {
            if (false == IsEnableZhou(force, 청주))
            {
                return;
            }

            auto cities = pk::get_city_list(force);
            
            for (int i = 0; i < cities.count; ++i)
            {
                pk::city@ city = cities[i];
            
                for (int j = 0; j < city.max_devs; ++j)
                {
                    pk::building@ building = city.dev[j].building;
            
                    if (true == IsValidBuilding(building))
                    {
                        int max_hp = pk::get_facility(building.facility).hp;

                        int value = (max_hp * 청주_지역이점_시설상승) / 100;

                        if (!building.completed)
                        {
                            if (building.hp + value >= max_hp)
                            {
                                value = max_hp - building.hp - 1;
                            }
                        }
                        else
                        {
                            if (building.hp + value >= max_hp)
                            {
                                value = max_hp - building.hp;
                            }
                        }

                        pk::add_hp(building, value, true);
                    }
                }
            }

        }
        // 청주 지역이점. 치안 창승
        void ExecuteQingZhouPublicOrder()
        {
            auto forces = pk::get_force_list();

            for (int i = 0; i < forces.count; ++i)
            {
                pk::force@ force = forces[i];

                if (true == IsValidForce(force))
                {
                    if (false == IsEnableZhou(force, 청주))
                    {
                        continue;
                    }

                    auto cities = pk::get_city_list(force);
                    
                    for (int j = 0; j < cities.count; ++j)
                    {
                        pk::add_public_order(cities[j], 청주_지역이점_치안상승, true);
                    }
                }
            }
        }

        // 연주 지역이점. 창,극,노 생산량 증가
        void ExecuteYanZhou(pk::force@ force, int& value)
        {
            if (true == IsEnableZhou(force, 연주))
            {
                value = (value * (100 + 연주_지역이점_생산증가)) / 100;
            }
        }

        // 회남 지역이점, 계략 소모 기력 감소
        void ExecuteHuaiNan(pk::force@ force, int& energe)
        {
            if (true == IsEnableZhou(force, 회남))
            {
                energe = (energe * (100 - 회남_지역이점_기력경감)) / 100;
            }
        }

        // 서주 지역이점. 거점 공격력 증가
        void ExecuteXuZhouDamage(pk::force@ force, pk::damage_info& info)
        {
            if (true == IsEnableZhou(force, 서주))
            {
                info.troops_damage = (info.troops_damage * (100 + 서주_지역이점_거점공격)) / 100;
            }
        }

        // 서주 지역이점. 거점 hp 회복
        void ExecuteXuZhouHp(pk::force@ force)
        {
            if (false == IsEnableZhou(force, 서주))
            {
                return;
            }

            if (true == IsValidForce(force))
            {
                int forceId = force.get_force_id();

                auto cities = pk::get_city_list(force);

                // 도시 체력회복
                for (int i = 0; i < cities.count; ++i)
                {
                    int maxHp = cities[i].get_max_hp();
                    int value = (maxHp * 서주_지역이점_내구회복) / 100;

                    pk::add_hp(cities[i], value, true);
                }

                for (int i = 건물_관문시작; i < 건물_항구끝; ++i)
                {
                    pk::building@ building = pk::get_building(i);

                    if (true == IsValidBuilding(building) && forceId == building.get_force_id())
                    {
                        int maxHp = pk::get_max_hp(building);
                        int value = (maxHp * 서주_지역이점_내구회복) / 200;

                        pk::add_hp(building, value, true);
                    }
                }
            }
        }

        // 예주 지역이점. 이동, 소환, 귀환의 행동일수 경감
        void ExecuteYuZhou(pk::force@ force)
        {
            if (false == IsEnableZhou(force, 예주))
            {
                return;
            }

            // 세력의 무장 배열
            array<pk::person@> mooArray = pk::list_to_array(pk::get_person_list(force, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반)));

            for (int i = 0; i < mooArray.length; ++i)
            {
                if (mooArray[i].order == 무장임무_이동 || mooArray[i].order == 무장임무_소환)
                {
                    if (mooArray[i].absence_timer <= ((예주_지역이점_이동소환경감) / 10 + 1))
                    {
                        mooArray[i].location = mooArray[i].target[0];
                    }
                }

                if (mooArray[i].order == 무장임무_귀환)
                {
                    if (mooArray[i].absence_timer <= ((예주_지역이점_귀환경감) / 10 + 1))
                    {
                        mooArray[i].location = mooArray[i].service;
                    }
                }
            }
        }

        // 형북 지역이점. 재야무장, 포로무장 등용확률 증가
        void ExecuteJingBeiMoo(pk::force@ force, int& n)
        {
            if (false == IsEnableZhou(force, 형북))
            {
                return;
            }

            n = (n * (100 + 형북_지역이점_등용상승)) / 100;
        }

        // 형북 지역이점. 매달 기교 상승
        void ExecuteJingBeiTech()
        {
            auto forces = pk::get_force_list();

            for (int i = 0; i < forces.count; ++i)
            {
                pk::force@ force = forces[i];

                if (true == IsValidForce(force))
                {
                    if (false == IsEnableZhou(force, 형북))
                    {
                        continue;
                    }

                    pk::point pos = pk::get_city(도시_양양).get_pos();
                    pk::add_tp(force, 형북_지역이점_기교획득, pos);
                }
            }
        }

        // 교역을 업데이트 하는 함수
        void UpdateRelation(pk::force@ force)
        {
            // 이민족 교류 업데이트
            UpdateRapprochmentDay(force);

            // 세력이 교역중인이면 날짜 업데이트
            if (true == IsTrading(force))
            {
                UpdateTradeDay(force);
            }
            else
            {
                return;
            }

            // 교역일수가 모두 소진되었을 경우 우호도 상승
            if (0 == GetTradeDay(force))
            {
                AddRelationValue(force, GetTradeForce(force), 1);
                ResetTrade(force);
            }
        }
        
        // 이민족의 우호도 하락 업데이트. 매달 업데이트
        void UpdateBarbarianRelation()
        {
            auto forces = pk::get_force_list();

            for (int i = 0; i < forces.count; ++i)
            {
                pk::force@ force = forces[i];
                int forceId = force.get_force_id();

                if (false == IsValidForce(force))
                {
                    return;
                }

                if (true == 플레이어_모든이점_적용 && true == force.is_player())
                {
                    return;
                }

                if (true == AI_모든이점_적용 && false == force.is_player())
                {
                    return;
                }

                // 오환과 우호도가 존재할 시
                if (0 < GetRelationLevel(force, 우호_오환))
                {
                    // 지역이점 유효 체크
                    if (false == IsEnableZhou(force, 유주))
                    {
                        AddRelationValue(force, 우호_오환, -1);
                    }
                    else
                    {
                        // 유주 도시의 치안 체크 70 밑이면 하락
                        for (int j = 0; j < 유주_도시.length; ++j)
                        {
                            if (forceId == 유주_도시[j])
                            {
                                pk::city@ city = pk::get_city(유주_도시[j]);
                                if (city.public_order < 70)
                                {
                                    AddRelationValue(force, 우호_오환, -1);
                                    break;
                                }
                            }
                        }
                    }
                }

                // 강과 우호도가 존재할 시
                if (0 < GetRelationLevel(force, 우호_강))
                {
                    // 지역이점 유효 체크
                    if (false == IsEnableZhou(force, 량주))
                    {
                        AddRelationValue(force, 우호_강, -1);
                    }
                    else
                    {
                        // 량주 도시의 치안 체크 70 밑이면 하락
                        for (int j = 0; j < 량주_도시.length; ++j)
                        {
                            if (forceId == 량주_도시[j])
                            {
                                pk::city@ city = pk::get_city(량주_도시[j]);
                                if (city.public_order < 70)
                                {
                                    AddRelationValue(force, 우호_강, -1);
                                    break;
                                }
                            }
                        }
                    }
                }

                // 남만과 우호도가 존재할 시
                if (0 < GetRelationLevel(force, 우호_남만))
                {
                    // 지역이점 유효 체크
                    if (false == IsEnableZhou(force, 남중))
                    {
                        AddRelationValue(force, 우호_남만, -1);
                    }
                    else
                    {
                        // 남중 도시의 치안 체크 70 밑이면 하락
                        for (int j = 0; j < 남중_도시.length; ++j)
                        {
                            if (forceId == 남중_도시[j])
                            {
                                pk::city@ city = pk::get_city(남중_도시[j]);
                                if (city.public_order < 70)
                                {
                                    AddRelationValue(force, 우호_남만, -1);
                                    break;
                                }
                            }
                        }
                    }
                }

                // 산월과 우호도가 존재할 시
                if (0 < GetRelationLevel(force, 우호_산월))
                {
                    // 지역이점 유효 체크
                    if (false == IsEnableZhou(force, 양주))
                    {
                        AddRelationValue(force, 우호_산월, -1);
                    }
                    else
                    {
                        // 남중 도시의 치안 체크 70 밑이면 하락
                        for (int j = 0; j < 양주_도시.length; ++j)
                        {
                            if (forceId == 양주_도시[j])
                            {
                                pk::city@ city = pk::get_city(양주_도시[j]);
                                if (city.public_order < 70)
                                {
                                    AddRelationValue(force, 우호_산월, -1);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        // ======================================================== 지역 이점 끝 ===========================================================


        // 각 세력의 db Point를 세팅하는 함수
        void ArrayInit()
        {
            int x = 199;
            int y = 199;

            int xc = 0;
            int yc = 0;

            // (199,199) 부터 9 x 14 칸에 각 세력의 고유 dp 생성
            for (int i = 0; i < 도시_끝; ++i)
            {
                xc = i / 3;
                yc = i % 3;

                dataPointArray[i] = { pk::point(x - xc, y - yc * 3), pk::point(x - xc , y - 1 - yc * 3),  pk::point(x - xc, y - 2 - yc * 3) };
            }

            x = 180;

            for (int j = 0; j < 4; ++j)
            {
                barbarianDataArray[j] = pk::point(x + j, y);
            }
        }

        void validForceTrigger()
        {
            validForceUpdate(false);
        }

        // 유효한 세력을 배열에 업데이트 하는 함수. 최초 실행 후에는 매일 시작 시 업데이트 할 예정
        void validForceUpdate(bool isFirst = false)
        {
            // 최초 실행이라면 유효한 세력 데이터 생성
            if (isFirst)
            {
                for (int i = 0; i < 도시_끝; ++i)
                {
                    pk::force@ force = pk::get_force(i);

                    if (pk::get_force(i).is_alive())
                    {
                        if (pk::is_normal_force(force))
                        {
                            forceRegionBuff[i] = 0;
                            CreateData(i);
                            continue;
                        }
                    }

                    forceRegionBuff[i] = -1;
                }
            }
            else
            {
                for (int i = 0; i < 도시_끝; ++i)
                {
                    pk::force@ force = pk::get_force(i);

                    // 세력이 새로 생겼는지 체크 후 업데이트
                    if (pk::get_force(i).is_alive() && forceRegionBuff[i] == -1)
                    {
                        forceRegionBuff[i] = 0;
                        CreateData(i);
                    }

                    // 세력이 멸망했는지 체크 후 업데이트
                    if (!pk::get_force(i).is_alive() && forceRegionBuff[i] != -1)
                    {
                        forceRegionBuff[i] = -1;
                        DeleteData(i);
                    }
                }
            }
        }

        // 이민족 군세에 관한 db 만들기. 최초 실행시에만 체크하고, 없을 경우 생성
        void BarbarianDataSetting()
        {
            for (int j = 0; j < 4; ++j)
            {
                pk::point point = barbarianDataArray[j];
                pk::building@ buildingCheck = pk::get_building(point);

                if (buildingCheck == null)
                {
                    pk::building@ building = pk::create_building(pk::get_facility(시설_석벽), point, -1);
                    building.hp = 0;
                    building.completed = true;
                }
            }
        }

        // 각 세력의 dataBase를 구축하는 함수. 지역이점 패치 후 최초에 한번 실행하고 그 다음부터는 새로운 세력이 생겼을때만(거병) 실행될 예정
        void CreateData(int forceId)
        {
            for (int i = 0; i < 3; ++i)
            {
                pk::point point = dataPointArray[forceId][i];
                pk::building@ buildingCheck = pk::get_building(point);

                if (buildingCheck == null)
                {
                    pk::building@ building = pk::create_building(pk::get_facility(시설_석벽), point, -1);
                    building.hp = 0;
                    building.completed = true;
                }
            }
        }

        // 각 세력의 db를 제거하는 함수. 기존의 세력이 멸망한것을 체크한 후에 실행할 예정
        void DeleteData(int forceId)
        {
            for (int i = 0; i < 3; ++i)
            {
                pk::point point = dataPointArray[forceId][i];
                pk::building@ building = pk::get_building(point);

                if (building != null)
                {
                    pk::kill(building, false);
                }
            }
        }
        
        bool IsEnableZhou(pk::force@ force, int zhouId)
        {
            switch (zhouId)
            {
            case 유주:
                return IsYouZhou(force);
            case 병주:
                return IsBingZhou(force);
            case 기주:
                return IsJiZhou(force);
            case 청주:
                return IsQingZhou(force);
            case 서주:
                return IsXuZhou(force);
            case 회남:
                return IsHuaiNan(force);
            case 연주:
                return IsYanZhou(force);
            case 예주:
                return IsYuZhou(force);
            case 사예:
                return IsSiLi(force);
            case 경조:
                return IsJingZhao(force);
            case 량주:
                return IsLiangZhou(force);
            case 양주:
                return IsYangZhou(force);
            case 형북:
                return IsJingBei(force);
            case 형남:
                return IsJingNan(force);
            case 익주:
                return IsYiZhou(force);
            case 남중:
                return IsNanZhong(force);
            }

            return false;
        }

        // 유주지역 체크
        bool IsYouZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 유주_도시);
        }

        // 병주지역 체크
        bool IsBingZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 병주_도시);
        }

        // 기주지역 체크
        bool IsJiZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 기주_도시);
        }

        // 청주지역 체크
        bool IsQingZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 청주_도시);
        }

        // 서주지역 체크
        bool IsXuZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 서주_도시);
        }

        // 회남지역 체크
        bool IsHuaiNan(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 회남_도시);
        }

        // 연주지역 체크
        bool IsYanZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 연주_도시);
        }

        // 예주지역 체크
        bool IsYuZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 예주_도시);
        }

        // 사예지역 체크
        bool IsSiLi(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 사예_도시);
        }

        // 경조지역 체크
        bool IsJingZhao(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 경조_도시);
        }

        // 량주지역 체크
        bool IsLiangZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 량주_도시);
        }

        // 양주지역 체크
        bool IsYangZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 양주_도시);
        }

        // 형북지역 체크
        bool IsJingBei(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 형북_도시);
        }

        // 형남지역 체크
        bool IsJingNan(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 형남_도시);
        }

        // 익주지역 체크
        bool IsYiZhou(pk::force@ force)
        {
            return IsRequiredTotalCity(false, force, 익주_도시);
        }

        // 남중지역 체크
        bool IsNanZhong(pk::force@ force)
        {
            return IsRequiredTotalCity(true, force, 남중_도시);
        }
        
        bool IsRegionBuffChange(pk::force@ force, int city, bool cityLose)
        {
            int zhouId = GetZhouId(city);
            array<int> zhouCities = GetZhoudCityArray(zhouId);
            int count = zhouCities.length;
            // 도시를 잃었고 해당 주의 지역이점을 가지고 있었을 경우
            if (true == cityLose && true == IsEnableZhou(force, zhouId))
            {
                // 주의 도시가 하나거나 두개인 경우는 무조건 true
                if (zhouCities.length == 1 || zhouCities.length == 2)
                {
                    return true;
                }
                
                // 주의 도시가 3개 이상인 경우
                
                // 뺏긴 도시가 주도인 경우는 무조건 상실
                if (zhouCities[0] == city)
                {
                    return true;
                }
                // 해당 도시가 주도가 아닌경우
                else
                {
                    if (GetCityCountAtZhou(force, zhouId) - 1 <= (count / 2))
                    {
                        return true;
                    }
                }
            }
            // 도시를 얻었지만 해당 주의 지역이점이 없었던 경우 
            if(false == cityLose && false == IsEnableZhou(force, zhouId))
            {
                // 주의 도시가 하나인 경우 무조건 획득
                if (zhouCities.length == 1)
                {
                    return true;
                }
                else
                {
                    // 과반수 체크
                    if (GetCityCountAtZhou(force, zhouId) >= (count / 2))
                    {
                        if (zhouCities.length == 2)
                        {
                            return true;
                        }
                        
                        // 도시가 3개 이상이면서
                        // 주도를 소유했었던 경우
                        if (pk::get_city(zhouCities[0]).get_force_id() == force.get_force_id())
                        {
                            return true;
                        }
                        else //주도가 없었던경우 
                        {
                            // 해당 도시가 주도라면 true
                            if (zhouCities[0] == city)
                            {
                                return true;
                            }
                        }
                    }
                }
            }

            return false;
        }

        // 외국 우호도 체크 
        bool IsRelationship(pk::force@ force, int level, int type)
        {
            if (false == IsValidForce(force))
            {
                return false;
            }

            if (true == force.is_player())
            {
                if (true == 플레이어_모든이점_적용)
                {
                    return true;
                }
            }
            else
            {
                if (true == AI_모든이점_적용)
                {
                    return true;
                }
            }

            bool enabled;
            int temp;
            ConvertHpToRelationData(force, type, level, enabled, temp);

            return enabled;
        }

        // 지역이점 체크 함수
        bool IsRequiredTotalCity(bool isRequired, pk::force@ force, array<int> zhouCities)
        {     
            if (false == IsValidForce(force))
            {
                return false;
            }

            if (true == force.is_player())
            {
                if (true == 플레이어_모든이점_적용)
                {
                    return true;
                }
            }
            else
            {
                if (true == AI_모든이점_적용)
                {
                    return true;
                }
            }


            int totalCity = zhouCities.length;
            int count;

            if (true == isRequired)
            {
                count = 0;

                // 해당 주의 지배도시마다 카운팅
                for (int i = 0; i < totalCity; ++i)
                {
                    if (pk::get_building(zhouCities[i]).get_force_id() == force.get_id())
                    {
                        count++;
                    }
                }

                // 모든 주의 도시를 지배하면 이점 발동
                if (count >= totalCity)
                {
                    return true;
                }

                return false;
            }
            else
            {
                
                pk::building@ zhouDou = pk::get_building(zhouCities[0]);

                // 세력이 주도를 지배하지 않으면 무효
                if (zhouDou.get_force_id() != force.get_id())
                {
                    return false;
                }

                count = 1;

                // 해당 주의 지배도시마다 카운팅
                for (int i = 1; i < totalCity; ++i)
                {
                    if (pk::get_building(zhouCities[i]).get_force_id() == force.get_id())
                    {
                        count++;
                    }
                }

                // 주도를 포함한 상태로 주의 반을 초과하여 지배하면 이점 발동
                if (count > totalCity / 2)
                {
                    return true;
                }

                return false;
            }
        }

        // 건물 HP를 Data로 변환하여 원하는 값 받아오기
        void ConvertHpToRelationData(pk::force@ force, int type, int level, bool& enabled, int& currMaxLevel)
        {
            // 로드가 덜 되었을 경우  패스
            if (false == loadSuccess)
            {
                return;
            }
            enabled = false;
            currMaxLevel = 0;

            int forceId = force.get_force_id();

            int dataIndex = -1;
            int digit = -1;

            switch (type)
            {
            case 우호_대진국:
                dataIndex = 0;
                digit = 0;
                break;

            case 우호_안식국:
                dataIndex = 0;
                digit = 1;
                break;

            case 우호_천축국:
                dataIndex = 0;
                digit = 2;
                break;

            case 우호_귀상국:
                dataIndex = 0;
                digit = 3;
                break;

            case 우호_오환:
                dataIndex = 0;
                digit = 4;
                break;

            //case 우호_선비:
            //    return;

            case 우호_강:
                dataIndex = 0;
                digit = 6;
                break;

            case 우호_남만:
                dataIndex = 1;
                digit = 5;
                break;

            case 우호_산월:
                dataIndex = 1;
                digit = 6;
                break;

            default:
                return;
            }

            pk::building@ data = pk::get_building(dataPointArray[forceId][dataIndex]);

            if (null == data)
            {
                return;
            }

            int hp = data.hp;

            currMaxLevel = ConvertHpToValue(hp, digit);

            if (currMaxLevel >= level)
            {
                enabled = true;
            }
        }


        // 우호단계를 변경하는 함수.  value는 1로 통일해서 사용할것. 오류날 가능성이 높음
        void AddRelationValue(pk::force@ force, int type, int value)
        {
            int forceId = force.get_force_id();
            int dataIndex = -1;
            int digit = -1;
            switch (type)
            {
            case 우호_대진국:
                dataIndex = 0;
                digit = 0;
                break;

            case 우호_안식국:
                dataIndex = 0;
                digit = 1;
                break;

            case 우호_천축국:
                dataIndex = 0;
                digit = 2;
                break;

            case 우호_귀상국:
                dataIndex = 0;
                digit = 3;
                break;

            case 우호_오환:
                dataIndex = 0;
                digit = 4;
                break;

            //case 우호_선비:
            //    dataIndex = 0;
            //    digit = 5;
            //    break;

            case 우호_강:
                dataIndex = 0;
                digit = 6;
                break;

            case 우호_남만:
                dataIndex = 1;
                digit = 5;
                break;

            case 우호_산월:
                dataIndex = 1;
                digit = 6;
                break;

            default:
                return;
            }

            pk::building@ data = pk::get_building(dataPointArray[forceId][dataIndex]);
            int level = ConvertHpToValue(data.hp, digit);
            if (ConvertHpToValue(data.hp, digit) >= 3 && value >= 1)
            {
                return;
            }

            if (ConvertHpToValue(data.hp, digit) <= 0 && value <= -1)
            {
                return;
            }

            switch (type)
            {
            case 우호_대진국:
                RomanUpgradeEvent(force, level);
                break;
            
            case 우호_안식국:
                ParthianUpgradeEvent(force, level);
                break;
            
            case 우호_천축국:
                IndiaUpgradeEvent(force, level);
                break;
            
            case 우호_귀상국:
                KushanUpgradeEvent(force, level);
                break;
            
            case 우호_오환:
                if (value > 0)
                {
                    RapprochmentUpgradeEvent(force, type, level);
                }
                else if (value < 0)
                {
                    RelationDownGradeEvent(force, type, level);
                }
                break;
            case 우호_강:
                if (value > 0)
                {
                    RapprochmentUpgradeEvent(force, type, level);
                }
                else
                {
                    RelationDownGradeEvent(force, type, level);
                }
                break;
            case 우호_남만:
                if (value > 0)
                {
                    RapprochmentUpgradeEvent(force, type, level);
                }
                else
                {
                    RelationDownGradeEvent(force, type, level);
                }
                break;
            case 우호_산월:
                if (value > 0)
                {
                    RapprochmentUpgradeEvent(force, type, level);
                }
                else
                {
                    RelationDownGradeEvent(force, type, level);
                }
                break;
            
            default:
                return;
            }


            int Hp = ConvertValueToHp(value, digit);
            data.hp = data.hp + Hp;
        }

        // 해당 세력과의 우호도 받아오기
        int GetRelationLevel(pk::force@ force, int type)
        {
            if (false == IsValidForce(force))
            {
                return -1;
            }

            bool enabled;
            int currLevel = 0;

            ConvertHpToRelationData(force, type, -1, enabled, currLevel);
            return currLevel;
        }

        // 지역이점 현황 불러오기
        void PrintRegionBuffInfo()
        {
            pk::list<pk::force@> forces = pk::get_force_list();

            for (int i = 0; i < forces.count; ++i)
            {
                if (true == IsValidForce(forces[i]))
                {
                    pk::force@ force = forces[i];
                    string s;
                    int count = 0;

                    if (forces[i].kokugou != -1)
                    {
                        if (forces[i].is_player())
                        {
                            s = pk::format("\x1b[1x{}\x1b[0x의 지역이점 : ", pk::u8decode(pk::get_kokugou(forces[i].kokugou).get_name()));
                        }
                        else
                        {
                            s = pk::format("{}의 지역이점 : ", pk::u8decode(pk::get_kokugou(forces[i].kokugou).get_name()));
                        }
                    }
                    else
                    {
                        if (forces[i].is_player())
                        {
                            s = pk::format("\x1b[1x{}\x1b[0x군의 지역이점 : ", pk::u8decode(pk::get_name(pk::get_person(forces[i].kunshu))));
                        }
                        else
                        {
                            s = pk::format("{}군의 지역이점 : ", pk::u8decode(pk::get_name(pk::get_person(forces[i].kunshu))));
                        }
                    }

                    if (IsEnableZhou(force, 유주))
                    {
                        s = s + "유주";

                        count += 1;
                    }

                    if (IsEnableZhou(force, 병주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "병주";

                        count += 1;
                    }

                    if (IsEnableZhou(force, 기주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "기주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 청주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "청주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 서주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "서주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 회남))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "회남";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 연주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "연주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 예주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "예주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 사예))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "사예";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 경조))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "경조";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 량주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "량주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 양주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "양주";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 형북))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "형북";
                        count += 1;
                    }

                    if (IsEnableZhou(force, 형남))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "형남";

                        count += 1;
                    }

                    if (IsEnableZhou(force, 익주))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "익주";

                        count += 1;
                    }

                    if (IsEnableZhou(force, 남중))
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + "남중";
                    }

                    pk::history_log(pk::get_person(force.kunshu).get_pos(), forces[i].color, pk::u8encode(s));

                    count = 0;
                    s = "";
                    if (forces[i].kokugou != -1)
                    {
                        if (forces[i].is_player())
                        {
                            s = pk::format("\x1b[1x{}\x1b[0x의 우호도 : ", pk::u8decode(pk::get_kokugou(forces[i].kokugou).get_name()));
                        }
                        else
                        {
                            s = pk::format("{}의 우호도 : ", pk::u8decode(pk::get_kokugou(forces[i].kokugou).get_name()));
                        }
                    }
                    else
                    {
                        if (forces[i].is_player())
                        {
                            s = pk::format("\x1b[1x{}\x1b[0x군의 우호도 : ", pk::u8decode(pk::get_name(pk::get_person(forces[i].kunshu))));
                        }
                        else
                        {
                            s = pk::format("{}군의 우호도 : ", pk::u8decode(pk::get_name(pk::get_person(forces[i].kunshu))));
                        }
                    }

                    if (GetRelationLevel(force, 우호_대진국) > 0)
                    {
                        s = s + pk::format("대진국({})", GetRelationLevel(force, 우호_대진국));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_안식국) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("안식국({})", GetRelationLevel(force, 우호_안식국));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_천축국) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("천축국({})", GetRelationLevel(force, 우호_천축국));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_귀상국) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("귀상국({})", GetRelationLevel(force, 우호_귀상국));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_오환) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("오환({})", GetRelationLevel(force, 우호_오환));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_강) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("강({})", GetRelationLevel(force, 우호_강));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_남만) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("남만({})", GetRelationLevel(force, 우호_남만));

                        count += 1;
                    }

                    if (GetRelationLevel(force, 우호_산월) > 0)
                    {
                        if (count != 0)
                        {
                            s = s + ", ";
                        }

                        s = s + pk::format("산월({})", GetRelationLevel(force, 우호_산월));

                        count += 1;
                    }

                    if (count > 0)
                    {
                        pk::history_log(pk::get_person(force.kunshu).get_pos(), forces[i].color, pk::u8encode(s));
                    }
                }
            }
        }

        // 유효한 세력인지 확인
        bool IsValidForce(pk::force@ force)
        {
            if (force == null)
            {
                return false;
            }

            if (true == pk::is_alive(force) && true == pk::is_normal_force(force))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        // 유효한 도시인지 확인
        bool IsValidCity(pk::city@ city)
        {
            if (true == pk::is_alive(city))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        // 유효한 건물인지 확인
        bool IsValidBuilding(pk::building@ building)
        {
            if (true == pk::is_alive(building))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        // 유효한 무장인지 확인
        bool IsValidPerson(pk::person@ person)
        {
            if (true == pk::is_alive(person))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        // 체력을 우호도 값으로 변환
        int ConvertHpToValue(int hp, int digit)
        {
            int divider = 1;

            if (digit > 0)
            {
                for (int i = 0; i < digit; ++i)
                {
                    divider = divider * 4;
                }
            }

            return (hp / divider) % 4;
        }

        // 우호도 값을 체력으로 변환
        int ConvertValueToHp(int value, int digit)
        {
            int multiplier = 1;

            if (digit > 0)
            {
                for (int i = 0; i < digit; i++)
                {
                    multiplier = multiplier * 4;
                }
            }

            return value * multiplier;
        }

        // 세력의 교역실행
        void ExecuteTrade(pk::force@ force, int type)
        {
            int forceId = force.get_force_id();
            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);
            int value;
            switch (type)
            {
            case 우호_대진국:
                value = 100;
                break;

            case 우호_안식국:
                value = 200;
                break;

            case 우호_천축국:
                value = 300;
                break;

            case 우호_귀상국:
                value = 400;
                break;
            }

            data.hp = data.hp + value + 교역_일수;

            // 컴퓨터는 6달의 추가 교역일수를 더한다. 자원을 소모하지 않기 때문에.. 교역일수와 추가 교역일이 99일을 넘어가면 패스
            if (false == force.is_player() && (교역_일수 + AI_교역_페널티) <= 99)
            {
                data.hp += AI_교역_페널티;
            }
        }

        // 현재 교역중인지 받아오는 함수
        bool IsTrading(pk::force@ force)
        {
            if (false == IsValidForce(force))
            {
                return false;
            }
            int forceId = force.get_force_id();
            
            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);
            int day = data.hp % 100;

            if (day > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        // 교역중인 세력을 받아오는 함수
        int GetTradeForce(pk::force@ force)
        {
            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);
            return (data.hp / 100) % 10 - 1;
        }

        // 남은 교역일수를 받아오는 함수
        int GetTradeDay(pk::force@ force)
        {
            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);
            return data.hp % 100;
        }
        
        // 교역 날짜 업데이트
        void UpdateTradeDay(pk::force@ force)
        {
            if (false == IsValidForce(force))
            {
                return;
            }

            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);
            data.hp -= 1;
        }

        // 교역 날짜 초기화
        void ResetTrade(pk::force@ force)
        {
            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);
            data.hp = 0;
        }

        // 이민족 외교 날짜 업데이트
        void UpdateRapprochmentDay(pk::force@ force)
        {
            if (false == IsValidForce(force))
            {
                return;
            }

            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][1]);

            if (true == IsRapprochment(force, 우호_오환))
            {
                data.hp -= 1;

                if (data.hp % 4 == 0)
                {
                    AddRelationValue(force, 우호_오환, 1);
                }
            }

            if (true == IsRapprochment(force, 우호_강))
            {
                data.hp -= 4;

                if ((data.hp / 4) % 4 == 0)
                {
                    AddRelationValue(force, 우호_강, 1);
                }
            }

            if (true == IsRapprochment(force, 우호_남만))
            {
                data.hp -= 16;

                if ((data.hp / 16) % 4 == 0)
                {
                    AddRelationValue(force, 우호_남만, 1);
                }
            }

            if (true == IsRapprochment(force, 우호_산월))
            {
                data.hp -= 64;

                if ((data.hp / 64) % 4 == 0)
                {
                    AddRelationValue(force, 우호_산월, 1);
                }
            }
        }

        // 이민족 외교 날짜 초기화
        void ResetRapprochment(pk::force@ force, int type)
        {
            if (false == IsValidForce(force))
            {
                return;
            }

            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][1]);

            switch (type)
            {
            case 우호_오환:
                data.hp -= data.hp % 4;
                break;

            case 우호_강:
                data.hp -= ((data.hp / 4) % 4) * 4;
                break;

            case 우호_남만:
                data.hp -= ((data.hp / 16) % 4) * 16;
                break;

            case 우호_산월:
                data.hp -= ((data.hp / 64) % 4) * 64;
                break;
            }
        }

        // 해당 이민족과 외교중인지 받아오는 함수
        bool IsRapprochment(pk::force@ force, int type)
        {
            if (false == IsValidForce(force))
            {
                return false;
            }

            int forceId = force.get_force_id();

            pk::building@ data = pk::get_building(dataPointArray[forceId][1]);

            switch (type)
            {
            case 우호_오환:
                if (data.hp % 4 > 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            case 우호_강:
                if ((data.hp / 4) % 4 > 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            case 우호_남만:
                if ((data.hp / 16) % 4 > 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            case 우호_산월:
                if ((data.hp / 64) % 4 > 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            return false;
        }

        // 이민족과 외교 실행
        void ExecuteRapprochment(pk::force@ force, int type)
        {
            int forceId = force.get_force_id();
            pk::building@ data = pk::get_building(dataPointArray[forceId][1]);
            int value;
            switch (type)
            {
            case 우호_오환:
                value = 1;
                break;

            case 우호_강:
                value = 4;
                break;

            case 우호_남만:
                value = 16;
                break;

            case 우호_산월:
                value = 64;
                break;
            }

            data.hp = data.hp + value * 화친_일수;
        }
        /*
            교역이 가능한 상태인지 받아오는 함수.
            대진국과 안식국은 동시에 교역이 불가능하고,  천축국과 귀상국도 동시에 교역이 불가능하다.
        */
        int GetPossibleTrade(pk::force@ force, pk::building@ building, int& type)
        {
            int data = 0;
            int tp = force.tp;
            bool isRoman = false;
            bool isParthian = false;
            bool isIndia = false;
            bool isKushan = false;
            bool enabled = false;
            if (0 < GetRelationLevel(force, 우호_대진국))
            {
                isRoman = true;
            }

            if (0 < GetRelationLevel(force, 우호_안식국))
            {
                isParthian = true;
            }

            if (0 < GetRelationLevel(force, 우호_천축국))
            {
                isIndia = true;
            }

            if (0 < GetRelationLevel(force, 우호_귀상국))
            {
                isKushan = true;
            }

            type = -1;
            bool isRegionBuff = false;
            int level = -1;

            uint gold = pk::get_gold(building);
            uint food = pk::get_food(building);
            uint troops = pk::get_troops(building);

            if (true == IsTrading(force))
            {
                type = 교역불가_교역중;
                return -1;
            }

            if (false == isParthian && true == IsEnableZhou(force, 사예))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_대진국);

                if (3 <= level)
                {
                    type = 교역불가_최대;
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level] || food < 교역_군량[level] || troops < 교역_병사[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 1;
                        enabled = true;
                    }
                }
            }

            if (false == isRoman &&  true == IsEnableZhou(force, 경조))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_안식국);

                if (3 <= level)
                {
                    type = pk::min(type, 교역불가_최대);
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level] || food < 교역_군량[level] || troops < 교역_병사[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 2;
                        enabled = true;
                    }
                }
            }

            if (false == isKushan && true == IsEnableZhou(force, 형남))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_천축국);

                if (3 <= level)
                {
                    type = pk::min(type, 교역불가_최대);
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level] || food < 교역_군량[level] || troops < 교역_병사[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 4;
                        enabled = true;
                    }
                }
            }

            if (false == isIndia && true == IsEnableZhou(force, 익주))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_귀상국);

                if (3 <= level)
                {
                    type = pk::min(type, 교역불가_최대);
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level] || food < 교역_군량[level] || troops < 교역_병사[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 8;
                        enabled = true;
                    }
                }
            }

            if (false == isRegionBuff)
            {
                type = 교역불가_지역이점없음;
            }

            if (false == enabled)
            {
                return -1;
            }

            return data;
        }
        
        // 컴퓨터 세력의 교역
        int AITrade(pk::force@ force)
        {
            int count = 0;
            bool isRoman = false;
            bool isParthian = false;
            bool isIndia = false;
            bool isKushan = false;
            array<int> arr(4);
            if (0 < GetRelationLevel(force, 우호_대진국))
            {
                isRoman = true;
            }

            if (0 < GetRelationLevel(force, 우호_안식국))
            {
                isParthian = true;
            }

            if (0 < GetRelationLevel(force, 우호_천축국))
            {
                isIndia = true;
            }

            if (0 < GetRelationLevel(force, 우호_귀상국))
            {
                isKushan = true;
            }

            int level = -1;

            if (true == IsTrading(force))
            {
                return -1;
            }

            if (false == isParthian && true == IsEnableZhou(force, 사예))
            {
                level = GetRelationLevel(force, 우호_대진국);

                if (3 <= level)
                {
                 
                }
                else
                {
                    arr[count] = 우호_대진국;
                    count += 1;
                }
            }

            if (false == isRoman && true == IsEnableZhou(force, 경조))
            {
                level = GetRelationLevel(force, 우호_안식국);

                if (3 <= level)
                {

                }
                else
                {
                    arr[count] = 우호_안식국;
                    count += 1;
                }
            }

            if (false == isKushan && true == IsEnableZhou(force, 형남))
            {
                level = GetRelationLevel(force, 우호_천축국);

                if (3 <= level)
                {

                }
                else
                {
                    arr[count] = 우호_천축국;
                    count += 1;
                }
            }

            if (false == isIndia && true == IsEnableZhou(force, 익주))
            {
                level = GetRelationLevel(force, 우호_귀상국);

                if (3 <= level)
                {
                 
                }
                else
                {
                    arr[count] = 우호_귀상국;
                    count += 1;
                }
            }

            if (count == 0)
            {
                return -1;
            }

            return arr[pk::rand(count)];
        }
        /*
            플레이어가 이민족과 외교가 가능한 상태인지 받아오는 함수.
        */
        int GetPossibleRapprochement(pk::force@ force, pk::building@ building, int& type)
        {
            int data = 0;
            int tp = force.tp;

            bool enabled = false;

            type = -1;
            bool isRegionBuff = false;
            int level = -1;

            uint gold = pk::get_gold(building);

            if (true == IsEnableZhou(force, 유주) && false == IsRapprochment(force, 우호_오환))
            {
                isRegionBuff = true;

                level = GetRelationLevel(force, 우호_오환);

                if (3 <= level)
                {
                    type = 교역불가_최대;
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 1;
                        enabled = true;
                    }
                }
            }

            if (true == IsEnableZhou(force, 량주) && false == IsRapprochment(force, 우호_강))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_강);

                if (3 <= level)
                {
                    type = pk::min(type, 교역불가_최대);
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 2;
                        enabled = true;
                    }
                }
            }

            if (true == IsEnableZhou(force, 남중) && false == IsRapprochment(force, 우호_남만))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_남만);

                if (3 <= level)
                {
                    type = pk::min(type, 교역불가_최대);
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 4;
                        enabled = true;
                    }
                }
            }

            if (true == IsEnableZhou(force, 양주) && false == IsRapprochment(force, 우호_산월))
            {
                isRegionBuff = true;
                level = GetRelationLevel(force, 우호_산월);

                if (3 <= level)
                {
                    type = pk::min(type, 교역불가_최대);
                }
                else
                {
                    if (tp < 교역_기교)
                    {
                        type = 교역불가_기교부족;
                        return -1;
                    }

                    if (gold < 교역_금[level])
                    {
                        type = 교역불가_물자부족;
                    }
                    else
                    {
                        data += 8;
                        enabled = true;
                    }
                }
            }

            if (false == isRegionBuff)
            {
                type = 교역불가_지역이점없음;
            }

            if (false == enabled)
            {
                return -1;
            }

            return data;
        }

        // AI가 이민족과 외교가 가능한지 받아오는 함수
        int AIRapprochement(pk::force@ force)
        {
            int count = 0;
            int level = -1;
            array<int> arr(4);

            if (true == IsEnableZhou(force, 유주) && false == IsRapprochment(force, 우호_오환))
            {
                level = GetRelationLevel(force, 우호_오환);

                if (3 <= level)
                {

                }
                else
                {
                    arr[count] = 우호_오환;
                    count += 1;
                }
            }

            if (true == IsEnableZhou(force, 량주) && false == IsRapprochment(force, 우호_강))
            {
                level = GetRelationLevel(force, 우호_강);

                if (3 <= level)
                {

                }
                else
                {
                    arr[count] = 우호_강;
                    count += 1;
                }
            }

            if (true == IsEnableZhou(force, 남중) && false == IsRapprochment(force, 우호_남만))
            {
                level = GetRelationLevel(force, 우호_남만);

                if (3 <= level)
                {

                }
                else
                {
                    arr[count] = 우호_남만;
                    count += 1;
                }
            }

            if (true == IsEnableZhou(force, 양주) && false == IsRapprochment(force, 우호_산월))
            {
                level = GetRelationLevel(force, 우호_산월);

                if (3 <= level)
                {

                }
                else
                {
                    arr[count] = 우호_산월;
                    count += 1;
                }
            }

            if (count <= 0)
            {
                return -1;
            }

            return arr[pk::rand(count)];
        }

        // 친특기 보유 무장 숫자를 받아오는 함수
        int GetRapprochmentPersonCount(pk::force@ force, int targetForce)
        {
            auto list = pk::get_person_list(force, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));
            int skill = -1;

            switch (targetForce)
            {
            case 우호_오환:
                skill = 특기_친오;
                break;

            case 우호_강:
                skill = 특기_친강;
                break;

            case 우호_남만:
                skill = 특기_친만;
                break;

            case 우호_산월:
                skill = 특기_친월;
                break;
            }

            int count = 0;

            for (int i = 0; i < list.count; ++i)
            {
                if (skill == list[i].skill)
                {
                    count++;
                }
            }

            return count;
        }

        // AI의 이민족 외교 딜레이
        int GetAIRapprochmentTerm(pk::force@ force)
        {
            int forceId = force.get_force_id();
            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);

            int term = data.hp / 1000;

            return term;
        }

        // AI의 이민족 외교 딜레이를 설정하는 함수
        void SetAIRapprochmentTerm(pk::force@ force, int value)
        {
            int forceId = force.get_force_id();
            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);

            int term = data.hp / 1000;

            data.hp -= term * 1000;

            data.hp += value * 1000;
        }

        // AI의 이민족 외교 딜레이 업데이트
        void UpdateAIRapprochmentTerm(pk::force@ force)
        {
            int forceId = force.get_force_id();
            pk::building@ data = pk::get_building(dataPointArray[forceId][2]);

            int term = data.hp / 1000;

            if (term > 0)
            {
                data.hp -= 1000;
            }
        }

        // 이민족 특기 전수에 사용할 무장 랜덤섞기
        array<pk::person@> RandPersonArray(array<pk::person@> origin, int count)
        {
            if (origin.length <= count)
            {
                return origin;
            }

            int total = 0;
            array<int> temp(count);
            array<pk::person@> resultArr(count);

            for (int i = 0; i < count; ++i)
            {
                temp[i] = -1;
            }

            while (total < count)
            {
                int rand = pk::rand(origin.length);
                if (true == IsExist(temp, rand))
                {
                    continue;
                }
                @resultArr[total] = origin[rand];
                temp[total] = rand;
                total++;
            }

            return resultArr;
        }

        //  무장 랜덤섞기에 사용되는 함수
        bool IsExist(array<int> sour, int value)
        {
            if (sour.length == 0)
            {
                return false;
            }

            bool isExist = false;

            for (int i = 0; i < sour.length; ++i)
            {
                if (sour[i] == value)
                {
                    isExist = true;
                    break;
                }
            }

            return isExist;
        }
        
        // 도시의 주 Id값 받아오기
        int GetZhouId(int cityId)
        {
            switch (cityId)
            {
            case 도시_양평:
            case 도시_북평:
            case 도시_계:
                return 유주;

            case 도시_진양:
                return 병주;

            case 도시_남피:
            case 도시_업:
                return 기주;

            case 도시_북해:
            case 도시_평원:
                return 청주;

            case 도시_하비:
            case 도시_소패:
                return 서주;

            case 도시_수춘:
            case 도시_여강:
                return 회남;

            case 도시_진류:
            case 도시_복양:
                return 연주;

            case 도시_허창:
            case 도시_여남:
                return 예주;

            case 도시_낙양:
                return 사예;

            case 도시_장안:
            case 도시_상용:
            case 도시_완:
                return 경조;

            case 도시_무위:
            case 도시_천수:
            case 도시_안정:
                return 량주;

            case 도시_건업:
            case 도시_오:
            case 도시_회계:
            case 도시_시상:
                return 양주;

            case 도시_양양:
            case 도시_강릉:
            case 도시_강하:
            case 도시_신야:
                return 형북;

            case 도시_장사:
            case 도시_무릉:
            case 도시_계양:
            case 도시_영릉:
                return 형남;

            case 도시_성도:
            case 도시_한중:
            case 도시_자동:
            case 도시_강주:
            case 도시_영안:
                return 익주;

            case 도시_건녕:
            case 도시_운남:
                return 남중;
            }

            return -1;
        }

        // 주 번호로 도시 배열 찾아오기
        array<int> GetZhoudCityArray(int zhouId)
        {
            switch (zhouId)
            {
            case 유주:
                return 유주_도시;
            case 병주:
                return 병주_도시;
            case 기주:
                return 기주_도시;
            case 청주:
                return 청주_도시;
            case 서주:
                return 서주_도시;
            case 회남:
                return 회남_도시;
            case 연주:
                return 연주_도시;
            case 예주:
                return 예주_도시;
            case 사예:
                return 사예_도시;
            case 경조:
                return 경조_도시;
            case 량주:
                return 량주_도시;
            case 양주:
                return 양주_도시;
            case 형북:
                return 형북_도시;
            case 형남:
                return 형남_도시;
            case 익주:
                return 익주_도시;
            case 남중:
                return 남중_도시;
            }

            return {-1};
        }
        
        // 세력이 보유중인 해당 주의 도시숫자
        int GetCityCountAtZhou(pk::force@ force, int zhouId)
        {
            array<int> zhouCities = GetZhoudCityArray(zhouId);
            int count = 0;
            for (int i = 0; i < zhouCities.length; ++i)
            {
                if(pk::get_city(zhouCities[i]).get_force_id() == force.get_force_id())
                {
                    count++;
                }
            }
            return count;
        }

        // 대진국 2단계 달성 시 정란, 누선 교체 함수
        void ChangeWeaponCatapult(pk::force@ force)
        {
            int forceId = force.get_id();
            // 도시
            auto cities = pk::get_city_list(force);

            for (int i = 0; i < cities.count; ++i)
            {
                pk::city@ city = cities[i];

                city.weapon_amount[병기_투석] = city.weapon_amount[병기_정란];
                city.weapon_amount[병기_정란] = 0;
                city.weapon_amount[병기_투함] = city.weapon_amount[병기_누선];
                city.weapon_amount[병기_누선] = 0;
            }

            // 관문 
            for (int g = 0; g < 관문_끝; ++g)
            {
                pk::gate@ gate = pk::get_gate(g);

                if (forceId == gate.get_force_id())
                {
                    gate.weapon_amount[병기_투석] = gate.weapon_amount[병기_정란];
                    gate.weapon_amount[병기_정란] = 0;
                    gate.weapon_amount[병기_투함] = gate.weapon_amount[병기_누선];
                    gate.weapon_amount[병기_누선] = 0;
                }
            }

            // 항구
            for (int p = 0; p < 항구_끝; ++p)
            {
                pk::port@ port = pk::get_port(p);

                if (forceId == port.get_force_id())
                {
                    port.weapon_amount[병기_투석] = port.weapon_amount[병기_정란];
                    port.weapon_amount[병기_정란] = 0;
                    port.weapon_amount[병기_투함] = port.weapon_amount[병기_누선];
                    port.weapon_amount[병기_누선] = 0;
                }
            }

            // 유닛
            auto units = pk::get_unit_list(force);

            array<pk::unit@> unitArray = pk::list_to_array(units);

            for (int u = 0; u < unitArray.length; ++u)
            {
                pk::unit@ unit = unitArray[u];

                if (unit.stock[0].id == 병기_정란)
                {
                    unit.stock[0].id = 병기_투석;
                }

                if (unit.stock[1].id == 병기_누선)
                {
                    unit.stock[1].id = 병기_투함;
                }
            }
        }

        // ======================================================================== Ver2 =========================================================================================================

        // 개발 중 공적획득
        void DevelopementKousekiUpdate(pk::force@ force)
        {
            if (true == IsValidForce(force))
            {
                auto officers = pk::get_person_list(force, pk::mibun_flags(신분_도독, 신분_태수, 신분_일반));

                array<pk::person@> officerArray = pk::list_to_array(officers);

                int value = 0;
                for (int i = 0; i < officerArray.length; ++i)
                {
                    if (officerArray[i].order == 무장임무_개발)
                    {
                        int politic = officerArray[i].stat[무장능력_정치];
                        value = (politic * politic) / 100;
                        if (value < 1)
                        {
                            value = 2;
                        }

                        pk::add_kouseki(officerArray[i], value / 2);
                    }
                }
            }
        }

        void UpdateBarbarianForce()
        {
            for (int i = 0; i < 4; ++i)
            {
                pk::point point = barbarianDataArray[i];
                pk::building@ data = pk::get_building(point);

                // 기한이 남았을 경우 차감
                if (data.hp % 100 > 0)
                {
                    data.hp -= 1;
                }
                else  // 0인경우 패스
                {
                    continue;
                }

                // 기한이 모두 소진되었을 경우 군세 삭제
                if (data.hp % 100 == 0)
                {
                    data.hp = 0;
                }
            }
        }

        void SummonBarbarianForce(pk::city@ city, int barbarianOrder, int type)
        {
            
            if (0 == type)
            {

            }
            else if (1 == type)
            {

            }
            else if (2 == type)
            {

            }
            else if (3 == type)
            {

            }
        }

        void DeleteBarbarianForce(int type)
        {
            if (0 == type)
            {
                pk::person@ moo = pk::get_person(무장_오환장수);

                pk::message_box(pk::u8encode("약속한 기한이 지났으니 우린 이만 철수하겠소이다."), moo);

                auto units = pk::get_unit_list(pk::get_force(세력_오환));

                for (int i = units.count - 1; i >= 0; i--)
                {
                    if (true == units[i].is_alive())
                    {
                        pk::remove(units[i]);
                    }
                }
            }
            else if (1 == type)
            {
                pk::person@ moo = pk::get_person(무장_강장수);

                pk::message_box(pk::u8encode("약속한 기한이 지났으니 우린 이만 철수하겠소이다."), moo);

                auto units = pk::get_unit_list(pk::get_force(세력_강));

                for (int i = units.count - 1; i >= 0; i--)
                {
                    if (true == units[i].is_alive())
                    {
                        pk::remove(units[i]);
                    }
                }
            }
            else if (2 == type)
            {
                pk::person@ moo = pk::get_person(무장_남만장수);

                pk::message_box(pk::u8encode("약속한 기한이 지났으니 우린 이만 철수하겠소이다."), moo);

                auto units = pk::get_unit_list(pk::get_force(세력_남만));

                for (int i = units.count - 1; i >= 0; i--)
                {
                    if (true == units[i].is_alive())
                    {
                        pk::remove(units[i]);
                    }
                }
            }
            else if (3 == type)
            {
                pk::person@ moo = pk::get_person(무장_산월장수);

                pk::message_box(pk::u8encode("약속한 기한이 지났으니 우린 이만 철수하겠소이다."), moo);

                auto units = pk::get_unit_list(pk::get_force(세력_산월));

                for (int i = units.count - 1; i >= 0; i--)
                {
                    if (true == units[i].is_alive())
                    {
                        pk::remove(units[i]);
                    }
                }
            }
        }

        // ================================================= 101 징병 치안 증감 =====================================================================

        bool 유저_도시수_패널티_징병 = true;   // 유저세력에 대해서 도시수에 비례하여 치안감소 패널티 (도시당 1% 증가)

        int func101(pk::city@ city, const pk::detail::arrayptr<pk::person@>& in actors, int troops)
        {
            int n = 100;
            for (int i = 0; i < actors.length; i++)
            {
                pk::person@ actor = actors[i];
                if (pk::is_alive(actor))
                    n = n + actor.stat[int(pk::core["징병.능력"])];
            }

            int value = -troops / n;

            /*
            // 군주가 [유비]인 경우에 1/2 감소
                if (pk::get_kunshu_id(actors[0]) == 무장_유비)
                    value /= 2;

            // 군주가 [유우]인 경우에 1/2 감소
                if (pk::get_kunshu_id(actors[0]) == 무장_유우)
                    value /= 2;
            */

            int forceId = actors[0].get_force_id();
            pk::force@ force = pk::get_force(forceId);
            int buff = 천축_2단계_징병치안보조;
            // 형남 지역이점 유무
            if (false == IsEnableZhou(force, 형남))
            {
                buff = buff / 2;
            }
            // 천축국 실리론 유무
            int relation_level = GetRelationLevel(force, 우호_천축국);
            if (relation_level >= 2)
            {
                value = value * (100 - buff) / 100;
            }

            // 유저_도시수_패널티 ('19.5.4)
            if (유저_도시수_패널티_징병 && city.is_player() && !pk::is_campaign())
            {
                //pk::force@ force = pk::get_force(city.get_force_id());
                float force_city_count = float(pk::get_city_list(force).count);
                value = int(value / (1.f - (force_city_count * 0.01f)));
            }

            return value;
        }

        // ==================================================== 징병 치안 증감 끝 ===================================================================

        // ================================================= 102 병기생산량 =========================================================================

        bool 유저_도시수_패널티_병기 = true;   // 유저세력에 대해서 도시수에 비례하여 생산량 디버프 (도시당 1% 감소)

        int func102(pk::city@ city, const pk::detail::arrayptr<pk::person@>& in actors, int weapon_id)
        {
            if (!pk::is_valid_equipment_id(weapon_id))
                return 0;
            if (weapon_id >= 병기_충차)
                return 1;

            int n = 0, sum = 0, max = 0, skill_id = -1;
            bool has_skill = false;

            if (weapon_id <= 병기_노)
                skill_id = int(pk::core["병기생산.대장간특기"]);
            else if (weapon_id == 병기_군마)
                skill_id = int(pk::core["병기생산.마구간특기"]);

            for (int i = 0; i < int(actors.length); i++)
            {
                pk::person@ actor = actors[i];
                if (pk::is_alive(actor))
                {
                    int s = actor.stat[int(pk::core["병기생산.능력"])];
                    sum = sum + s;
                    max = pk::max(max, s);
                    if (pk::has_skill(actor, skill_id))
                        has_skill = true;
                }
            }

            n = (sum + max + 200) * 5;

            // 관련 특기를 가지고 있다면 2배
            if (has_skill)
                n = n * 2;

            pk::force@ force = pk::get_force(city.get_force_id());

            if (weapon_id <= 병기_노)
            {
                ExecuteYanZhou(force, n);
            }

            n = int(n * func_5c7040(city, weapon_id));

            // 컴퓨터일 경우 특급 난이도에서 2배
            if (pk::get_scenario().difficulty == 난이도_특급 && !city.is_player())
                n = n * 2;


            // 유저_도시수_패널티 ('19.5.4)
            if (유저_도시수_패널티_병기 && city.is_player() && !pk::is_campaign())
            {
                //pk::force@ force = pk::get_force(city.get_force_id());
                float force_city_count = float(pk::get_city_list(force).count);
                n = int(n * (1.f - (force_city_count * 0.01f)));
            }

            return n;
        }

        float func_5c7040(pk::city@ city, int weapon_id)
        {
            int level1 = 0, level2 = 0;
            if (weapon_id == 병기_창 or weapon_id == 병기_극 or weapon_id == 병기_노)
            {
                for (int i = 0; i < city.max_devs; i++)
                {
                    pk::building@ building = city.dev[i].building;
                    if (pk::is_alive(building))
                    {
                        switch (building.facility)
                        {
                        case 시설_대장간: building.completed ? level1++ : 0; break;
                        case 시설_대장간2단: building.completed ? level2++ : level1++; break;
                        case 시설_대장간3단: building.completed ? 0 : level2++; break;
                        }
                    }
                }
                if (city.blacksmith_counter > level1 + level2)
                    return 1.5f;
                if (city.blacksmith_counter > level1)
                    return 1.2f;
            }
            else if (weapon_id == 병기_군마)
            {
                for (int i = 0; i < city.max_devs; i++)
                {
                    pk::building@ building = city.dev[i].building;
                    if (pk::is_alive(building))
                    {
                        switch (building.facility)
                        {
                        case 시설_마구간: building.completed ? level1++ : 0; break;
                        case 시설_마구간2단: building.completed ? level2++ : level1++; break;
                        case 시설_마구간3단: building.completed ? 0 : level2++; break;
                        }
                    }
                }
                if (city.stable_counter > level1 + level2)
                    return 1.5f;
                if (city.stable_counter > level1)
                    return 1.2f;
            }
            return 1.f;
        }

        // =================================================== 병기생산량 끝 ========================================================================

        // ================================================= 158 월별 본거지 발생 확률 ===============================================================
        
        int func158(pk::city@ city)
        {
            // 게임 시작 후 6개월까지 발생하지 않음.
            if (pk::get_elapsed_months() <= 6)
                return 0;

            // 중복 발생 금지
            int city_id = city.get_id();
            
            // 유주 오환 체크
            if (city_id == 도시_북평 || city_id == 도시_계 || city_id == 도시_양평)
            {
                bool isAlien = false;
                auto forces = pk::get_force_list();
                array<pk::force@> arr = pk::list_to_array(forces);

                for (int i = 0; i < arr.length; ++i)
                {
                    if (true == IsValidForce(arr[i]))
                    {
                        if (GetRelationLevel(arr[i], 우호_오환) >= 1)
                        {
                            isAlien = true;
                        }
                    }
                }

                if (true == isAlien)
                {
                    return 0;
                }
            }

            // 량주 강 체크
            if (city_id == 도시_무위 || city_id == 도시_천수 || city_id == 도시_안정)
            {
                bool isAlien = false;
                auto forces = pk::get_force_list();
                array<pk::force@> arr = pk::list_to_array(forces);

                for (int i = 0; i < arr.length; ++i)
                {
                    if (true == IsValidForce(arr[i]))
                    {
                        if (GetRelationLevel(arr[i], 우호_강) >= 1)
                        {
                            isAlien = true;
                        }
                    }
                }

                if (true == isAlien)
                {
                    return 0;
                }
            }

            // 양주 산월 체크
            if (city_id == 도시_건업 || city_id == 도시_오 || city_id == 도시_회계 || city_id == 도시_시상)
            {
                bool isAlien = false;
                auto forces = pk::get_force_list();
                array<pk::force@> arr = pk::list_to_array(forces);

                for (int i = 0; i < arr.length; ++i)
                {
                    if (true == IsValidForce(arr[i]))
                    {
                        if (GetRelationLevel(arr[i], 우호_산월) >= 1)
                        {
                            isAlien = true;
                        }
                    }
                }

                if (true == isAlien)
                {
                    return 0;
                }
            }

            // 남중지역 남만 체크
            if (city_id == 도시_운남 || city_id == 도시_건녕 || city_id == 도시_강주)
            {
                bool isAlien = false;
                auto forces = pk::get_force_list();
                array<pk::force@> arr = pk::list_to_array(forces);
                

                for (int i = 0; i < arr.length; ++i)
                {
                    if (true == IsValidForce(arr[i]))
                    {
                        if (GetRelationLevel(arr[i], 우호_남만) >= 1)
                        {
                            isAlien = true;
                        }
                    }
                }

                if (true == isAlien)
                {
                    return 0;
                }
            }

            // 이 콜백은 도시 별로 호출되기 때문에 맵 상에 건물이 많을 수록 리스트로 접근하면 속도가 느려지므로 배열로 변환.
            array<pk::building@> arr = pk::list_to_array(pk::get_building_list());
            for (int i = 0; i < arr.length; i++)
            {
                pk::building@ building = arr[i];
                if (pk::get_city_id(building.get_pos()) == city_id and (building.facility == 시설_본거지1 or building.facility == 시설_본거지2))
                    return 0;
            }

            // 치안이 기준치 이상일 경우 발생하지 않음
            if (city.public_order >= 80 - (pk::city_to_building(city).has_skill(특기_위압) ? 20 : 0))
                return 0;

            // 기준치 미만일 경우 확률 계산
            return (100 - city.public_order) / 3;
        }

        // ==========================================================================================================================================

        // ================================================= 163 부대 능력치 =========================================================================

        bool 무력통솔력_수식변경 = true;   // true: 부장능력 포함하는 신규 수식 적용, false: 기존 방식 적용

        bool  공격력_수식변경 = true;   // true: 공격력 (무력+통솔 비율합산), false: 기존 방식 적용 (공격력 = 무력만 반영)
        float 공격력_통솔비율 = 0.20f;  // 공격력에 합산할 통솔력 비율 (0.0f~1.0f)

        bool  방어력_수식변경 = true;   // true: 방어력 (통솔+무력 비율합산), false: 기존 방식 적용 (방어력 = 통솔만 반영)
        float 방어력_무력비율 = 0.20f;  // 방어력에 합산할 통솔력 비율 (0.0f~1.0f)

        bool 이동력_병력설정 = true;   // 병력수에 따라 이동력 증감
        bool 이동력_적성설정 = true;   // 적성에 따라 이동력 증감
        bool 이동력_통솔설정 = true;   // 통솔력에 따라 이동력 증감
        bool 이동력_기력설정 = true;   // 기력에 따라 이동력 증감
        bool 이동력_계절설정 = true;   // 계절에 따라 이동력 증감
        bool 이동력_영토설정 = true;   // 자국/타국 여부에 따라 이동력 증감

        bool 이동력_최대제한 = true;   // true: 이동력 max=40, false: 이동력 max 제한없음

        bool 세력효과설정 = true;   // 세력별 군령 효과 적용

        void func163(pk::unit_attr& attr, const pk::detail::arrayptr<pk::person@>& in member, int weapon_id, uint troops, int type, int status, bool navy, bool shoubyou)
        {
            pk::person@ leader = member[0];


            if (!pk::is_alive(leader))
                return;

            pk::force@ force = pk::get_force(leader.get_force_id());

            // 주장이 소속된 부대 또는 건물 반환 ('18.10.10)
            int unit_energy = 0;
            pk::building@ building = pk::hex_object_to_building(pk::get_hex_object(leader.location));
            pk::unit@ unit;
            if (!pk::is_alive(building))    // 주장이 건물에 소속되어 있지 않으면 부대 기력값 사용
            {
                @unit = pk::get_unit(pk::get_unit_id(leader));
                unit_energy = unit.energy;
            }
            else                            // 주장이 건물 소속되어 출진 부대 편성 중이면 거점 기력값 사용
            {
                unit_energy = pk::get_energy(building);
            }



            if (!pk::is_alive(force))
                return;
            if (!pk::is_valid_equipment_id(weapon_id) or !pk::is_valid_unit_type(type) or !pk::is_valid_unit_status(status))
                return;



            // 부장이 없다면	
            if ((member[1] is null) and (member[2] is null))
            {
                for (int i = 0; i < 무장능력_끝; i++)	// 주장 능력치 그대로 사용
                    attr.stat[i] = pk::min(255, (shoubyou ? leader.stat[i] : leader.max_stat[i]));
            }
            // 부장이 있다면
            else
            {
                // 혐오 관계가 있다면 보정하지 않음
                if (func_4960d0(leader, member[1]) or func_4960d0(leader, member[2]) or func_4960d0(member[1], member[2]))
                {
                    for (int i = 0; i < 무장능력_끝; i++)
                        attr.stat[i] = pk::min(255, (shoubyou ? leader.stat[i] : leader.max_stat[i]));
                }
                // 혐오 관계가 없다면 보정
                else
                {
                    for (int i = 0; i < 무장능력_끝; i++)
                    {
                        int a = 0, b = 0;
                        int leader_stat = pk::min(255, (shoubyou ? leader.stat[i] : leader.max_stat[i]));

                        // 통솔, 무력은 무장 관계에 따라 보정
                        if (i <= 무장능력_무력)
                        {
                            if (무력통솔력_수식변경)
                            {
                                // 신규 보정 수식 : 주장 + 부장1보조 + 부장2보조   ('18.10.9)
                                if (member[1] !is null)     // 신규 함수 : 부장1 보조량
                                    a = func_sub_stat(leader, leader_stat, member[1], (shoubyou ? member[1].stat[i] : member[1].max_stat[i]));
                                if (member[2] !is null)     // 신규 함수 : 부장2 보조량
                                    b = func_sub_stat(leader, leader_stat, member[2], (shoubyou ? member[2].stat[i] : member[2].max_stat[i]));

                                attr.stat[i] = pk::min(255, (leader_stat + a + b));   // 255 이하로 합산
                            }
                            else
                            {
                                // 기존 보정 방법 : MAX[(주장&부장1),(주장&부장2)]
                                if (member[1] !is null)
                                    a = func_495ff0(leader, leader_stat, member[1], shoubyou ? member[1].stat[i] : member[1].max_stat[i]);
                                if (member[2] !is null)
                                    b = func_495ff0(leader, leader_stat, member[2], shoubyou ? member[2].stat[i] : member[2].max_stat[i]);
                                attr.stat[i] = pk::min(255, pk::max(a, b));   // 최대값
                            }

                        }
                        // 지력, 정치, 매력은 최대값
                        else
                        {
                            if (member[1] !is null)
                                a = pk::max(leader_stat, shoubyou ? member[1].stat[i] : member[1].max_stat[i]);
                            if (member[2] !is null)
                                b = pk::max(leader_stat, shoubyou ? member[2].stat[i] : member[2].max_stat[i]);

                            attr.stat[i] = pk::min(255, pk::max(a, b));   // 최대값
                        }

                    }
                }
            }


            // 적성은 최대값
            for (int i = 0; i < 병종_끝; i++)
            {
                int n = 0;
                for (int j = 0; j < member.length; j++)
                {
                    if (member[j] !is null)
                        n = pk::max(n, member[j].tekisei[i]);
                }
                attr.tekisei[i] = n;
            }

            pk::equipment@ equipment = pk::get_equipment(weapon_id);

            float apt = float(pk::core["적성"][attr.tekisei[pk::equipment_id_to_heishu(weapon_id)]]["부대능력치"]); // (attr.tekisei[pk::equipment_id_to_heishu(weapon_id)] + 7) * 0.1;
            float sts = 1.f;
            float str = 1.f;
            float ldr = 1.f;
            int atk = equipment.stat[병기능력_공격];
            int def = equipment.stat[병기능력_방어];
            int mov = equipment.stat[병기능력_이동];


            int defskill_불굴 = 특기_불굴;
            int defskill_금강 = 특기_금강;
            int defskill_철벽 = 특기_철벽;

            if (weapon_id == 병기_검 or (weapon_id == 병기_주가 and type == 부대종류_수송))
                apt = 0.6f;

            if (status == 부대상태_혼란)
                sts = 0.8f;

            if (type == 부대종류_수송)
            {
                str = 0.4f;
                ldr = 1.f / 3.f;
            }

            if (weapon_id <= 병기_군마)
            {
                int tech_id = -1;

                int relation_level = 0;


                if (weapon_id <= 병기_노)
                {
                    // 남만 3단계 적용
                    if (pk::get_hex(leader.get_pos()).terrain == 지형_숲)
                    {
                        relation_level = GetRelationLevel(force, 우호_남만);

                        if (relation_level == 3)
                        {
                            atk = atk + 남만_3단계_숲강화;
                        }
                    }

                    relation_level = GetRelationLevel(force, 우호_천축국);

                    // 천축 3단계 적용
                    if (relation_level == 3)
                    {
                        bool isJingNan = IsEnableZhou(force, 형남);
                        pk::city@ city = pk::get_city(pk::get_city_id(leader.get_pos()));

                        if (city != null)
                        {
                            if (pk::get_distance(leader.get_pos(), city.get_pos()) <= 3)
                            {
                                if (true == isJingNan)
                                {
                                    atk = atk + 천축_3단계_공방상승;
                                    def = def + 천축_3단계_공방상승;
                                }
                                else
                                {
                                    atk = atk + 천축_3단계_공방상승 / 2;
                                    def = def + 천축_3단계_공방상승 / 2;
                                }
                            }
                        }
                    }
                }

                if (weapon_id == 병기_창)
                {
                    tech_id = 기교_정예창병;
                    // 대진국 지역이점
                    relation_level = GetRelationLevel(force, 우호_대진국);
                    bool isSili = IsEnableZhou(force, 사예);

                    if (relation_level == 3)
                    {
                        if (true == isSili)
                        {
                            def = def + 대진_3단계_창병방어;
                        }
                        else
                        {
                            def = def + 대진_3단계_창병방어 / 2;
                        }
                    }
                    else if (relation_level > 0)
                    {
                        if (true == isSili)
                        {
                            def = def + 대진_1단계_창병방어;
                        }
                        else
                        {
                            def = def + 대진_1단계_창병방어 / 2;
                        }
                    }
                }
                else if (weapon_id == 병기_극)
                {
                    tech_id = 기교_정예극병;
                }
                else if (weapon_id == 병기_노)
                {
                    tech_id = 기교_정예노병;
                    // 귀상국 지역이점
                    relation_level = GetRelationLevel(force, 우호_귀상국);
                    bool isYiZhou = IsEnableZhou(force, 익주);
                    if (relation_level >= 2)
                    {
                        if (true == isYiZhou)
                        {
                            atk = atk + 귀상_2단계_궁병공격;
                        }
                        else
                        {
                            atk = atk + 귀상_2단계_궁병공격 / 2;
                        }
                    }
                }
                else if (weapon_id == 병기_군마)
                {
                    tech_id = 기교_정예기병;
                    // 안식국 지역이점
                    relation_level = GetRelationLevel(force, 우호_안식국);
                    bool isJingZhao = IsEnableZhou(force, 경조);
                    if (relation_level == 3)
                    {
                        if (true == isJingZhao)
                        {
                            atk = atk + 안식_3단계_기병공격;
                        }
                        else
                        {
                            atk = atk + 안식_3단계_기병공격 / 2;
                        }
                    }
                    else if (relation_level > 0)
                    {
                        if (true == isJingZhao)
                        {
                            atk = atk + 안식_1단계_기병공격;
                        }
                        else
                        {
                            atk = atk + 안식_1단계_기병공격 / 2;
                        }
                    }
                }

                if (pk::has_tech(force, tech_id))
                {
                    atk = atk + 10;
                    def = def + 10;
                }

                if (!navy)
                {
                    int forceId = force.get_force_id();

                    // 병주 지역이점
                    bool isEnemyGround = false;

                    pk::city@ city = pk::get_city(pk::get_city_id(leader.get_pos()));

                    if (city == null)
                    {
                        isEnemyGround = true;
                    }
                    else
                    {
                        if (true == pk::is_enemy(leader, city))
                        {
                            isEnemyGround = true;
                        }
                    }

                    if (true == isEnemyGround)
                    {
                        ExecuteBingZhouMove(force, mov);
                    }
                }
            }

            if (weapon_id == 병기_투석)
            {
                // 대진국 지역이점
                int relation_level = GetRelationLevel(force, 우호_대진국);
                bool isSili = IsEnableZhou(force, 사예);

                if (relation_level >= 2)
                {
                    if (true == isSili)
                    {
                        atk = atk + 대진_2단계_투석공격;
                    }
                    else
                    {
                        atk = atk + 대진_2단계_투석공격 / 2;
                    }
                }
            }

            // ------------------------------- //
            // 공격/방어력 추가 효과 적용 시 작성할 위치 //
            // ------------------------------- //


            /* 버프 적용 안함
            // 방어 특기자의 방어력 버프 : 종류별로 중첩 가능
            if (pk::has_skill(member, defskill_불굴))
                def = def + 10;
            if (pk::has_skill(member, defskill_금강))
                def = def + 10;
            if (pk::has_skill(member, defskill_철벽))
                def = def + 15;
            */


            /*
                [원본] 부대 능력을 결정하는 요소들 < 공격(무력), 방어(통솔), 건설(정치) >
                attr.stat[부대능력_공격] = pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_무력] * atk * apt * 0.01f) * str * sts));
                attr.stat[부대능력_방어] = pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_통솔] * def * apt * 0.01f) * ldr * sts));
                attr.stat[부대능력_건설] = pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_정치] * 2.f / 3 + 50) * ldr * sts));
            */
            float atk_stat_ratio = 0.0f;
            float def_stat_ratio = 0.0f;

            if (공격력_수식변경)
                atk_stat_ratio = pk::min(1.0f, pk::max(0.0f, 공격력_통솔비율));
            else
                atk_stat_ratio = 0.0f;

            if (방어력_수식변경)
                def_stat_ratio = pk::min(1.0f, pk::max(0.0f, 방어력_무력비율));
            else
                def_stat_ratio = 0.0f;


            // 부대 공격력 = (주)무력, (부)통솔이 함께 관여 (합산)
            attr.stat[부대능력_공격] = int(pk::min(255.f, pk::max(1.f, (((1.f - atk_stat_ratio) * attr.stat[부대능력_무력] + atk_stat_ratio * attr.stat[부대능력_통솔]) / 1.0f * atk * apt * 0.01f) * str * sts)));
            // 부대 방어력 = (주)통솔, (부)무력이 함께 관여 (합산)
            attr.stat[부대능력_방어] = int(pk::min(255.f, pk::max(1.f, (((1.f - def_stat_ratio) * attr.stat[부대능력_통솔] + def_stat_ratio * attr.stat[부대능력_무력]) / 1.0f * def * apt * 0.01f) * ldr * sts)));

            // 부대 지력 = 지력
            attr.stat[부대능력_지력] = int(pk::min(255.f, (attr.stat[부대능력_지력]) / 1.f));
            // 부대 건설 (원본과 동일)
            attr.stat[부대능력_건설] = int(pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_정치] * 2.f / 3.f + 50) * ldr * sts)));


            //--------------------------------------------------------------------------------
            // 부대 조건에 따른 이동력 가변 효과

            // 부대별 기력, 통솔력, 적성, 병력수 효과 이동력 계산용 변수 추가 ('18.10.7)
            float mov_var = mov;

            // 병력수에 따른 이동력 보정 : 기본 이동력 +1, 3000명 증가 시마다 이동력 감소 ('18.10.9)
            if (이동력_병력설정)
            {
                if (type == 부대종류_수송)
                    mov_var = mov_var + 1 - pk::min(5, (troops / 6000));    // 수송부대 이동력 감소 리미터 ('18.11.24)
                else
                    mov_var = mov_var + 1 - pk::min(10, (troops / 3000));    // 전투부대 이동력 감소 리미터
            }

            // 병과 적성에 따른 이동력 보정 S급=+10%, C급=-20%('18.10.8)
            if (이동력_적성설정)
            {
                if (type == 부대종류_전투)    // 전투부대에 한하여 적성 고려 추가 ('18.11.26)
                    mov_var = mov_var * (1.f + 0.1f * pk::min(2, (attr.tekisei[pk::equipment_id_to_heishu(weapon_id)] - 적성_A)));
            }

            // 부대별 통솔력에 따른 이동력 변동 85% ~ 105% 변동 : 통솔력 75일 때 ±0% ('18.10.7)
            if (이동력_통솔설정)
                mov_var = mov_var * (0.85f + 0.20f * (attr.stat[부대능력_통솔] / 100.f));

            // 부대별 기력에 따른 이동력 80% ~ 110% 변동 : 기력 80일 때 100% ('18.10.10)
            if (이동력_기력설정)
                mov_var = mov_var * (0.80f + 0.30f * (unit_energy / 120.f));

            // 계절에 따른 이동력 증감 효과 ('18.10.9)
            if (이동력_계절설정)
            {
                switch (pk::get_season())            // pk::get_season()= 0:봄, 1:여름, 2:가을, 3:겨울
                {
                case 계절_여름: mov_var -= 2; break;    // 여름에 이동력 -2
                case 계절_겨울: mov_var -= 4; break;    // 겨율에 이동력 -4
                }
            }

            // 부대의 좌표 영토에 따른 이동력 효과 : 아군영토에서 이동력 상승, 적군영토에서 이동력 감소 ('18.12.27)
            if (이동력_영토설정 and pk::is_alive(unit))
            {
                pk::building@ area_building = pk::get_building(pk::get_building_id(unit.pos));
                if (pk::is_alive(area_building))
                {
                    if (unit.get_force_id() == area_building.get_force_id())
                        mov_var = mov_var * 1.1f;   // 아군영토에서 이동력 10%증가 
                    else if (pk::is_enemy(unit, area_building))
                        mov_var = mov_var * 0.9f;   // 적군영토에서 이동력 10% 감소 
                }
            }

            // 부대별 최종 가변 이동력
            mov = int(mov_var);

            //--------------------------------------------------------------------------------
            // 기존 스크립트 수정 : 기교 및 세력/장수별 특징 반영

            if (type == 부대종류_전투)
            {
                switch (weapon_id)
                {
                case 병기_창:
                    if (pk::has_tech(force, 기교_정예창병))
                        mov = mov + 6;
                    break;

                case 병기_극:
                    if (pk::has_tech(force, 기교_정예극병))
                        mov = mov + 6;
                    break;

                case 병기_노:
                    if (pk::has_tech(force, 기교_정예노병))
                        mov = mov + 6;
                    break;

                case 병기_군마:
                    if (pk::has_tech(force, 기교_양마산출))
                        mov = mov + 2;
                    if (pk::has_tech(force, 기교_정예기병))   // 정예기병 이동력 하향 ('18.10.5)
                        mov = mov + 4;
                    break;

                case 병기_충차:
                    if (pk::has_tech(force, 기교_차축강화))   // 차축강화 이동력 상향 ('18.10.5)
                        mov = mov + 4;
                    break;

                case 병기_정란:
                    if (pk::has_tech(force, 기교_차축강화))    // 차축강화 이동력 상향 ('18.10.5)
                        mov = mov + 4;
                    break;

                case 병기_투석:
                    if (pk::has_tech(force, 기교_차축강화))    // 차축강화 이동력 상향 ('18.10.5)
                        mov = mov + 4;
                    break;

                case 병기_목수:
                    if (pk::has_tech(force, 기교_차축강화))
                        mov = mov + 4;
                    break;
                }


                if (weapon_id <= 병기_노)
                {
                    mov = mov + int(pk::core::skill_constant(member, 특기_강행)); // 5
                }
                else if (weapon_id == 병기_군마)
                {
                    if (pk::has_skill(member, 특기_강행))
                        mov = mov + int(pk::core::skill_constant(member, 특기_강행)); // 5
                    else if (pk::has_skill(member, 특기_행군))
                        mov = mov + int(pk::core::skill_constant(member, 특기_행군)); // 3

                    // 세력별 육상 이동력 보정 ('18.10.1) - 기병 세력 양마산출 효과 +2
                    if (세력효과설정 and pk::has_tech(force, 기교_양마산출))
                    {
                        if (pk::get_kunshu_id(force) == 무장_공손찬)
                            mov = mov + 2;
                        else if (pk::get_kunshu_id(force) == 무장_마등)
                            mov = mov + 2;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_마초)))
                            mov = mov + 2;
                        else if (pk::get_kunshu_id(force) == 무장_동탁)
                            mov = mov + 2;
                        else if (pk::get_kunshu_id(force) == 무장_여포)
                            mov = mov + 2;
                    }
                }
                else if (weapon_id <= 병기_목수)
                {
                    // 세력별 육상 이동력 보정 ('18.10.1) - 조조 또는 유엽의 세력인 육상 차축강화 효과 +4
                    if (세력효과설정 and pk::has_tech(force, 기교_차축강화))
                    {
                        if (pk::get_kunshu_id(force) == 무장_조조)
                            mov = mov + 2;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_유엽)))
                            mov = mov + 2;
                    }
                }

            }
            else if (type == 부대종류_수송)   // 수송부대
            {
                if (pk::has_tech(force, 기교_목우유마))
                    mov = mov + 3;

                mov = mov + 5;
                mov = mov + int(pk::core::skill_constant(member, 특기_운반)); // 5

                // 귀상국 지역이점
                int relation_level = GetRelationLevel(force, 우호_귀상국);
                bool isYiZhou = IsEnableZhou(force, 익주);
                if (relation_level >= 1)
                {
                    if (true == isYiZhou)
                    {
                        mov = mov + 귀상_1단계_수송이동;
                    }
                    else
                    {
                        mov = mov + 귀상_1단계_수송이동 / 2;
                    }
                }

                if (세력효과설정 and pk::has_tech(force, 기교_목우유마))
                {
                    if (weapon_id == 병기_주가) //수상에 있을 경우
                    {
                        // 세력별 운송력 보정 ('18.10.4) - 동오 군주 또는 주유/노숙의 세력인 경우 목우유마 수상 효과 +4
                        if (pk::get_kunshu_id(force) == 무장_손견)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == 무장_손책)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == 무장_손권)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_주유)))
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_노숙)))
                            mov = mov + 4;
                    }

                    else    //육상에 있을 경우
                    {
                        // 세력별 운송력 보정 ('18.10.4) - 촉한 군주 또는 제갈량/황월영의 세력인 경우 목우유마 육상 효과 +3
                        if (pk::get_kunshu_id(force) == 무장_유비)
                            mov = mov + 3;
                        else if (pk::get_kunshu_id(force) == 무장_유선)
                            mov = mov + 3;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_제갈량)))
                            mov = mov + 3;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_황월영)))
                            mov = mov + 3;
                    }
                }
            }

            if (navy)   //수상 부대인 경우
            {
                mov = mov + int(pk::core::skill_constant(member, 특기_조타)); // 4

                if (세력효과설정)
                {
                    mov += 4; // 부대조건의 수상이동력 반영에 따른 저하로 기본 이동력 보정
                    // 세력별 수상 이동력 보정 ('18.10.1) - 동오/형주 세력 수상전투부대 이동강화 - 차축강화 기교개발 시 적용됨
                    if (pk::has_tech(force, 기교_차축강화) and (type != 부대종류_수송)) //수송병과가 아님
                    {
                        if (pk::get_kunshu_id(force) == 무장_손견)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == 무장_손책)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == 무장_손권)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_주유)))
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_여몽)))
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_육손)))
                            mov = mov + 4;

                        else if (pk::get_kunshu_id(force) == 무장_유표)
                            mov = mov + 4;
                        else if (pk::get_kunshu_id(force) == pk::get_kunshu_id(pk::get_person(무장_채모)))
                            mov = mov + 4;
                    }
                }
            }

            // '20.8.29, 이동력 최대값 제한 설정 추가
            if (이동력_최대제한)
                mov = pk::min(40, mov);

            attr.stat[부대능력_이동] = pk::max(1, mov);   // '20.8.29, 이동력 최소값 제한 추가 (0 이하로 될 경우 게임 튕길 수 있음)
        }

        /**
            관계에 따른 능력 보정  -- 기존 수식 : 주장과 부장1, 주장과 부장2 의 각 보정 결과 중 최대값
        */
        int func_495ff0(pk::person@ leader, int leader_stat, pk::person@ deputy, int deputy_stat)
        {
            if (leader_stat > deputy_stat)
                return leader_stat;

            int leader_id = leader.get_id();
            int deputy_id = deputy.get_id();

            if (pk::is_gikyoudai(leader, deputy_id) or pk::is_fuufu(leader, deputy_id))
                return deputy_stat;

            if (pk::is_like(leader, deputy_id) or pk::is_like(deputy, leader_id))
                return leader_stat + (deputy_stat - leader_stat) / 2;

            if (pk::is_ketsuen(leader, deputy_id))
                return leader_stat + (deputy_stat - leader_stat) / 3;

            if (pk::is_dislike(leader, deputy_id) or pk::is_dislike(deputy, leader_id))
                return leader_stat;

            return leader_stat + (deputy_stat - leader_stat) / 4;
        }

        /**
            서로 상대방을 혐오하는 관계가 있는지 확인
        */
        bool func_4960d0(pk::person@ a, pk::person@ b)
        {
            if (a !is null and b !is null)
                return pk::is_dislike(a, b.get_id()) or pk::is_dislike(b, a.get_id());
            return false;
        }

        // --------------------------------------------------------------------------------------
        //**  관계에 따른 능력 보정  -- 신규 수식 : 각 부장의 능력 보조량만 계산 후 주장+부장1+부장2 최종 합산 **/
        int func_sub_stat(pk::person@ leader, int leader_stat, pk::person@ deputy, int deputy_stat)
        {

            int leader_id = leader.get_id();
            int deputy_id = deputy.get_id();

            int stat_add = 0;

            // 혐오 관계 무장인 경우 : 보조 없음
            if (pk::is_dislike(leader, deputy_id) or pk::is_dislike(deputy, leader_id))
                stat_add = 0;
            // 의형제 또는 부부 관계인 경우 : 부장 능력의 25% 보조
            else if (pk::is_gikyoudai(leader, deputy_id) or pk::is_fuufu(leader, deputy_id))
                stat_add = int(pk::max(0.25f * deputy_stat, 1.f * (deputy_stat - leader_stat)));
            // 혈연 관계인 경우 : 부장 능력의 20% 보조
            else if (pk::is_ketsuen(leader, deputy_id))
                stat_add = int(0.2f * deputy_stat);
            // 주장/부장이 친애 무장인 경우 : 부장 능력의 15% 보조
            else if (pk::is_like(leader, deputy_id) or pk::is_like(deputy, leader_id))
                stat_add = int(0.15f * deputy_stat);
            // 기타 관계 : 부장 능력의 10% 보조
            else
                stat_add = int(0.1f * deputy_stat);

            return stat_add;
        }
        // ================================================== 부대 능력치 끝 ==========================================================================

        // ================================================== 168 거점 점령 후 처리 ====================================================================
        
    /*
    @원본 : 168 거점 점령 후처리.cpp (PK2.1 기본 제공 파일)
    @수정 : masterpiecek

    - 유저설정 기본값은 PK2.1 원본과 동일한 상태입니다.

    [ 거점 점령 후처리 대상 및 모드 설명 ]

    1. 일반세력 공격부대가 점령한 거점의 후처리 : 거점의 자원 (금, 병량, 병력, 병기)
     - 모드 1 : 흡수비율 매력반영 - 거점 공격부대 주장의 매력이 반영된 자원 흡수비율을 설정
     - 모드 2 : 흡수비율 직접설정 - 거점의 전체 자원 중 흡수할 고정비율을 직접 설정
      * 거점을 점령한 공격부대가 플레이어 세력인지 컴퓨터 세력인지에 따라 각각 설정 가능
      * 에볼루션킷 기존 설정 : 모드 2
      * PK2.1 기존 설정 : 모드 1

    2. 일반세력 공격부대가 점령한 도시의 후처리 : 도시의 내정시설
     * 모드별로 일정비율 또는 일정수의 내정시설을 무작위로 파괴하고 나머지를 공격부대 세력이 흡수하는 형태
     - 모드 1 : 흡수개수 매력반영 - 거점 공격부대 주장의 매력이 높을수록 파괴되지 않고 흡수하는 내정시설 수 증가
     - 모드 2 : 파괴비율 직접설정 - 전체 내정시설 중 설정한 파괴비율의 개수만큼 파괴
     - 모드 3 : 파괴확률 개별적용 - 설정한 파괴확률을 각 내정시설별로 판단하여 충족 시 파괴
      * 거점을 점령한 공격부대가 플레이어 세력인지 컴퓨터 세력인지에 따라 각각 설정 가능
      * 에볼루션킷 기존 설정 : 모드 1
      * PK2.1 기존 설정 : 모드 1

    3. 일반세력 공격부대가 점령한 도시의 후처리 : 도시구역 내 군사시설 (공격부대 세력의 군사시설은 제외)
     1) 도시세력 군사시설 : 점령한 도시 세력의 군사시설
     2) 제3세력 군사시설 : 공격부대 세력도 점령한 도시 세력도 아닌 제3세력의 군사시설 처리
      * 모드별로 일정 확률로 군사시설을 공격부대 세력으로 흡수하거나 파괴하고 나머지 군사시설은 기존의 세력으로 잔류시키는 형태
      - 모드 1 : 처리확률 거리반영 - 도시로부터의 거리에 따라 시설의 흡수 및 파괴 확률 차등 적용
      - 모드 2 : 처리비율 직접설정 - 전체 군사시설 중 설정한 흡수비율의 개수만큼 흡수, 파괴비율의 개수만큼 파괴
      - 모드 3 : 처리확률 개별적용 - 설정한 흡수확률, 파괴확률을 각 군사시설별로 판단하여 충족 시 흡수 및 파괴
       * 거점을 점령한 공격부대가 플레이어 세력인지 컴퓨터 세력인지에 따라 각각 설정 가능
       * 에볼루션킷 기존 설정 : 모드 1 (단, 도시세력 군사시설만 적용)
       * PK2.1 기존 설정 : 모드 2 (단, 도시세력 군사시설만 적용)

    4. 적장세력 공격부대가 점령한 도시의 후처리 : 내정시설, 군사시설(도시세력 및 제3세력 군사시설)
     * 에볼루션킷 기존 설정 : 내정시설 전부 파괴, 도시세력 군사시설 전부 파괴, 제3세력 군사시설 그대로 잔류
     * PK2.1 기존 설정 : 내정시설 전부 파괴, 도시세력 군사시설 전부 파괴, 제3세력 군사시설 그대로 잔류

    5. 도시구역 내 기타시설의 후처리 : 함정 및 장벽 등
     * 에볼루션킷 기존 설정 : 기타시설은 그대로 잔류
     * PK2.1 기존 설정 : 기타시설은 그대로 잔류
    */

    /// ============================================== < 유저 설정 > ==============================================

        /// [ 거점 점령 후처리 : 거점자원 ]

        /// 자원흡수비율 모드
        // 모드 1 : 흡수비율 매력반영 (PK2.1 원본과 동일모드)
        // 모드 2 : 흡수비율 직접설정 (에볼루션킷 원본과 동일모드)
        array<int>
        자원흡수비율_모드 = {/*플레이어*/1, /*컴퓨터*/1 },

        /// 모드 1 : 흡수비율 매력반영
        // 기본값 설명 : 매력이 80인 경우 80의 10%가 8이므로 전체 거점자원의 8%를 흡수 (흡수비율 최소 5%, 최대 100%)
        자원흡수비율_매력반영비율 = {/*플레이어*/10, /*컴퓨터*/10 },
        자원흡수비율_최대흡수비율 = {/*플레이어*/100, /*컴퓨터*/100 },
        자원흡수비율_최소흡수비율 = {/*플레이어*/5, /*컴퓨터*/5 },

        /// 모드 2 : 흡수비율 직접설정
        // 기본값 설명 : 거점의 모든 자원에 대하여 자원별로 70%를 흡수
        자원흡수비율_금 = {/*플레이어*/70, /*컴퓨터*/70 },
        자원흡수비율_병량 = {/*플레이어*/70, /*컴퓨터*/70 },
        자원흡수비율_병력 = {/*플레이어*/70, /*컴퓨터*/70 },
        자원흡수비율_병기 = {/*플레이어*/70, /*컴퓨터*/70 },

        /// -----------------------------------------------------------------------------------------------------------

        /// [ 도시 점령 후처리 : 도시의 내정시설 ]

        /// 내정시설 처리모드
        // 모드 1 : 흡수개수 매력반영 (PK.1, 에볼루션킷 원본과 동일모드)
        // 모드 2 : 파괴비율 직접설정
        // 모드 3 : 파괴확률 개별적용
        내정시설_처리모드 = {/*플레이어*/1, /*컴퓨터*/1 },

        /// 모드 1 : 흡수개수 매력반영
        // 기본값 설명 : 매력이 70인 경우 70의 5%가 3.5인데 반올림하여 4개의 시설을 파괴하지 않고 흡수 (최소 0개, 최대 15개 흡수 가능)
        내정시설_흡수개수_매력반영비율 = {/*플레이어*/5, /*컴퓨터*/5 },
        내정시설_흡수개수_최소 = {/*플레이어*/0, /*컴퓨터*/0 },
        내정시설_흡수개수_최대 = {/*플레이어*/15, /*컴퓨터*/15 },

        /// 모드 2 : 파괴비율 직접설정
        // 기본값 설명 : 전체 내정시설 수가 8개인 경우 8개의 60%가 4.8인데 반올림하여 5개를 파괴
        내정시설_파괴비율 = {/*플레이어*/60, /*컴퓨터*/60 },

        /// 모드 3 : 파괴확률 개별적용
        // 기본값 설명 : 각각의 내정시설별로 60%의 확률을 적용하여 확률을 충족하는 시설을 파괴
        내정시설별_파괴확률 = {/*플레이어*/60, /*컴퓨터*/60 },

        /// -----------------------------------------------------------------------------------------------------------

        /// [ 도시 점령 후처리 : 도시구역 내 군사시설 ]

        /// 군사시설 처리모드
        // 모드 1 : 처리확률 거리반영 (에볼루션킷 원본과 동일모드 - 단, 도시세력 군사시설만 적용)
        // 모드 2 : 처리비율 직접설정 (PK2.1 원본과 동일모드 - 단, 도시세력 군사시설만 적용)
        // 모드 3 : 처리확률 개별적용
        도시세력_군사시설_처리모드 = {/*플레이어*/2, /*컴퓨터*/2 },
        제3세력_군사시설_처리모드 = {/*플레이어*/2, /*컴퓨터*/2 };

        /// 모드 1 : 처리확률 거리반영
        /* 기본값 설명 : 점령된 도시세력의 군사시설은 도시로부터 거리가 4이하인 경우 75%의 확률로 공격부대 세력으로 흡수하고 5%의 확률로 파괴,
                         거리가 4초과 8이하인 경우 50%의 확률로 공격부대 세력으로 흡수하고 30%의 확률로 파괴,
                         거리가 8초과인 경우 30%의 확률로 공격부대 세력으로 흡수하고 50%의 확률로 파괴
                         (공격부대 세력도 도시세력도 아닌 제3세력 군사시설도 동일하게 설정된 상태)
                         (흡수되거나 파괴되지 않은 시설은 기존의 세력으로 잔류) */
        array<array<int>>
        도시세력_군사시설_기준거리 = { /*플레이어*/{4, 8}, /*컴퓨터*/{4, 8} },
        도시세력_군사시설_거리별_흡수확률 = { /*플레이어*/{75, 50, 30}, /*컴퓨터*/{75, 50, 30} },
        도시세력_군사시설_거리별_파괴확률 = { /*플레이어*/{5, 30, 50}, /*컴퓨터*/{5, 30, 50} },
        제3세력_군사시설_기준거리 = { /*플레이어*/{4, 8}, /*컴퓨터*/{4, 8} },
        제3세력_군사시설_거리별_흡수확률 = { /*플레이어*/{75, 50, 30}, /*컴퓨터*/{75, 50, 30} },
        제3세력_군사시설_거리별_파괴확률 = { /*플레이어*/{5, 30, 50}, /*컴퓨터*/{5, 30, 50} };

        /// 모드 2 : 처리비율 직접설정
        /* 기본값 설명 : 점령된 도시세력의 군사시설은 흡수(0%)하지 않고 모두 파괴(100%),
                         공격부대 세력도 도시세력도 아닌 제3세력 군사시설은 흡수(0%) 및 파괴(0%)하지 않고 모두 기존의 세력으로 잔류
                         (비율에 따른 흡수 및 파괴할 시설의 개수는 반올림하여 결정) */
        array<int>
        도시세력_군사시설_흡수비율 = {/*플레이어*/0, /*컴퓨터*/0 },
        도시세력_군사시설_파괴비율 = {/*플레이어*/100, /*컴퓨터*/100 },
        제3세력_군사시설_흡수비율 = {/*플레이어*/0, /*컴퓨터*/0 },
        제3세력_군사시설_파괴비율 = {/*플레이어*/0, /*컴퓨터*/0 },

        /// 모드 3 : 처리확률 개별적용
        /* 기본값 설명 : 점령된 도시세력의 군사시설은 각 군사시설별로 20%의 확률로 흡수하고 80%의 확률로 파괴,
                         공격부대 세력도 도시세력도 아닌 제3세력 군사시설은 흡수 및 파괴하지 않고 모두 기존의 세력으로 잔류 */
        도시세력_군사시설별_흡수확률 = {/*플레이어*/20, /*컴퓨터*/20 },
        도시세력_군사시설별_파괴확률 = {/*플레이어*/80, /*컴퓨터*/80 },
        제3세력_군사시설별_흡수확률 = {/*플레이어*/0, /*컴퓨터*/0 },
        제3세력_군사시설별_파괴확률 = {/*플레이어*/0, /*컴퓨터*/0 };

        /// -----------------------------------------------------------------------------------------------------------

        /// [ 기타 설정 ]

        /// 적장세력이 도시점령 시 내정시설 및 군사시설(도시세력의 군사시설, 제3세력의 군사시설) 처리 설정
        // 내정시설이 파괴되지 않도록 한 경우 내정시설은 세력없음으로 잔류하며 이후 점령한 세력으로 다시 흡수됨
        bool 적장세력_도시점령시_내정시설_파괴 = true;
        bool 적장세력_도시점령시_군사시설_파괴_도시세력 = true;
        bool 적장세력_도시점령시_군사시설_파괴_제3세력 = false;

        /// 점령된 도시의 함정, 장벽 파괴여부 설정
        bool 도시점령시_기타시설_파괴_함정 = false;
        bool 도시점령시_기타시설_파괴_장벽 = false;

        /// ===========================================================================================================

        bool 디버깅 = false;

        /// ===========================================================================================================

        // facility_index : 0(도시세력), 1(제3세력)
        array<array<array<int>>> 군사시설_기준거리 = { 도시세력_군사시설_기준거리, 제3세력_군사시설_기준거리 };
        array<array<array<int>>> 군사시설_거리별_흡수확률 = { 도시세력_군사시설_거리별_흡수확률, 제3세력_군사시설_거리별_흡수확률 };
        array<array<array<int>>> 군사시설_거리별_파괴확률 = { 도시세력_군사시설_거리별_파괴확률, 제3세력_군사시설_거리별_파괴확률 };
        array<array<int>> 군사시설_처리모드 = { 도시세력_군사시설_처리모드, 제3세력_군사시설_처리모드 };
        array<array<int>> 군사시설_흡수비율 = { 도시세력_군사시설_흡수비율, 제3세력_군사시설_흡수비율 };
        array<array<int>> 군사시설_파괴비율 = { 도시세력_군사시설_파괴비율, 제3세력_군사시설_파괴비율 };
        array<array<int>> 군사시설별_흡수확률 = { 도시세력_군사시설별_흡수확률, 제3세력_군사시설별_흡수확률 };
        array<array<int>> 군사시설별_파괴확률 = { 도시세력_군사시설별_파괴확률, 제3세력_군사시설별_파괴확률 };

        /// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

        /**
        @param base     : 점령한 거점
        @param attacker : 공격 부대
        */
        void func168(pk::building@ base, pk::unit@ attacker)
        {
            if (!pk::is_alive(base)) return;
            if (!pk::is_alive(attacker)) return;

            pk::person@ attacker_leader = pk::get_person(attacker.leader);
            pk::force@ attacker_force = pk::get_force(attacker.get_force_id());
            pk::force@ base_force = pk::get_force(base.get_force_id());
            pk::person@ moo = pk::get_person(무장_문관);
            int charisma = (pk::is_alive(attacker_leader)) ? attacker_leader.stat[무장능력_매력] : 20;

            int value = 0;

            int relation_level = GetRelationLevel(attacker_force, 우호_천축국);

            if (relation_level >= 1)
            {
                value = 천축_1단계_추가보존;

                if (value < 0)
                {
                    value = 0;
                }
            }

            if (false == IsEnableZhou(attacker_force, 형남))
            {
                value = value / 2;
            }

            func_디버깅(attacker, attacker_force, attacker_leader, base, base_force);
            func_점령거점_후처리_거점자원(base, attacker, charisma, value);

            pk::city@ city = pk::building_to_city(base);
            if (!pk::is_alive(city)) return;

            int city_id = city.get_id();
            int city_force_id = city.get_force_id();
            int zhou = GetZhouId(city_id);

            pk::list<pk::building@> 내정시설_처리후보_목록;
            pk::list<pk::building@> 도시세력_군사시설_처리후보_목록;
            pk::list<pk::building@> 제3세력_군사시설_처리후보_목록;

            bool isAttackerGet = IsRegionBuffChange(attacker_force, city_id, false);             // 공격자가 지역이점 획득
            bool isDefenderLose = IsRegionBuffChange(base_force, city_id, true);            // 피격자가 지역이점 상실

             // 지역이점 변동여부 체크

            if (true == IsValidForce(attacker_force))
            {
                if (true == attacker_force.is_player())
                {
                    // 플레이어가 공격자인 경우
                    if (true == isAttackerGet)
                    {
                        // 얻는 소리
                        pk::play_se(10);
                        pk::message_box(pk::u8encode(pk::format("아군이 \x1b[2x{}\x1b[0x지역의 지역이점을 획득했습니다.", 주_이름[zhou])), moo);
                    }
                }
            }

            if (true == IsValidForce(base_force))
            {
                if (true == base_force.is_player())
                {
                    // 플레이어가 피격자인 경우
                    if (true == isDefenderLose)
                    {
                        // 잃는 소리
                        pk::play_se(27);
                        pk::message_box(pk::u8encode(pk::format("아군이 \x1b[2x{}\x1b[0x지역의 지역이점을 상실했습니다.", 주_이름[zhou])), moo);
                    }
                }
            }

            // 피격 세력이 멸망당하지 않고 지역이점을 상실했을 경우
            if (true == isDefenderLose && pk::get_city_count(base_force) > 1)
            {
                string forceName;

                if (base_force.kokugou != -1)
                {
                    forceName = pk::get_kokugou(base_force.kokugou).get_name() + pk::u8encode("군");
                }
                else
                {
                    forceName = pk::get_name(pk::get_person(base_force.kunshu)) + pk::u8encode("군");
                }

                pk::history_log(base.get_pos(), base_force.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x이 \x1b[1x{}\x1b[0x의 지역이점 상실", pk::u8decode(forceName), 주_이름[zhou])));
            }

            // 공격세력이 지역이점을 획득했을 경우
            if (true == isAttackerGet)
            {
                string forceName;

                if (attacker_force.kokugou != -1)
                {
                    forceName = pk::get_kokugou(attacker_force.kokugou).get_name() + pk::u8encode("군");
                }
                else
                {
                    forceName = pk::get_name(pk::get_person(attacker_force.kunshu)) + pk::u8encode("군");
                }

                pk::history_log(base.get_pos(), attacker_force.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x이 \x1b[1x{}\x1b[0x의 지역이점 획득", pk::u8decode(forceName), 주_이름[zhou])));
            }

            for (int building_id = 0; building_id < 건물_끝; building_id++)
            {
                pk::building@ building = pk::get_building(building_id);
                if (!pk::is_alive(building)) continue;
                if (!is_target_facility(city, attacker, building)) continue;

                if (pk::is_normal_force(attacker.get_force_id()))
                {
                    if (pk::get_facility_type(building) == 시설종류_내정시설)
                    {
                        내정시설_처리후보_목록.add(building);
                    }
                    else if (pk::get_facility_type(building) == 시설종류_군사시설)
                    {
                        if (building.get_force_id() == city.get_force_id()) 도시세력_군사시설_처리후보_목록.add(building);
                        else                                                제3세력_군사시설_처리후보_목록.add(building);
                    }
                }

                func_점령도시_후처리_적장세력_도시점령시(city, attacker, building);
                func_점령도시_후처리_기타시설(building);
            }

            func_점령도시_후처리_내정시설(city, attacker, charisma, 내정시설_처리후보_목록, value);
            func_점령도시_후처리_군사시설(city, attacker, charisma, 도시세력_군사시설_처리후보_목록, /*도시세력*/0, value);
            func_점령도시_후처리_군사시설(city, attacker, charisma, 제3세력_군사시설_처리후보_목록, /*제3세력*/1, value);
        }

        ///	<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

                /// 초기설정 : 일반세력 공격부대가 일반세력의 거점을 점령한 경우 기본적으로 거점의 자원(금, 병량, 병력, 병기)을 모두 흡수함 (설정 가능)
                // 일반세력 공격부대가 빈거점을 점령하는 경우는 해당사항 없음
                // 적장세력 공격부대가 일반세력의 거점을 점령하는 경우는 거점의 모든 자원이 손실됨
        void func_점령거점_후처리_거점자원(pk::building@ base, pk::unit@ attacker, int charisma, int regionBuff)
        {
            int gold_ratio = 0, food_ratio = 0, troops_ratio = 0, wpn_amount_ratio = 0;

            if (자원흡수비율_모드[get_index(attacker)] == /*흡수비율 매력반영*/1)
            {
                int charisma_ratio = 자원흡수비율_매력반영비율[get_index(attacker)];
                int min_ratio = 자원흡수비율_최소흡수비율[get_index(attacker)];
                int max_ratio = 자원흡수비율_최대흡수비율[get_index(attacker)];
                int resource_ratio = pk::min(max_ratio, pk::max((charisma * charisma_ratio / 100), min_ratio));
                gold_ratio = food_ratio = troops_ratio = wpn_amount_ratio = resource_ratio;
            }
            else if (자원흡수비율_모드[get_index(attacker)] == /*흡수비율 직접설정*/2)
            {
                gold_ratio = 자원흡수비율_금[get_index(attacker)];
                food_ratio = 자원흡수비율_병량[get_index(attacker)];
                troops_ratio = 자원흡수비율_병력[get_index(attacker)];
                wpn_amount_ratio = 자원흡수비율_병기[get_index(attacker)];
            }

            gold_ratio = pk::min(gold_ratio * (100 + regionBuff) / 100, 100);
            food_ratio = pk::min(food_ratio * (100 + regionBuff) / 100, 100);
            troops_ratio = pk::min(troops_ratio * (100 + regionBuff) / 100, 100);
            wpn_amount_ratio = pk::min(wpn_amount_ratio * (100 + regionBuff) / 100, 100);

            pk::set_gold(base, (pk::get_gold(base) * gold_ratio / 100));
            pk::set_food(base, (pk::get_food(base) * food_ratio / 100));
            pk::set_troops(base, (pk::get_troops(base) * troops_ratio / 100));
            for (int i = 0; i < 병기_끝; i++)
                pk::set_weapon_amount(base, i, (pk::get_weapon_amount(base, i) * wpn_amount_ratio / 100));
        }

        /// 초기설정 : 기본적으로 내정시설은 도시를 점령한 공격부대의 세력으로 흡수됨 (파괴 가능, 타세력 흡수 설정 불가)
        // 건설 중이던 미완성 내정시설은 168 함수가 호출될 시점에 이미 파괴된 후임 (설정 불가)
        // 동작대 관련 : 파괴된 미완성 내정시설이 동작대인 경우 보물 동작은 자동 파괴됨, 완성된 동작대는 자동 흡수함
        // 세력의 최후도시를 점령하여 해당 세력을 멸망시키고 포획한 세력 군주를 처단한 경우 168 함수가 호출될 시점에 이미 모든 내정시설이 파괴된 후임 (설정 불가)
        // 적장세력 공격부대가 일반세력 도시를 점령한 경우 도시의 내정시설은 기본적으로 세력 없음으로 잔류 (파괴 가능)
        void func_점령도시_후처리_내정시설(pk::city@ city, pk::unit@ attacker, int charisma, pk::list<pk::building@> facility_list, int regionBuff)
        {
            if (!pk::is_normal_force(attacker.get_force_id())) return;

            int destroy_count = int(facility_list.count);
            if (destroy_count == 0) return;

            if (내정시설_처리모드[get_index(attacker)] == /*흡수개수 매력반영*/1)
            {
                int min_count = 내정시설_흡수개수_최소[get_index(attacker)];
                int max_count = 내정시설_흡수개수_최대[get_index(attacker)];
                int charisma_count = get_round_value(charisma * pk::min(내정시설_흡수개수_매력반영비율[get_index(attacker)], 100) / 100.f);
                destroy_count = destroy_count - pk::max(min_count, pk::min(charisma_count, max_count));
            }
            else if (내정시설_처리모드[get_index(attacker)] == /*파괴비율 직접설정*/2)
            {
                destroy_count = get_round_value(destroy_count * pk::min(내정시설_파괴비율[get_index(attacker)], 100) / 100.f);
            }

            destroy_count = (destroy_count * 100) / (100 + regionBuff);

            facility_list.shuffle();
            array<pk::building@> building_arr = pk::list_to_array(facility_list);
            for (int i = 0; i < destroy_count; i++)
            {
                pk::building@ building = building_arr[i];
                if (내정시설_처리모드[get_index(attacker)] == /*파괴확률 개별적용*/3)
                {
                    if (!pk::rand_bool(내정시설별_파괴확률[get_index(attacker)])) continue;
                }
                pk::kill(building, false);
            }
        }

        /// 초기설정 : 기본적으로 군사시설은 기존의 세력으로 잔류 (미완성 시설 포함, 본거지 포함, 파괴 가능, 타세력 흡수 설정 가능)
        // 세력의 최후도시를 점령하여 멸망시킨 경우 도시구역 내 해당 세력의 모든 군사시설이 파괴됨 (타세력 흡수 설정 가능)
        // 세력의 최후도시를 점령하여 해당 세력을 멸망시키고 포획한 세력 군주를 처단한 경우 168 함수가 호출될 시점에 이미 그 세력의 모든 군사시설이 파괴된 후임 (설정 불가)
        // 적장세력 공격부대가 도시를 점령 시 본거지는 기본적으로 파괴됨 (적장세력을 포함한 타세력 흡수 설정 불가, 세력 없음으로 잔류 가능)
        void func_점령도시_후처리_군사시설(pk::city@ city, pk::unit@ attacker, int charisma, pk::list<pk::building@> facility_list, int facility_index, int regionBuff)
        {
            if (!pk::is_normal_force(attacker.get_force_id())) return;

            if (int(facility_list.count) == 0) return;

            int absorb_count = 0, destroy_count = 0;

            if (군사시설_처리모드[facility_index][get_index(attacker)] == /*처리비율 직접설정*/2)
            {
                absorb_count = get_round_value(int(facility_list.count) * pk::min(군사시설_흡수비율[facility_index][get_index(attacker)], 100) / 100.f);
                destroy_count = get_round_value(int(facility_list.count) * pk::min(군사시설_파괴비율[facility_index][get_index(attacker)], 100) / 100.f);
            }

            absorb_count = absorb_count * (100 + regionBuff) / 100;

            facility_list.shuffle();
            array<pk::building@> building_arr = pk::list_to_array(facility_list);
            for (int i = 0; i < int(building_arr.length); i++)
            {
                pk::building@ building = building_arr[i];
                if (군사시설_처리모드[facility_index][get_index(attacker)] == /*처리확률 거리반영*/1)
                {
                    int distance = pk::get_distance(city.get_pos(), building.pos);
                    int distance1 = 군사시설_기준거리[facility_index][get_index(attacker)][/*기준거리1*/0];
                    int distance2 = 군사시설_기준거리[facility_index][get_index(attacker)][/*기준거리2*/1];
                    int absorb_chance1 = 군사시설_거리별_흡수확률[facility_index][get_index(attacker)][/*기준거리1이하*/0];
                    int absorb_chance2 = 군사시설_거리별_흡수확률[facility_index][get_index(attacker)][/*기준거리1초과2이하*/1];
                    int absorb_chance3 = 군사시설_거리별_흡수확률[facility_index][get_index(attacker)][/*기준거리2초과*/2];
                    int destroy_chance1 = 군사시설_거리별_파괴확률[facility_index][get_index(attacker)][/*기준거리1이하*/0];
                    int destroy_chance2 = 군사시설_거리별_파괴확률[facility_index][get_index(attacker)][/*기준거리1초과2이하*/1];
                    int destroy_chance3 = 군사시설_거리별_파괴확률[facility_index][get_index(attacker)][/*기준거리2초과*/2];
                    int absorb_chance = distance <= distance2 ? (distance <= distance1 ? absorb_chance1 : absorb_chance2) : absorb_chance3;
                    int destroy_chance = distance <= distance2 ? (distance <= distance1 ? destroy_chance1 : destroy_chance2) : destroy_chance3;
                    if (pk::rand_bool(absorb_chance))  absorb_building(attacker, building);
                    else if (pk::rand_bool(destroy_chance))	pk::kill(building, false);
                }
                else if (군사시설_처리모드[facility_index][get_index(attacker)] == /*처리비율 직접설정*/2)
                {
                    if (i < absorb_count)                 absorb_building(attacker, building);
                    else if (i < absorb_count + destroy_count) pk::kill(building, false);
                }
                else if (군사시설_처리모드[facility_index][get_index(attacker)] == /*처리확률 개별적용*/3)
                {
                    if (pk::rand_bool(군사시설별_흡수확률[facility_index][get_index(attacker)])) absorb_building(attacker, building);
                    else if (pk::rand_bool(군사시설별_파괴확률[facility_index][get_index(attacker)])) pk::kill(building, false);
                }
            }
        }

        void func_점령도시_후처리_적장세력_도시점령시(pk::city@ city, pk::unit@ attacker, pk::building@ building)
        {
            if (pk::is_normal_force(attacker.get_force_id())) return;

            if (pk::get_facility_type(building) == 시설종류_내정시설)
            {
                if (적장세력_도시점령시_내정시설_파괴) pk::kill(building, false);
            }
            else if (pk::get_facility_type(building) == 시설종류_군사시설)
            {
                if (building.get_force_id() == city.get_force_id())
                {
                    if (적장세력_도시점령시_군사시설_파괴_도시세력) pk::kill(building, false);
                }
                else
                {
                    if (적장세력_도시점령시_군사시설_파괴_제3세력) pk::kill(building, false);
                }
            }
        }

        /// 초기설정 : 기본적으로 함정 및 장애물은 모두 잔류 (미완성 시설 포함, 파괴 가능, 타세력 흡수 설정 불가)
        void func_점령도시_후처리_기타시설(pk::building@ building)
        {
            if (pk::get_facility_type(building) == 시설종류_함정)
            {
                if (도시점령시_기타시설_파괴_함정) pk::kill(building, false);
            }
            else if (building.facility == 시설_토루 or building.facility == 시설_석벽)
            {
                if (도시점령시_기타시설_파괴_장벽) pk::kill(building, false);
            }
        }

        ///	<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

        array<int> 도시점령_후처리_제외시설 =
        {
            시설_도시, 시설_관문, 시설_항구,			// 고정시설
            시설_본거지1, 시설_본거지2,					// 군사시설
            시설_산악, 시설_장성, 시설_유적, 시설_묘,	// 장애물
            시설_낙석, 시설_제방, 시설_얕은여,			// 함정
            시설_동작대									// 내정시설
        };

        bool is_target_facility(pk::city@ city, pk::unit@ attacker, pk::building@ building)
        {
            if (pk::get_city_id(building.pos) != city.get_id()) return false;
            if (building.get_force_id() == attacker.get_force_id()) return false;
            if (도시점령_후처리_제외시설.find(building.facility) >= 0) return false;

            return true;
        }

        int get_index(pk::unit@ unit) { return (unit.is_player() ? /*플레이어*/0 : /*컴퓨터*/1); }

        /// round 연산자를 직접 사용하는 것은 불가능한 것으로 보임
        // 소수를 반올림한 정수값 반환용 함수
        int get_round_value(float float_value)
        {
            return (float_value - int(float_value) < (float_value >= 0 ? 0.5f : -0.5f)) ? int(float_value) : int(float_value) + 1;
        }

        void absorb_building(pk::unit@ unit, pk::building@ building)
        {
            pk::set_district(building, pk::get_district(unit.get_district_id()), /*점령*/0);
        }

        void func_디버깅(pk::unit@ attacker, pk::force@ attacker_force, pk::person@ attacker_leader, pk::building@ base, pk::force@ base_force)
        {
            if (!디버깅) return;

            string attacker_force_name = (pk::is_alive(attacker_force)) ? "\x1b[1x" + pk::decode(pk::get_name(attacker_force)) + "\x1b[0x" : "없음";
            string attacker_name = "\x1b[1x" + pk::decode(pk::get_name(attacker)) + "\x1b[0x";
            string attacker_leader_name = (pk::is_alive(attacker_leader)) ? "\x1b[1x" + pk::decode(pk::get_name(attacker_leader)) + "\x1b[0x" : "없음";
            string base_force_name = (pk::is_alive(base_force)) ? "\x1b[1x" + pk::decode(pk::get_name(base_force)) + "\x1b[0x" : "없음";
            string base_name = "\x1b[1x" + pk::decode(pk::get_name(base)) + "\x1b[0x";

            string title = "'168 함수 실행\n(168 거점 점령 후처리.cpp 파일)";
            string attacker_info = "공격 부대 :\n세력(" + attacker_force_name + "), 부대(" + attacker_name + "), 주장(" + attacker_leader_name + ")";
            string base_info = "점령한 거점 :\n세력(" + base_force_name + "), 거점(" + base_name + ")";

            pk::message_box(pk::encode(title));
            pk::message_box(pk::encode(attacker_info));
            pk::message_box(pk::encode(base_info));
        }
    
        
        // ===========================================================================================================================================

        // =============================================== 205 계략 소비 기력 =========================================================================

        bool 특기백출_반감적용 = true;   // true = 반감,   false = 무조건 1소비
        bool 계략소비_특기우대 = true;   // 보유 특기에 따라 계략별 우대 적용
        bool 계략소비_병력효과 = true;   // 부대 병력에 따라 소비기력이 가변

        int 특기정묘_기력감소량 = 3;
        int 특기비책_기력감소량 = 5;

        int func205(pk::unit@ src, int strategy_id)
        {
            /* 원본 기력 소모량 (백출)
            if (src.has_skill(특기_백출))
                return 1;
            */

            pk::force@ force = pk::get_force(src.get_force_id());

            // 특기 소비 기력
            int n = 0;
            switch (strategy_id)
            {
            case 계략_화계:
                n = 10;
                break;
            case 계략_소화:
                n = 10;
                break;
            case 계략_위보:
                n = 15;
                break;
            case 계략_교란:
                n = 15;
                break;
            case 계략_진정:
                n = 10;
                break;
            case 계략_복병:
                n = 10;
                break;
            case 계략_동토:
                n = 15; // 원본 기력 소모량 (20)
                break;
            case 계략_요술:
                n = 30; // 원본 기력 소모량 (50) 
                break;
            case 계략_낙뢰:
                n = 40; // 원본 기력 소모량 (50) 
                break;
            }

            //---------------------------------------------------------------------------------------
            //기력 소모량 감소 효과 ('18.10.4)

            if (src.has_skill(특기_백출))
            {
                if (!특기백출_반감적용)
                    return 1;
                else
                    n /= 2; // 기력 소모량 절반 감소
            }

            // 회남 지역이점. 계략소비 경감
            ExecuteHuaiNan(force, n);

            if (계략소비_특기우대)
            {
                if (src.has_skill(특기_정묘))
                    n = n - 특기정묘_기력감소량; // 기력 소모량 감소 (-3)

                if (src.has_skill(특기_비책))
                    n = n - 특기비책_기력감소량; // 기력 소모량 감소 (-5)

                if ((src.has_skill(특기_화공) or src.has_skill(특기_화신)) and ((strategy_id == 계략_화계) or (strategy_id == 계략_소화)))
                    n /= 2; // 화계 특기자 화계 기력 소모량 절반 감소

                if ((src.has_skill(특기_매복)) and (strategy_id == 계략_복병))
                    n /= 2; // 매복 특기자 복병 기력 소모량 절반 감소

                if ((src.has_skill(특기_언독)) and (strategy_id == 계략_위보))
                    n /= 2; // 언독 특기자 위보 기력 소모량 절반 감소

                if ((src.has_skill(특기_궤계)) and (strategy_id == 계략_동토))
                    n /= 2; // 궤계 특기자 동토 기력 소모량 절반 감소

                if ((src.has_skill(특기_기략)) and (strategy_id == 계략_교란))
                    n /= 2; // 기략 특기자 교란 기력 소모량 절반 감소

                if ((src.has_skill(특기_규율) or src.has_skill(특기_침착) or src.has_skill(특기_명경)) and (strategy_id == 계략_진정))
                    n /= 2; // 규율,침착,명경 특기자 진정 기력 소모량 절반 감소
            }

            //---------------------------------------------------------------------------------------
            //병력수에 따른 기력 소모량 차등 - 소부대 기력 소모 증가, 대부대 기력 소모 감소 ('18.10.11)
            if (계략소비_병력효과)
            {
                if (src.troops <= 2000)
                    n = int(n * pk::min(10.f, 2000.f / pk::max(1, src.troops)));         // 최대 10배 소모
                else if (src.troops >= 10000)
                    n = int(n * pk::max(0.5f, (2 - src.troops / 10000.f)));    // 최소 50% 소모
            }

            return n;
        }
        // ================================================== 계략 소비 기력 끝 ========================================================================


        // ================================================ 211 건물의 공격 데미지 =====================================================================

        // 유저 설정 (true = on, false = off)
        bool 사기효과설정 = true;   // 기력에 비례하여 데미지 증감 보정 효과
        bool 기력증감설정 = true;   // 교전 시 데미지에 따라 공격부대 기력증가, 피격부대 기력감소
        bool 거점능력합산 = true;   // true: 거점 내 무장들의 능력치 합산 기능 적용, false: 기존처럼 태수 능력만 적용

        float 대미지조절 = 0.8f;   // 전체적인 대미지량을 비율로 조절

        void func211(pk::damage_info& info, pk::building@ attacker, pk::hex_object@ target)
        {
            pk::force@ force = pk::get_force(attacker.get_force_id());

            // 사용하지 않음
            if (target.is_instance(pk::building::type_id))
                pk::assert(false);

            int facility_id = attacker.facility;
            pk::unit@ target_unit = pk::hex_object_to_unit(target);
            int troops_atk = 0, atk = 0, def = 0, troops = 0;

            switch (facility_id)
            {
            case 시설_도시:
            case 시설_관문:
            case 시설_항구:
                func_5af0e0(troops_atk, atk, def, troops, attacker);
                info.troops_damage = int(func_5aee60(atk, troops, troops_atk, 0, target_unit.attr.stat[부대능력_방어], func_5aee10(target_unit)) * 0.8f);
                if (pk::equipment_id_to_heishu(target_unit.weapon) == 병종_병기)
                    info.troops_damage = int(info.troops_damage * 0.8f);
                break;

            case 시설_진:
            case 시설_요새:
            case 시설_성채:
            case 시설_궁노:
            case 시설_연노로:
            case 시설_투석대:
                info.troops_damage = func_5af370(attacker, target_unit);
                if (pk::equipment_id_to_heishu(target_unit.weapon) == 병종_병기 and attacker.facility != 시설_투석대)
                    info.troops_damage = int(info.troops_damage * 0.8f);
                break;

            default:
                // 시설.자동공격 대미지
                info.troops_damage = func_5af370(attacker, target_unit);
                if (pk::equipment_id_to_heishu(target_unit.weapon) == 병종_병기)
                    info.troops_damage = int(info.troops_damage * 0.8f);
                break;
            }

            if (attacker.is_player())
                info.troops_damage = int(info.troops_damage * float(pk::core["대미지패널티"][pk::get_scenario().difficulty]));

            // 방어강화 기교 연구 시 성, 관문, 항구, 진, 요새, 성채의 공격력 2배
            if (attacker.has_tech(기교_방어강화) and attacker.facility >= 시설_도시 and attacker.facility <= 시설_성채)
                info.troops_damage *= 2;

            // 서주 지역이점 획득 시 성, 관문, 항구의 공격력 20% 상승
            if (attacker.facility >= 시설_도시 && attacker.facility <= 시설_항구)
            {
                ExecuteXuZhouDamage(force, info);
            }

            if (!pk::is_campaign())
            {
                // 건물→부대 시 상호 기력 조건 반영됨 ('18.10.7)
                if (사기효과설정)
                {
                    // 공격부대 기력에 따라 피격대상 피해 85% ~ 115% 적용 : 부대 사기 효과 ('18.10.7)
                    info.troops_damage = int(info.troops_damage * (0.85f + 0.30f * (attacker.energy / 120.f)));
                    // 피격대상 기력에 따라 피격대상 피해 85% ~ 115% 적용 : 부대 사기 효과 ('18.10.7)
                    info.troops_damage = int(info.troops_damage * (0.85f + 0.30f * ((120 - target_unit.energy) / 120.f)));
                }

                // 전체적인 기본 대미지량 오류 수정 ('18.12.15)
                info.troops_damage = int(info.troops_damage * 대미지조절);

                // 병력 피해량에 따라 피격대상 기력감소, 공격측 기력상승 효과 발생 ('18.10.7) 
                if (기력증감설정)
                {
                    int energy_heal = int(info.troops_damage / 200);
                    //pk::add_energy(attacker, +energy_heal, true );   // 밸런스 테스트 필요

                    if (info.troops_damage >= 300)
                        info.energy_damage = int((info.troops_damage - 300) / 100);
                }
            }

            info.src_pos = attacker.get_pos();
            info.dst_pos = target.get_pos();


        }

        /**
            지휘 가능한 병력 수
        */
        int func_5aee10(pk::unit@ unit)
        {
            pk::person@ leader = pk::get_person(unit.leader);
            if (pk::is_alive(leader))
                return pk::min(pk::get_command(leader), unit.troops);
            return unit.troops;
        }

        /** 부대/거점 병력 피해 계산 **/
        float func_5aee60(int src_atk, int src_troops, int tactics_atk, int buffed, int dst_def, int dst_troops)
        {
            float n = 0;
            int a = 0;
            int b = 0;
            int c = 0;

            a = pk::max(src_atk, 40);
            a = a * a;

            b = pk::max(dst_def, 40);
            b = b * b;

            //n = pk::sqrt(tactics_atk * 64);
            n = sqrt(tactics_atk * 64);
            n = n + pk::max((src_troops - dst_troops) / 2000, 0);
            n = n + pk::max((a - b) / 300, 0);
            n = n + 50;
            n = n * (buffed + 10);

            a = (src_troops / 100 + 300) * (src_atk + 50) * (src_atk + 50) / 100;
            b = (dst_troops / 100 + 300) * (dst_def + 50) * (dst_def + 50) / 100;
            c = a + b;
            if (a >= b)
                c = a * 100 / c;
            else
                c = pk::max(100 - (b * 100 / c), 1);
            n = n * c;

            a = pk::max(src_troops / 4, 1);
            n = n * pk::min(sqrt(a), 40.f);

            n = n / 2100;
            n = n + src_troops / 200;

            return n;
        }

        /** 태수와 무장들에 의한 방어거점 전투능력 **/
        void func_5af0e0(int& out src_atk, int& out dst_atk, int& out dst_def, int& out dst_troops, pk::building@ building)
        {
            src_atk = 10;
            pk::person@ taishu = pk::get_person(pk::get_taishu_id(building));
            if (pk::is_alive(taishu))
            {
                //태수 능력 반영 (기본)
                dst_atk = pk::max(taishu.stat[무장능력_무력] - 25, 40);
                dst_def = pk::max(taishu.stat[무장능력_통솔] - 25, 40);
                dst_troops = pk::min(pk::get_troops(building), pk::get_command(taishu));

                //도시 내 "신분_일반" 인 무장 능력 반영 (각 무장의 무력, 통솔, 지휘 부분 합산) ('18.10.7)
                if (거점능력합산)
                {
                    float ilban_help = 5;    // 태수 외 무장 능력 치 합산 보조율 : 무장별 5%
                    auto ilban_list = pk::list_to_array(pk::get_person_list(building, pk::mibun_flags(신분_일반)));
                    if (0 < int(ilban_list.length))
                    {
                        for (int i = 0; i < int(ilban_list.length); i++)
                        {
                            pk::person@ ilban = ilban_list[i];
                            //출진 또는 부재중 상태가 아닌 장수이며, 태수와 혐오 관계가 아닌 장수만 능력 치 합산
                            if (!pk::is_unitize(ilban) and !pk::is_absent(ilban) and !pk::is_dislike(taishu, ilban.get_id()) and !pk::is_dislike(ilban, taishu.get_id()))
                            {
                                dst_atk += int((pk::max(ilban.stat[무장능력_무력] - 25, 20)) * (ilban_help / 100.f));
                                dst_def += int((pk::max(ilban.stat[무장능력_통솔] - 25, 20)) * (ilban_help / 100.f));
                                dst_troops += int((pk::min(pk::get_troops(building), pk::get_command(ilban))) * (ilban_help / 100.f));
                            }
                        }
                    }
                }
            }
            else
            {
                dst_atk = 30;
                dst_def = 30;
                //dst_troops = pk::min(pk::get_troops(building), 7000);
                dst_troops = pk::min(pk::get_troops(building), 5000);  // 지휘병력 상한치 하향
                if (dst_troops != 0)
                    dst_troops = pk::max(dst_troops, 500);
            }
        }

        /**
            군사시설의 공격력 계산
        */
        int func_5af370(pk::building@ attacker, pk::unit@ target)
        {
            int atk = 0;
            int bonus = 0;

            switch (attacker.facility)
            {
            case 시설_도시:     // 개방형 거점 : 약한 수준으로 적용 ('18.10.14)
                atk = 200;
                bonus = 200;
                break;
            case 시설_관문:     // 폐쇄형 거점 : 강한 수준으로 적용 ('18.10.14)
                atk = 400;
                bonus = 400;
                break;
            case 시설_항구:     // 개방형 거점 : 약한 수준으로 적용 ('18.10.14)
                atk = 200;
                bonus = 200;
                break;
            case 시설_진:
                atk = 400;
                bonus = 300;
                break;
            case 시설_요새:
                atk = 600;
                bonus = 300;
                break;
            case 시설_성채:
                atk = 800;
                bonus = 300;
                break;
            case 시설_궁노:
                atk = 300;
                bonus = 300;
                break;
            case 시설_연노로:
                atk = 500;
                bonus = 400;
                break;
            case 시설_투석대:
                atk = 900;
                bonus = 600;
                break;
            default:
                // 기타시설.자동공격 대미지
                atk = 300;
                bonus = 300;
                break;
            }

            float max_hp = pk::max(pk::get_max_hp(attacker), 1);
            float hp = pk::max(attacker.hp, max_hp / 2);

            return int(hp / max_hp * (152 - int(target.attr.stat[부대능력_방어])) * atk / 132 + pk::rand(bonus));
        }
        // ================================================ 건물의 공격 데미지 끝 ======================================================================


        // ======================================================== 111 등용 확률 =====================================================================

        bool func111(pk::person@ target, pk::person@ actor, int type, int seed)
        {
            if (!pk::is_alive(target) or !pk::is_alive(actor)) return false;

            // 실행 무장의 군주가 없다면 항상 실패
            pk::person@ actor_kunshu = pk::get_person(pk::get_kunshu_id(actor));
            if (!pk::is_alive(actor_kunshu)) return false;

            // 특별한 관계가 있는지 확인
            pk::bool_bool tuple = func_4b0040(target, actor, type);
            if (tuple.first) return tuple.second;

            int giri = 10;
            if (type != 0) giri = pk::min(15 - target.giri * 2, 10);
            int n = pk::min(func_5c6030(target, actor, type, seed) * giri / 10, 100);

            // 포로처우인 경우
            if (type != 0)
            {
                return pk::rand_bool(n);
            }

            return n > pk::rand(100, seed, target.get_id(), actor.get_id(), target.loyalty, actor.stat[무장능력_매력], pk::get_aishou_distance(actor, target.get_id()), 0);
        }

        /**
            목표 무장과 실행 무장 사이에 특별한 관계가 있는지 판단합니다.
            @return 특별한 관계 여부, 등용 성공 여부
        */
        pk::bool_bool func_4b0040(pk::person@ target, pk::person@ actor, int type)
        {
            int target_force_id = target.get_force_id();
            // 귀환 가능함을 나타냄
            bool is_valid_target_force_id = pk::is_valid_force_id(target_force_id);

            // 목표 무장의 세력이 멸망
            if (type == 2) is_valid_target_force_id = false;

            if (!pk::is_alive(target) or !pk::is_alive(actor)) return pk::bool_bool(true, false);

            int actor_kunshu_id = pk::get_kunshu_id(actor);
            pk::person@ actor_kunshu = pk::get_person(actor_kunshu_id);

            // 실행 무장의 세력에 군주가 없는 경우 항상 실패
            if (!pk::is_alive(actor_kunshu)) return pk::bool_bool(true, false);

            // 목표 무장의 사관 금지 군주가 실행 무장의 군주인 경우 항상 실패
            if (target.banned_kunshu == actor_kunshu_id) return pk::bool_bool(true, false);

            // 목표 무장이 군주인 경우 항상 실패
            if (target.mibun == 신분_군주 and is_valid_target_force_id) return pk::bool_bool(true, false);

            pk::person@ target_gikyoudai = pk::get_person(target.gikyoudai);

            // 목표 무장이 의형제 있음(2인)
            if (pk::is_alive(target_gikyoudai) and @target_gikyoudai != @target)
            {
                // 목표 무장이 의형제와 같은 세력인 경우 항상 실패
                if (is_valid_target_force_id and pk::is_valid_force_id(target_force_id) and target_gikyoudai.get_force_id() == target_force_id) return pk::bool_bool(true, false);
                /*
                                // 목표 무장이 실행 무장 세력의 군주나 실행 무장과 의형제인 경우 항상 성공
                                if (@target_gikyoudai == @actor_kunshu or @target_gikyoudai == @actor) return pk::bool_bool(true, true);
                */
            }

            pk::person@ target_spouse = pk::get_person(target.spouse);

            // 목표 무장이 배우자와 같은 세력인 경우 항상 실패
            if (pk::is_alive(target_spouse))
            {
                if (is_valid_target_force_id and pk::is_valid_force_id(target_force_id) and target_spouse.get_force_id() == target_force_id)
                    return pk::bool_bool(true, false);
            }

            pk::list<pk::person@> target_gikyoudai_list = pk::get_gikyoudai_list(target);

            // 목표 무장이 의형제와 같은 세력인 경우 항상 실패
            if (is_valid_target_force_id and pk::is_alive(target_gikyoudai) and pk::is_valid_force_id(target_force_id))
            {
                for (int i = 0; i < target_gikyoudai_list.size; i++)
                {
                    if (target_gikyoudai_list[i].get_force_id() == target_force_id)
                        return pk::bool_bool(true, false);
                }
            }

            // 목표 무장의 의형제가 다른 세력에 소속되어 있다면 항상 실패
            /*
            if (pk::is_alive(target_gikyoudai) and @target_gikyoudai != @target)
            {
                int gikyoudai_force_id = target_gikyoudai.get_force_id();
                if (is_valid_target_force_id or target_force_id != gikyoudai_force_id)
                {
                    if (pk::is_valid_force_id(gikyoudai_force_id) and actor_kunshu.get_force_id() != gikyoudai_force_id)
                        return pk::bool_bool(true, false);
                }
            }
            */

            // 목표 무장의 배우자가 다른 세력에 소속되어 있다면 항상 실패
            /*
            if (pk::is_alive(target_spouse))
            {
                int spouse_force_id = target_spouse.get_force_id();
                if (is_valid_target_force_id or target_force_id != spouse_force_id)
                {
                    if (pk::is_valid_force_id(spouse_force_id) and actor_kunshu.get_force_id() != spouse_force_id)
                        return pk::bool_bool(true, false);
                }
            }
            */

            // 목표 무장의 배우자가 실행 무장이거나 실행 무장의 군주인 경우 항상 성공
            /*
            if (pk::is_alive(target_spouse))
            {
                if (@target_spouse == @actor_kunshu or @target_spouse == @actor)
                    return pk::bool_bool(true, true);
            }
            */

            // 목표 무장이 실행 무장의 군주를 혐오하는 경우 항상 실패
            if (pk::is_dislike(target, actor_kunshu_id)) return pk::bool_bool(true, false);

            int actor_id = actor.get_id();

            // 목표 무장이 실행 무장을 혐오하는 경우 항상 실패
            if (pk::is_dislike(target, actor_id)) return pk::bool_bool(true, false);

            int actor_force_id = actor.get_force_id();
            int target_kunshu_id = pk::get_kunshu_id(target);

            if (type == 0) //일반적인 등용
            {
                // 목표 무장이 재야이면서 실행 무장과 의형제나 부부이거나, 실행 무장의 군주와 의형제나 부부인경우 항상 성공
                if (pk::is_gikyoudai(target, actor_id) or pk::is_gikyoudai(target, actor_kunshu_id) or pk::is_fuufu(target, actor_id) or pk::is_fuufu(target, actor_kunshu_id))
                {
                    if (target.mibun == 신분_재야)
                        return pk::bool_bool(true, true);
                }

                // 목표 무장의 충성도, 의리x4의 합이 92 이상인 경우 항상 실패
                if (target.loyalty + target.giri * 4 >= 92) return pk::bool_bool(true, false);

                // 목표 무장의 의형제가 실행 무장의 세력에 소속되어 있다면 항상 성공
                /*
                if (pk::is_alive(target_gikyoudai) and target_gikyoudai.get_force_id() == actor_force_id) return pk::bool_bool(true, true);
                */

                // 목표 무장의 배우자가 실행 무장의 세력에 소속되어 있다면 항상 성공
                /*
                if (pk::is_alive(target_spouse) and target_spouse.get_force_id() == actor_force_id) return pk::bool_bool(true, true);
                */
                // 목표 무장이 목표 무장의 군주를 친애한다면 항상 실패
                if (target.mibun != 신분_군주 and pk::is_valid_person_id(target_kunshu_id) and pk::is_like(target, target_kunshu_id)) return pk::bool_bool(true, false);

                // 목표 무장이 실행 무장이나 실행 무장의 군주를 친애한다면 항상 성공
                if (pk::is_like(target, actor_id) or pk::is_like(target, actor_kunshu_id)) return pk::bool_bool(true, true);
            }
            else //포로에 대한 등용
            {
                /*
                // 목표 무장의 의형제가 실행 무장의 세력에 소속되어 있다면 항상 성공
                for (int i = 0; i < target_gikyoudai_list.size; i++)
                {
                    if (target_gikyoudai_list[i].get_force_id() == actor_force_id)
                    return pk::bool_bool(true, true);
                }
                */
                // 목표 무장의 배우자가 실행 무장의 세력에 소속되어 있다면 항상 성공
                if (pk::is_alive(target_spouse) and target_spouse.get_force_id() == actor_force_id) return pk::bool_bool(true, true);

                // 목표 무장이 목표 무장의 군주를 친애한다면 항상 실패
                if (is_valid_target_force_id and target.mibun != 신분_군주 and pk::is_valid_person_id(target_kunshu_id) and pk::is_like(target, target_kunshu_id)) return pk::bool_bool(true, false);

                // 목표 무장이 실행 무장의 군주를 친애한다면 항상 성공
                if (pk::is_like(target, actor_kunshu_id)) return pk::bool_bool(true, true);
            }

            return pk::bool_bool(false, false);
        }

        /***/
        int func_5c6030(pk::person@ target, pk::person@ actor, int type, int seed)
        {
            if (!pk::is_alive(target) or !pk::is_alive(actor)) return 0;

            pk::force@ force = pk::get_force(actor.get_force_id());
            int loyalty = target.loyalty;
            int aishou = 25;
            int giri = target.giri;
            int target_kunshu_id = pk::get_kunshu_id(target);
            int actor_kunshu_id = pk::get_kunshu_id(actor);
            int n = 0;

            if (type == 2)
                loyalty = pk::min(loyalty, 70);

            // 목표 무장이 재야이거나 멸망한 세력의 포로인 경우
            if (target.mibun == 신분_재야 or (target.mibun == 신분_포로 and !pk::is_valid_force_id(target.get_force_id())))
                loyalty = pk::get_scenario().difficulty == 난이도_초급 ? 50 : 60;

            if (pk::is_valid_person_id(target_kunshu_id))
                aishou = pk::get_aishou_distance(target, target_kunshu_id);

            if (target.mibun == 신분_재야)
                giri = 의리_보통;

            n = (aishou - pk::get_aishou_distance(target, actor_kunshu_id)) / 5;
            n -= (giri + 18) * loyalty * 5 / 100;
            n += pk::max(actor.stat[무장능력_매력], 30) * 3 / 5;
            n -= pk::is_like(target, target_kunshu_id) ? 15 : 0;
            n -= pk::is_oyako(target, target_kunshu_id) ? 15 : 0;
            n += pk::is_dislike(target, target_kunshu_id) ? 15 : 0;
            n += pk::rand(의리_끝 - giri, actor.get_id(), target.get_id(), actor.stat[무장능력_매력], seed, actor_kunshu_id, 0, 0);
            n += target.mibun == 신분_포로 ? 5 : 0;
            n += 45;

            if (pk::has_skill(actor, 특기_안력) and target.mibun == 신분_재야)
                n += 15;

            // 형북 지역이점. 등용확률 상승
            if (target.mibun == 신분_포로 || target.mibun == 신분_재야)
            {
                ExecuteJingBeiMoo(force, n);
            }

            return pk::max(n, 0);
        }

        // ======================================================== 등용 확률 끝 =====================================================================

        // ======================================================== 220 포로 확률 ====================================================================

        void func220(const pk::destroy_info& in info, pk::list<pk::person@>& captured, pk::list<pk::person@>& escaped, bool tactics_bonus)
        {
            pk::hex_object@ attacker = info.attacker;
            pk::hex_object@ target = info.target;

            int attacker_force_id = attacker.get_force_id();
            int target_force_id = target.get_force_id();
            pk::building@ attacker_building = attacker.get_type_id() == pk::building::type_id ? attacker : null;
            pk::unit@ attacker_unit = attacker.get_type_id() == pk::unit::type_id ? attacker : null;
            pk::building@ target_building = target.get_type_id() == pk::building::type_id ? target : null;
            pk::unit@ target_unit = target.get_type_id() == pk::unit::type_id ? target : null;
            int target_border_radius = pk::is_alive(target_building) and target_building.facility == 시설_도시 ? 2 : 1;
            pk::point attacker_pos = attacker.get_pos();
            pk::point target_pos = target.get_pos();
            bool in_border = pk::is_in_range(target_pos, target_border_radius, attacker_pos);
            bool cant_capture = !pk::is_valid_normal_force_id(attacker_force_id) or !pk::is_valid_normal_force_id(target_force_id);
            bool penalty = pk::get_scenario().difficulty == 난이도_특급 and attacker.is_player() and not target.is_player();
            bool has_hobaku_skill = false;
            int hobaku_chance = 0;
            pk::list<pk::person@> prisoner_list;

            // 공격 오브젝트의 포박 특기 보유 확인
            if (pk::is_alive(attacker_unit))
            {
                if (!pk::is_alive(target_building))
                {
                    has_hobaku_skill = in_border and attacker_unit.has_skill(특기_포박);
                    hobaku_chance = int(pk::core::skill_constant(attacker_unit, 특기_포박));
                }
            }
            else if (pk::is_alive(attacker_building))
            {
                int building_id = attacker_building.get_id();
                int hex_object_id = pk::building_id_to_hex_object_id(building_id);
                pk::list<pk::person@> list = pk::get_person_list(hex_object_id, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));
                pk::filter_list(list, 무장속성_세력, attacker_force_id, COMPARE_EQ);

                if (list.size == 0)
                    cant_capture = true;

                if (in_border)
                {
                    for (int i = 0; i < list.size; i++)
                    {
                        if (pk::has_skill(list[i], 특기_포박))
                        {
                            has_hobaku_skill = true;
                            hobaku_chance = pk::max(hobaku_chance, int(pk::core::skill_constant(list[i].get_id(), 특기_포박)));
                        }
                    }
                }
            }

            // 목표 오브젝트 무장 확인
            if (pk::is_alive(target_unit))
            {
                for (int i = 0; i < 3; i++)
                {
                    pk::person@ member = pk::get_person(target_unit.member[i]);
                    if (pk::is_alive(member))
                        prisoner_list.push_back(member);
                }
            }
            else if (pk::is_alive(target_building))
            {
                int building_id = target_building.get_id();
                int hex_object_id = pk::building_id_to_hex_object_id(building_id);
                prisoner_list = pk::get_person_list(hex_object_id, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));
                pk::filter_list(prisoner_list, 무장속성_세력, target_force_id, COMPARE_EQ);
            }

            int bordered_unit_count = 0;
            int terrain_id = -1;

            if (pk::is_valid_pos(target_pos))
            {
                array<pk::point>@ range = pk::range(target_pos, 0, target_border_radius);
                for (int i = 0; i < range.length; i++)
                {
                    pk::unit@ unit = pk::get_unit(range[i]);
                    if (pk::is_alive(unit) and unit.get_force_id() == attacker_force_id)
                        bordered_unit_count++;
                }
                terrain_id = pk::get_hex(target_pos).terrain;
            }

            //세력이 멸망할 경우 해당 세력 무장들의 공적 감소 (최저 6000)
            if (not info.releasable)
            {
                for (int i = 0; i < 무장_끝; i++)
                {
                    pk::person@ person_ = pk::get_person(i);
                    if (!pk::is_alive(person_))
                        continue;

                    if (person_.mibun == 신분_재야 or person_.mibun == 신분_미등장 or person_.mibun == 신분_미발견)
                        continue;

                    if (person_.get_force_id() != target_force_id)
                        continue;

                    if (person_.kouseki <= 10000 and person_.kouseki >= 6000)
                    {
                        person_.kouseki = 6000;
                    }
                    else if (person_.kouseki > 10000)
                    {
                        int koseki = person_.kouseki;
                        koseki *= 0.6f;

                        person_.kouseki = koseki;
                    }
                }
            }

            for (int i = 0; i < prisoner_list.size; i++)
            {
                pk::person@ person = prisoner_list[i];
                int n = 0;

                if (cant_capture)
                {
                    escaped.push_back(person);
                    continue;
                }

                /* 세력이 멸망할 경우 마지막 거점의 모든 무장을 포획 (비활성화)
                if (not info.releasable)
                {
                    captured.push_back(person);
                    continue;
                }
                */

                //세력이 멸망하지 않고 아이템 명마 또는 특기 강운을 보유할 경우 무조건 탈출
                if (info.releasable and pk::has_item(person, 보물종류_명마) or pk::has_skill(person, 특기_강운))
                {
                    escaped.push_back(person);
                    continue;
                }

                n += int(pk::core["무장.최대능력치"]) + 20 - pk::max(person.stat[무장능력_무력], person.stat[무장능력_지력]);
                n /= 3;
                if (bordered_unit_count > 1) //포위 부대가 두 개 이상인 경우 확률 증가 (pk 원본에 비해 감소)
                    n *= 100 + 40 * (pk::has_skill(person, 특기_철벽) ? 0 : bordered_unit_count);
                else if (bordered_unit_count == 1)
                    n *= 100;

                if (terrain_id == 지형_습지 or terrain_id == 지형_독천)
                    n *= 1.5f;
                n /= 100;
                if (tactics_bonus)
                {
                    n += 30;
                }
                else
                {
                    int skillLevel = 0;
                    pk::force@ attackerForce = pk::get_force(attacker_force_id);
                    pk::force@ targetForce = pk::get_force(target_force_id);


                    if (attacker_unit != null)
                    {
                        // 산월 지역이점. 공격자가 극병 평타
                        skillLevel = GetRelationLevel(attackerForce, 우호_산월);
                        if (병기_극 == pk::get_weapon_id(attacker_unit) && skillLevel >= 3)
                        {
                            n += 산월_3단계_포박상승;
                        }

                        // 오환 지역이점. 공격자가 기병부대
                        skillLevel = GetRelationLevel(attackerForce, 우호_오환);

                        if (병기_군마 == pk::get_weapon_id(attacker_unit) && skillLevel >= 3)
                        {
                            n += 오환_3단계_포박상승;
                        }
                    }
                   
                    // 강 지역이점. 피격자가 기병부대
                    if (target_unit != null)
                    {
                        skillLevel = GetRelationLevel(targetForce, 우호_강);
                        if (병기_군마 == pk::get_weapon_id(target_unit) && skillLevel >= 3)
                        {
                            n = (n * (100 - 강_3단계_퇴각상승)) / 100;
                        }
                    }
                }
                n /= penalty ? 2 : 1;
                n += has_hobaku_skill ? hobaku_chance : 0;

                if (person.mibun == 신분_군주)
                    n -= 7;

                n -= 3;

                if (pk::rand_bool(n))
                    captured.push_back(person);
                else
                {
                    if (info.releasable) //세력이 아직 멸망하지 않았으면 그냥 탈출
                    {
                        escaped.push_back(person);
                    }
                    else //세력이 멸명할 경우 탈출한 무장들은 의리, 인간관계, 상성에 따라 확률적으로 멸망시킨 세력에 대한 사관금지기간 설정
                    {
                        int kunshu_id = pk::get_kunshu_id(attacker);
                        int target_kunshu = pk::get_kunshu_id(target);
                        pk::force@ force_ = pk::get_force(attacker.get_force_id());
                        pk::person@ target_gikyoudai = pk::get_person(person.gikyoudai);
                        pk::person@ target_spouse = pk::get_person(person.spouse);
                        pk::person@ kunshu_ = pk::get_person(kunshu_id);
                        pk::person@ emperor = pk::get_person(pk::get_scenario().emperor);
                        int sagwan = 2 + pk::rand(4);

                        if (pk::is_alive(target_gikyoudai) and target_gikyoudai.get_force_id() == attacker_force_id) //의형제가 멸망시킨 세력내에 있으면 사관금지기간 없음
                        {
                            sagwan = 0;
                        }
                        else if (pk::is_alive(target_spouse) and target_spouse.get_force_id() == attacker_force_id) //배우자가 멸망시킨 세력내에 있으면 사관금지기간 없음
                        {
                            sagwan = 0;
                        }
                        else if (pk::is_like(person, kunshu_id)) //멸망시킨 세력의 군주를 친애하면 사관금지기간 없음
                        {
                            sagwan = 0;
                        }
                        else if (pk::is_ketsuen(person, kunshu_id)) //멸망시킨 세력의 군주와 혈연 관계면 사관금지기간 없음
                        {
                            sagwan = 0;
                        }
                        else if (!pk::is_normal_force(force_)) //멸망시킨 세력이 일반적인 세력이 아닐경우 사관금지기간 없음
                        {
                            sagwan = 0;
                        }
                        else
                        {
                            switch (person.giri) //의리에 따라 사관금지기간 증감
                            {
                            case 의리_매우낮음: sagwan -= 4; break;
                            case 의리_낮음: sagwan -= 2; break;
                            case 의리_보통: sagwan += 1; break;
                            case 의리_높음: sagwan += 2; break;
                            case 의리_매우높음: sagwan += 4; break;
                            }

                            if (person.ambition >= 야망_높음) //야망이 높으면 사관금지기간 소폭 증가
                                sagwan += 1;

                            if (person.mibun == 신분_군주) //군주일 경우 사관금지기간 증가
                                sagwan += 3;
                            else if (pk::is_alive(target_gikyoudai) and target_gikyoudai.get_id() == target_kunshu) //의형제가 군주였을 경우 사관금지기간 증가
                                sagwan += 3;
                            else if (pk::is_alive(target_spouse) and target_spouse.get_id() == target_kunshu) //배우자가 군주였을 경우 사관금지기간 증가
                                sagwan += 3;
                            else if (pk::is_ketsuen(person, target_kunshu)) //혈연이 군주였을 경우 사관금지기간 증가
                                sagwan += 3;
                            else if (pk::is_like(person, target_kunshu)) //멸망시킨 세력의 군주를 친애하면 사관금지기간 증가
                                sagwan += 3;

                            if (pk::is_valid_person_id(target_kunshu) and pk::get_aishou_distance(person, target_kunshu) <= 10) //원래 군주와의 상성차가 적으면 사관금지기간 증가
                                sagwan += 2;
                            else if (pk::is_valid_person_id(target_kunshu) and pk::get_aishou_distance(person, target_kunshu) <= 30)
                                sagwan += 1;

                            if (person.kouseki >= 20000) //공적이 높으면 사관금지기간 증가 (위의 멸망시 공적감소를 적용받고난 기준으로 적용됨에 주의)
                                sagwan += 2;
                            else if (person.kouseki >= 12000)
                                sagwan += 1;

                            if (force_.kokugou == 국호_황건 or force_.kokugou == 국호_성) //멸망시킨 세력이 황건이나 원술의 제국(성)일 때 한실중시 무장일 경우 사관금지기간 증가
                            {
                                if (person.kanshitsu == 한실_중시)
                                    sagwan += 3;
                            }
                            else if (emperor !is null and kunshu_.kanshitsu == 한실_무시 and person.kanshitsu == 한실_중시) //한제가 존재할 때 멸망시킨 세력의 군주가 한실무시고 한실중시 무장일 경우 사관금지기간 증가
                                sagwan += 2;

                            if (person.get_id() == 무장_장각 or person.get_id() == 무장_장보 or person.get_id() == 무장_장량) //황건적의 수괴일 경우 한실중시 군주에 대한 사관금지기간 대폭 증가
                            {
                                if (kunshu_.kanshitsu == 한실_중시)
                                    sagwan += 5;
                            }

                            if (pk::is_protecting_the_emperor(force_) or force_.kokugou == 국호_한) //멸망시킨 세력이 한실을 보호하고 있거나 국호가 한(후한)일때 한실보통 이상인 장수들은 사관금지기간 감소
                            {
                                if (person.kanshitsu >= 한실_보통)
                                    sagwan -= 1;
                            }

                            if (person.kanshitsu == 한실_중시 and kunshu_.kanshitsu == 한실_중시) //한실중시 일치시 사관금지기간 감소
                                sagwan -= 1;

                            if (person.kanshitsu == 한실_무시 and kunshu_.kanshitsu == 한실_무시) //한실무시 일치시 사관금지기간 감소
                                sagwan -= 1;

                            if (pk::is_valid_person_id(kunshu_id) and pk::get_aishou_distance(person, kunshu_id) <= 10) //상성차가 적으면 사관금지기간 감소
                                sagwan -= 3;
                            else if (pk::is_valid_person_id(kunshu_id) and pk::get_aishou_distance(person, kunshu_id) <= 20)
                                sagwan -= 2;
                            else if (pk::is_valid_person_id(kunshu_id) and pk::get_aishou_distance(person, kunshu_id) <= 30)
                                sagwan -= 1;

                            if (sagwan > 0)
                            {
                                person.banned_kunshu = kunshu_id;
                                person.ban_timer = sagwan;
                            }
                        }

                        escaped.push_back(person);
                    }
                }
            }
        }


        // ===========================================================================================================================================

        // 교역, 이민족 우호에 사용되는 변수
        pk::building@ tradeBuilding;
        pk::person@ tradeKunshu;
        pk::force@ tradeForce;
        pk::city@ tradeCity;
        uint16 tradeBuildingGold;
        uint16 tradeBuildingFood;
        uint16 tradeBuildingTroops;
        int tradeData;
        int tradeStatus;
        int rapprochmentData;
        int rapprochementStatus;
        array<string> tempArray(4);
        array<int> tradeForceArray(4);
        pk::person@ eventKunshu;
        pk::person@ eventMoo;
        int eventLevel;                     //  교역국 이벤트 level
        int eventForceId;                   //  교역국 이벤트 Id
        int eventRapprochmentLevel;         //  이민족 이벤트 level
        int eventAlienId;                   //  이민족 이벤트 Id
        //int barbarianSkillId;               //  이민족 전수 스킬
        //int barbarianId;                    //  전수 이민족 Id
        // =================================================== 교역 메뉴 추가 ========================================================================
        
        // 외국과의 교역메뉴
        void AddTradeMenu()
        {
            pk::menu_item item;
            item.menu = 103;
            item.pos = 7;
            item.shortcut = "D";
            item.init = pk::building_menu_item_init_t(TradeInit);
            item.is_enabled = pk::menu_item_is_enabled_t(TradeEnabled);
            item.get_text = pk::menu_item_get_text_t(GetTradeText);
            item.get_desc = pk::menu_item_get_desc_t(GetTradeDescription);
            item.handler = pk::menu_item_handler_t(TradeHandler);
            pk::add_menu_item(item);
        }

        void TradeInit(pk::building@ building)
        {
            @tradeBuilding = @building;
            @tradeForce = pk::get_force(building.get_force_id());
            @tradeKunshu = pk::get_person(tradeForce.kunshu);
            @tradeCity = pk::building_to_city(tradeBuilding);
            tradeBuildingGold = pk::get_gold(building);
            tradeBuildingFood = pk::get_food(building);
            tradeBuildingTroops = pk::get_troops(building);
            tradeData = GetPossibleTrade(tradeForce, tradeBuilding, tradeStatus);
        }

        bool TradeEnabled()
        {
            if (-1 == tradeData)
            {
                return false;
            }

            return true;
        }
        
        string GetTradeText()
        {
            return  pk::u8encode("교역");
        }
        
        string GetTradeDescription()
        {
            if (-1 == tradeData)
            {
                switch (tradeStatus)
                {
                case 교역불가_교역중 :
                    return  pk::u8encode(pk::format("현재 \x1b[2x{}\x1b[0x과 교역중에 있습니다. 남은 일수 : {}일", 교역대상_이름[GetTradeForce(tradeForce)], GetTradeDay(tradeForce) * 10));
                case 교역불가_지역이점없음:
                    return  pk::u8encode("교역이 가능한 지역을 얻지 못했습니다");
                case 교역불가_기교부족:
                    return  pk::u8encode(pk::format("기교가 부족합니다. (기교 P{})", 교역_기교));
                case 교역불가_물자부족:
                    return  pk::u8encode("교역에 필요한 물자가 부족합니다");
                case 교역불가_최대:
                    return  pk::u8encode("교역이 가능한 대상이 모두 최대치입니다");
                }
            }

            return pk::u8encode(pk::format("타국과의 교역을 실행합니다. (기교P {} 사용)", 교역_기교));
        }

        bool TradeHandler()
        {
            int level;
            int count = 0;
            
            // 대진국
            if (tradeData % 2 == 1)
            {
                level = GetRelationLevel(tradeForce, 우호_대진국);
                tradeForceArray[count] = 0;
                tempArray[count] = pk::u8encode(pk::format("\x1b[2x대진국\x1b[0x (현재 우호도 {})", level));
                count += 1;
            }
            // 안식국
            if ((tradeData / 2) % 2 == 1)
            {
                level = GetRelationLevel(tradeForce, 우호_안식국);
                tradeForceArray[count] = 1;
                tempArray[count] = pk::u8encode(pk::format("\x1b[2x안식국\x1b[0x (현재 우호도 {})", level));
                count += 1;
            }
            // 천축국
            if ((tradeData / 4) % 2 == 1)
            {
                level = GetRelationLevel(tradeForce, 우호_천축국);
                tradeForceArray[count] = 2;
                tempArray[count] = pk::u8encode(pk::format("\x1b[2x천축국\x1b[0x (현재 우호도 {})", level));
                count += 1;
            }
            // 귀상국
            if ((tradeData / 8) % 2 == 1)
            {
                level = GetRelationLevel(tradeForce, 우호_귀상국);
                tradeForceArray[count] = 3;
                tempArray[count] = pk::u8encode(pk::format("\x1b[2x귀상국\x1b[0x (현재 우호도 {})", level));
                count += 1;
            }
            array<string> menuArray(count + 1);

            for (int i = 0; i < count; ++i)
            {
                menuArray[i] = tempArray[i];
            }

            menuArray[count] = pk::u8encode("취소");

            int choose = pk::choose(pk::u8encode("교역을 실행할 세력을 선택하십시오."), menuArray);
            
            if (choose == count)
            {
                return false;
            }
            else
            {
                if (false == pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x과 교역을 실행하시겠습니까? \n\n(금{} 군량{} 병력{} 소모)", 교역대상_이름[choose], 교역_금[level], 교역_군량[level], 교역_병사[level]))))
                {
                    return TradeHandler();
                }
            }

            int selectForce = tradeForceArray[choose];
            int selectLevel = GetRelationLevel(tradeForce, selectForce);
            pk::add_tp(tradeForce, -교역_기교, tradeBuilding.get_pos());
            pk::add_gold(tradeBuilding, -교역_금[selectLevel], true);
            pk::add_food(tradeBuilding, -교역_군량[selectLevel], true);
            pk::add_troops(tradeBuilding, -교역_병사[selectLevel], true);
            ExecuteTrade(tradeForce, selectForce);
            RelationStartEvent(tradeForce, selectForce);
            return true;
        }

        // 이민족과의 화친 메뉴
        void AddrapprochementMenu()
        {
            pk::menu_item item;
            item.menu = 103;
            item.pos = 8;
            item.shortcut = "C";
            item.init = pk::building_menu_item_init_t(RapprochementInit);
            item.is_enabled = pk::menu_item_is_enabled_t(RapprochementEnabled);
            item.get_text = pk::menu_item_get_text_t(GetRapprochementText);
            item.get_desc = pk::menu_item_get_desc_t(GetRapprochementDescription);
            item.handler = pk::menu_item_handler_t(RapprochementHandler);
            pk::add_menu_item(item);
        }

        void RapprochementInit(pk::building@ building)
        {
            @tradeBuilding = @building;
            @tradeForce = pk::get_force(building.get_force_id());
            @tradeKunshu = pk::get_person(tradeForce.kunshu);
            @tradeCity = pk::building_to_city(tradeBuilding);
            tradeBuildingGold = pk::get_gold(building);
            rapprochmentData = GetPossibleRapprochement(tradeForce, tradeBuilding, rapprochementStatus);
        }

        bool RapprochementEnabled()
        {
            if (-1 == rapprochmentData)
            {
                return false;
            }

            return true;
        }

        string GetRapprochementText()
        {
            return  pk::u8encode("이민족");
        }

        string GetRapprochementDescription()
        {
            if (-1 == rapprochmentData)
            {
                switch (rapprochementStatus)
                {
                case 교역불가_지역이점없음:
                    return  pk::u8encode("교류가 가능한 이민족이 없습니다.");
                case 교역불가_기교부족:
                    return  pk::u8encode(pk::format("기교가 부족합니다. (기교 P{})", 화친_기교));
                case 교역불가_물자부족:
                    return  pk::u8encode("친선에 필요한 물자가 부족합니다");
                case 교역불가_최대:
                    return  pk::u8encode("친선이 가능한 대상이 모두 최대치입니다");
                }
            }

            return pk::u8encode(pk::format("이민족과의 친선을 실행합니다. (기교P {} 사용)", 화친_기교));
        }

        bool RapprochementHandler()
        {
            int level;
            int targetForceId = -1;
            pk::list<pk::force@> forceList;

            // 오환
            if (rapprochmentData % 2 == 1)
            {
                forceList.add(pk::get_force(세력_오환));
            }
            // 강
            if ((rapprochmentData / 2) % 2 == 1)
            {
                forceList.add(pk::get_force(세력_강));
            }
            // 남만
            if ((rapprochmentData / 4) % 2 == 1)
            {
                forceList.add(pk::get_force(세력_남만));
            }
            // 산월
            if ((rapprochmentData / 8) % 2 == 1)
            {
                forceList.add(pk::get_force(세력_산월));
            }

            if (forceList.count != 0)
            {
                pk::list<pk::force@> force_sel = pk::force_selector(pk::u8encode("세력 선택"), pk::u8encode("교류의 대상을 선택합니다."), forceList, 1, 1);
                if (force_sel.count == 0)
                {
                    return false; // 미선택 시 취소 종료
                }

                switch (force_sel[0].get_id())
                {
                case 세력_오환 :
                    targetForceId = 우호_오환;
                    break;

                case 세력_강 :
                    targetForceId = 우호_강;
                    break;

                case 세력_남만 :
                    targetForceId = 우호_남만;
                    break;

                case 세력_산월 :
                    targetForceId = 우호_산월;
                    break;
                }
            }

            int selectLevel = GetRelationLevel(tradeForce, targetForceId);
            int requiredGold = 교역_금[selectLevel];
            int personCount = GetRapprochmentPersonCount(tradeForce, targetForceId);

            if (personCount > 0)
            {
                if (personCount >= 5)
                {
                    personCount = 5;
                }

                requiredGold = (requiredGold / 10) * (10 - personCount);
            }

            if (pk::choose(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에 친선을 위한 사절을 보내시겠습니까?\n(기교 {} 필요, 금 {} 필요)\n", 교역대상_이름[targetForceId], 화친_기교, requiredGold)) , { pk::u8encode("예"), pk::u8encode("아니오") }) == 1)
            {
                return  RapprochementHandler();
            }

            pk::add_tp(tradeForce, -화친_기교, tradeBuilding.get_pos());
            pk::add_gold(tradeBuilding, -requiredGold, true);
            ExecuteRapprochment(tradeForce, targetForceId);
            RelationStartEvent(tradeForce, targetForceId);
            return true;
        }

        // 이벤트

        void RelationStartEvent(pk::force@ force, int type)
        {
            string forceName = 교역대상_이름[type];
            pk::person@ p = pk::get_person(무장_사자);

            pk::play_se(17);
            pk::message_box(pk::u8encode(pk::format("반드시 \x1b[2x{}\x1b[0x에 도착해 좋은 소식을 가져오겠습니다.", forceName)), p);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x을 향해 교역의 사절이 떠났습니다.", forceName)));
        }

        void TradeEventScene()
        {
            string forceName = 교역대상_이름[eventForceId];
            @eventMoo = pk::get_person(무장_사자);
            pk::play_se(17);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x을 향해 떠났던 사절이 돌아왔습니다.", forceName)));
            
            pk::move_screen(eventKunshu.get_pos());

            pk::fade(0);
            pk::sleep();
            pk::background(35);
            pk::fade(255);

            switch (eventForceId)
            {
            case 우호_대진국:
                pk::message_box(pk::u8encode("주공! 이제 막 도착했습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래 \x1b[2x대진국\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x의 왕은 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x은 주변의 \x1b[2x안식국\x1b[0x이라는 국가와 전쟁을 하는중인듯 합니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("왕은 저희가 가져간 선물이 마음에 들었는지 \x1b[2x안식국\x1b[0x에 대비해 개발한 \x1b[1x귀갑진\x1b[0x이라는 진법을 전수해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[1x귀갑진\x1b[0x을 통해 아군 창병부대의 수비력이 향상될거라 기대됩니다."), eventMoo);
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x안식국\x1b[0x과 사이가 좋지 않은듯 보였습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들이 공성전에 사용하는 \x1b[1x발석거\x1b[0x라는 병기에 대해 전수받았습니다."), eventMoo);
                    if (true == tradeForce.tech[기교_투석개발])
                    {
                        pk::message_box(pk::u8encode("그들의 \x1b[1x발석거\x1b[0x는 기존에 저희가 사용하던 \x1b[1x투석기\x1b[0x와는 또 다른 위력을 보였습니다."), eventMoo);
                        pk::message_box(pk::u8encode("\x1b[1x발석거\x1b[0x는 성을 공격할때 매우 강력한 위력을 보일거라고 기대됩니다."), eventMoo);
                    }
                    else
                    {
                        // 만약 해당 기교가 개발중이면 개발 취소
                        if (tradeForce.researching_tech == 기교_투석개발)
                        {
                            auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                            for (int i = 0; i < officers.count; ++i)
                            {
                                if (officers[i].order == 무장임무_기교연구)
                                {
                                    officers[i].order = 무장임무_없음;
                                    officers[i].absence_timer = 0;
                                    officers[i].action_done = false;
                                }
                            }

                            tradeForce.researching_tech = -1;
                        }
                        // 투석기교 확득
                        tradeForce.tech[기교_투석개발] = true;
                        ChangeWeaponCatapult(tradeForce);
                        pk::message_box(pk::u8encode("\x1b[1x발석거\x1b[0x는 성을 공격할때 매우 강력한 위력을 보일거라고 기대됩니다."), eventMoo);
                        pk::play_se(10);
                        pk::message_box(pk::u8encode("기교 \x1b[1x투석개발\x1b[0x을 획득했습니다."));
                    }
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x안식국\x1b[0x과 사이가 좋지 않은듯 보였습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 상대인 \x1b[2x안식국\x1b[0x의 \x1b[1x철갑기병\x1b[0x은 매우 높은 명성을 떨치고 있었습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들이 \x1b[1x철갑기병\x1b[0x에 대항하기 위해 고안한 \x1b[1x군단병\x1b[0x이라는 병과에 대해 전수받았습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 지식을 토대로 아군 창병부대의 수비력이 크게 향상될거라 기대됩니다."), eventMoo);
                    break;
                }
                break;
                
            case 우호_안식국:
                pk::message_box(pk::u8encode("주공! 이제 막 도착했습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x안식국\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x의 왕은 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x은 주변의 \x1b[2x대진국\x1b[0x이라는 국가와 전쟁을 하는중인듯 합니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("왕은 저희가 가져간 선물이 마음에 들었는지 \x1b[2x대진국\x1b[0x에 대비해 개발한 \x1b[1x파도기병술\x1b[0x이라는 전법을 전수해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[1x파도기병술\x1b[0x을 통해 아군 기병부대의 공격력이 향상될거라 기대됩니다."), eventMoo);
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x대진국\x1b[0x과 사이가 좋지 않은듯 보였습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들의 기병을 더욱 강력하게 만든 \x1b[1x안식사법\x1b[0x이라는 궁술에 대해 전수받았습니다."), eventMoo);
                    if (true == tradeForce.tech[기교_기사])
                    {
                        pk::message_box(pk::u8encode("\x1b[1x안식사법\x1b[0x은 기존에 저희가 사용하던 \x1b[1x기사\x1b[0x보다 더 강력한 위력을 보였습니다."), eventMoo);
                        pk::message_box(pk::u8encode("\x1b[1x안식사법\x1b[0x은 아군의 기마부대를 더욱 강력하게 만들어줄거라 기대됩니다."), eventMoo);
                    }
                    else
                    {
                        // 만약 해당 기교가 개발중이면 개발취소
                        if (tradeForce.researching_tech == 기교_기사)
                        {
                            auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                            for (int i = 0; i < officers.count; ++i)
                            {
                                if (officers[i].order == 무장임무_기교연구)
                                {
                                    officers[i].order = 무장임무_없음;
                                    officers[i].absence_timer = 0;
                                    officers[i].action_done = false;
                                }
                            }

                            tradeForce.researching_tech = -1;
                        }
                        // 기사 획득
                        tradeForce.tech[기교_기사] = true;
                        pk::message_box(pk::u8encode("\x1b[1x안식사법\x1b[0x은 아군의 기마부대를 더욱 강력하게 만들어줄거라 기대됩니다."), eventMoo);
                        pk::play_se(10);
                        pk::message_box(pk::u8encode("기교 \x1b[1x기사\x1b[0x를 획득했습니다."));
                    }
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x대진국\x1b[0x과 사이가 좋지 않은듯 보였습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 상대인 \x1b[2x대진국\x1b[0x의 \x1b[1x군단병\x1b[0x은 매우 높은 명성을 떨치고 있었습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들이 \x1b[1x군단병\x1b[0x을 분쇄하기 위해 고안한 \x1b[1x철갑기병\x1b[0x이라는 병과에 대해 전수받았습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 지식을 토대로 아군 기마부대의 공격력이 크게 향상될거라 기대됩니다."), eventMoo);
                    break;
                }
                break;

            case 우호_천축국 :
                pk::message_box(pk::u8encode("주공! 지금 막 다녀왔습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x천축국\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x의 왕은 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x은 주변의 \x1b[2x귀상국\x1b[0x이라는 국가와 전쟁을 하는중인듯 합니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("왕은 저희가 가져간 선물이 마음에 들었는지 \x1b[1x마누법전\x1b[0x이라는 경전에 대해 알려주었습니다."), eventMoo);
                    if (true == tradeForce.tech[기교_공병육성])
                    {
                        pk::message_box(pk::u8encode("\x1b[1x마누법전\x1b[0x은 기존에 저희가 시행하던 \x1b[1x공병육성\x1b[0x보다 더 효율적인 면모를 보였습니다."), eventMoo);
                        pk::message_box(pk::u8encode("\x1b[1x마누법전\x1b[0x을 통해 도시의 지배를 더 굳건히 할 수 있을것입니다."), eventMoo);
                    }
                    else
                    {
                        // 만약 해당 기교가 개발중이면 개발취소
                        if (tradeForce.researching_tech == 기교_공병육성)
                        {
                            auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                            for (int i = 0; i < officers.count; ++i)
                            {
                                if (officers[i].order == 무장임무_기교연구)
                                {
                                    officers[i].order = 무장임무_없음;
                                    officers[i].absence_timer = 0;
                                    officers[i].action_done = false;
                                }
                            }

                            tradeForce.researching_tech = -1;
                        }
                        // 공병육성 획득
                        tradeForce.tech[기교_공병육성] = true;
                        pk::message_box(pk::u8encode("\x1b[1x마누법전\x1b[0x을 통해 도시의 지배를 더 굳건히 할 수 있을것입니다."), eventMoo);
                        pk::play_se(10);
                        pk::message_box(pk::u8encode("기교 \x1b[1x공병육성\x1b[0x을 획득했습니다."));
                    }
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x귀상국\x1b[0x과 사이가 좋지 않은듯 보였습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들의 나라를 더욱 풍족하게 만든 \x1b[1x실리론\x1b[0x이라는 통치술에 대해 전수받았습니다."), eventMoo);
                    if (true == tradeForce.tech[기교_법령정비])
                    {
                        pk::message_box(pk::u8encode("\x1b[1x실리론\x1b[0x은 기존에 저희가 시행하던 \x1b[1x법령정비\x1b[0x보다 더 효율적인 면모를 보였습니다."), eventMoo);
                        pk::message_box(pk::u8encode("\x1b[1x실리론\x1b[0x을 통해 백성들의 군역에 대한 동요를 감소시킬 수 있을 것입니다."), eventMoo);
                    }
                    else
                    {
                        // 만약 해당 기교가 개발중이면 개발취소
                        if (tradeForce.researching_tech == 기교_법령정비)
                        {
                            auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                            for (int i = 0; i < officers.count; ++i)
                            {
                                if (officers[i].order == 무장임무_기교연구)
                                {
                                    officers[i].order = 무장임무_없음;
                                    officers[i].absence_timer = 0;
                                    officers[i].action_done = false;
                                }
                            }

                            tradeForce.researching_tech = -1;
                        }
                        // 정령정비 획득
                        tradeForce.tech[기교_법령정비] = true;
                        pk::message_box(pk::u8encode("\x1b[1x실리론\x1b[0x을 통해 백성들의 군역에 대한 동요를 감소시킬 수 있을 것입니다."), eventMoo);
                        pk::play_se(10);
                        pk::message_box(pk::u8encode("기교 \x1b[1x법령정비\x1b[0x를 획득했습니다."));
                    }
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x귀상국\x1b[0x과 분쟁을 일으키고 있었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 상대인 \x1b[2x귀상국\x1b[0x이 믿는 \x1b[1x아미타바\x1b[0x는 그 곳 백성들을 하나로 뭉치고 있었습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들이 \x1b[2x귀상국\x1b[0x을 상대하기 위해 고안한 \x1b[1x가루다진법\x1b[0x이라는 진형에 대해 전수받았습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[1x가루다진법\x1b[0x을 활용한다면 공성과 수성 모두에 큰 도움을 받을 수 있습니다."), eventMoo);
                    break;
                }
                break;

            case 우호_귀상국 :
                pk::message_box(pk::u8encode("주공! 지금 막 다녀왔습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x귀상국\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x의 왕은 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x은 주변의 \x1b[2x천축국\x1b[0x이라는 국가와 전쟁을 하는중인듯 합니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("왕은 저희가 가져간 선물이 마음에 들었는지 \x1b[1x전륜왕수송술\x1b[0x이라는 운반기술을 알려주었습니다."), eventMoo);
                    if (true == tradeForce.tech[기교_목우유마])
                    {
                        pk::message_box(pk::u8encode("\x1b[1x전륜왕수송술\x1b[0x은 기존에 저희가 시행하던 \x1b[1x목우유마\x1b[0x보다 더 빼어난 면모를 보였습니다."), eventMoo);
                        pk::message_box(pk::u8encode("\x1b[1x전륜왕수송술\x1b[0x을 활용하여 수송부대의 기동성을 극대화시킬 수 있습니다."), eventMoo);
                    }
                    else
                    {
                        // 만약 해당 기교가 개발중이면 개발취소
                        if (tradeForce.researching_tech == 기교_목우유마)
                        {
                            auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                            for (int i = 0; i < officers.count; ++i)
                            {
                                if (officers[i].order == 무장임무_기교연구)
                                {
                                    officers[i].order = 무장임무_없음;
                                    officers[i].absence_timer = 0;
                                    officers[i].action_done = false;
                                }
                            }

                            tradeForce.researching_tech = -1;
                        }
                        // 정령정비 획득
                        tradeForce.tech[기교_목우유마] = true;
                        pk::message_box(pk::u8encode("\x1b[1x전륜왕수송술\x1b[0x을 활용하여 수송부대의 기동성을 극대화시킬 수 있습니다."), eventMoo);
                        pk::play_se(10);
                        pk::message_box(pk::u8encode("기교 \x1b[1x목우유마\x1b[0x를 획득했습니다."));
                    }
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x천축국\x1b[0x과 사이가 좋지 않은듯 보였습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 그들의 응용지식의 토대인 \x1b[1x우파베다\x1b[0x에 대해서 배울 기회가 생겼습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[1x우파베다\x1b[0x의 지식을 통해 아군 노병부대의 위력이 더욱 강해질 것입니다."), eventMoo);
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x의 왕은 여전히 저희를 크게 환대해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("여전히 그들은 \x1b[2x천축국\x1b[0x과 분쟁을 일으키고 있었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 상대인 \x1b[2x천축국\x1b[0x이 자랑하는 \x1b[1x가루다진법\x1b[0x은 주변의 나라들을 두렵게 만드는 전투방식으로 보였습니다."), eventMoo);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode("이번에는 \x1b[2x귀상국\x1b[0x 사람들을 하나로 뭉치게 만드는 \x1b[1x아미타바\x1b[0x라는 신앙에 대해 배워왔습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[1x아미타바\x1b[0x를 통한 정신수양으로 아군 군대의 동요를 크게 방지할 수 있을 것입니다."), eventMoo);
                    break;
                }
                break;
            }

            pk::message_box(pk::u8encode("그것 참 훌륭한 소식이군. 수고했네."), eventKunshu);
            pk::fade(0);
            pk::sleep();
            pk::background(-1);
            pk::fade(255);
        }
        
        void RapprochmentEventScene()
        {
            string forceName = 교역대상_이름[eventAlienId];
            @eventMoo = pk::get_person(무장_사자);
            pk::play_se(17);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x을 향해 떠났던 사절이 돌아왔습니다.", forceName)));

            pk::fade(0);
            pk::sleep();
            pk::background(35);
            pk::fade(255);

            switch (eventAlienId)
            {   
            case 우호_오환:
                pk::message_box(pk::u8encode("주공! 이제 막 도착했습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x오환\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventRapprochmentLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x오환족장\x1b[0x은 저희의 방문을 몹시 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("주공의 배려에 감탄한 족장은 \x1b[1x유주\x1b[0x를 침략하지 않겠다고 했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("또 주기적으로 병력과 물자를 보내 화친을 돈독히 하고자한다는 성의를 표시한다고 했습니다."), eventMoo);
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x오환족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("족장은 주공에게 큰 힘이 될 수 있게 더 많은 물자를 보내기로 약속했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그리고 매년 그들의 경험을 아군 무장들에게 전수해줄거라 전했습니다."), eventMoo);
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x오환족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x오환족장\x1b[0x은 주공에 호의에 감탄하여 그들의 노련한 용사들을 파견해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 경험을 살린 기마술로 하여금 아군의 기마군단은 적의 패장들을 효과적으로 제압할 수 있게 될것입니다."), eventMoo);
                    break;
                }
                break;

            case 우호_강:
                pk::message_box(pk::u8encode("주공! 이제 막 도착했습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x강\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventRapprochmentLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x강족장\x1b[0x은 저희의 방문을 몹시 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("주공의 배려에 감탄한 족장은 \x1b[1x량주\x1b[0x를 침략하지 않겠다고 했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("또 주기적으로 병력과 물자를 보내 화친을 돈독히 하고자한다는 성의를 표시한다고 했습니다."), eventMoo);
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x강족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("족장은 주공에게 큰 힘이 될 수 있게 더 많은 물자를 보내기로 약속했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그리고 매년 그들의 경험을 아군 무장들에게 전수해줄거라 전했습니다."), eventMoo);
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x강족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x강족장\x1b[0x은 주공에 호의에 감탄하여 그들의 노련한 용사들을 파견해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 경험을 살린 기마술로 하여금 아군의 기마군단은 적들의 추격에서 효과적으로 후퇴할 수 있을것입니다."), eventMoo);
                    break;
                }
                break;

            case 우호_남만:
                pk::message_box(pk::u8encode("주공! 이제 막 도착했습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x남만\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventRapprochmentLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x남만족장\x1b[0x은 저희의 방문을 몹시 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("주공의 배려에 감탄한 족장은 \x1b[1x남중\x1b[0x을 침략하지 않겠다고 했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("또 주기적으로 병력과 물자를 보내 화친을 돈독히 하고자한다는 성의를 표시한다고 했습니다."), eventMoo);
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x남만족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("족장은 주공에게 큰 힘이 될 수 있게 더 많은 물자를 보내기로 약속했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그리고 매년 그들의 경험을 아군 무장들에게 전수해줄거라 전했습니다."), eventMoo);
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x남만족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x남만족장\x1b[0x은 주공에 호의에 감탄하여 그들의 노련한 용사들을 파견해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 경험을 살린 전투술로 하여금 아군의 병사들은 숲에서 더욱 뛰어난 위력을 발휘할 수 있을것입니다."), eventMoo);
                    break;
                }
                break;

            case 우호_산월:
                pk::message_box(pk::u8encode("주공! 이제 막 도착했습니다."), eventMoo);
                pk::message_box(pk::u8encode("오.. 그래. \x1b[2x산월\x1b[0x은 어떻던가?"), eventKunshu);
                switch (eventRapprochmentLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode("\x1b[2x산월족장\x1b[0x은 저희의 방문을 몹시 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("주공의 배려에 감탄한 족장은 \x1b[1x양주\x1b[0x를 침략하지 않겠다고 했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("또 주기적으로 병력과 물자를 보내 관계를 돈독히 하고자하는 성의를 표시한다고 했습니다."), eventMoo);
                    break;

                case 1:
                    pk::message_box(pk::u8encode("\x1b[2x산월족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("족장은 주공에게 큰 힘이 될 수 있게 더 많은 물자를 보내기로 약속했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그리고 매년 그들의 경험을 아군 무장들에게 전수해줄거라 전했습니다."), eventMoo);
                    break;

                case 2:
                    pk::message_box(pk::u8encode("\x1b[2x산월족장\x1b[0x은 여전히 저희를 반가워했습니다."), eventMoo);
                    pk::message_box(pk::u8encode("\x1b[2x산월족장\x1b[0x은 주공에 호의에 감탄하여 그들의 노련한 용사들을 파견해주었습니다."), eventMoo);
                    pk::message_box(pk::u8encode("그들의 경험을 살린 전투술로 하여금 아군의 극병부대는 적의 무장들을 효과적으로 제압할 수 있을것입니다."), eventMoo);
                    break;
                }
                break;
            }

            pk::message_box(pk::u8encode("그것 참 훌륭한 소식이군. 수고했네."), eventKunshu);
            pk::fade(0);
            pk::sleep();
            pk::background(-1);
            pk::fade(255);
        }

        void RomanUpgradeEvent(pk::force@ force, int level)
        {
            @eventKunshu = pk::get_person(force.kunshu);
            string forceName;
            eventForceId = 우호_대진국;
            eventLevel = level;

            if (force.kokugou != -1)
            {
                forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
            }
            else
            {
                forceName = pk::get_name(eventKunshu) + pk::u8encode("군");
            }

            @tradeForce = force;

            if (true == force.is_player())
            {
                pk::scene(pk::scene_t(TradeEventScene));
            }
            else
            {
                pk::person@ p = pk::get_person(무장_문관);
                pk::play_se(27);
                switch (eventLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x귀갑진\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 1:
                    // 만약 해당 기교가 개발중이면 개발 취소
                    if (tradeForce.researching_tech == 기교_투석개발)
                    {
                        auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                        for (int i = 0; i < officers.count; ++i)
                        {
                            if (officers[i].order == 무장임무_기교연구)
                            {
                                officers[i].order = 무장임무_없음;
                                officers[i].absence_timer = 0;
                                officers[i].action_done = false;
                            }
                        }

                        tradeForce.researching_tech = -1;
                    }
                    // 투석기교 확득
                    tradeForce.tech[기교_투석개발] = true;
                    ChangeWeaponCatapult(tradeForce);
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x발석거\x1b[0x를 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 2:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x군단병\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;
                }
            }

            switch (eventLevel)
            {
            case 0:
                pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("{}이 \x1b[1x귀갑진\x1b[0x을 획득", pk::u8decode(forceName))));
                break;

            case 1:
                pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("{}이 \x1b[1x발석거\x1b[0x를 획득", pk::u8decode(forceName))));
                break;

            case 2:
                pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("{}이 \x1b[1x군단병\x1b[0x을 획득", pk::u8decode(forceName))));
                break;
            }
        }

        void ParthianUpgradeEvent(pk::force@ force, int level)
        {
            @eventKunshu = pk::get_person(force.kunshu);
            string forceName;
            eventForceId = 우호_안식국;
            eventLevel = level;

            if (force.kokugou != -1)
            {
                forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
            }
            else
            {
                forceName = pk::get_name(eventKunshu) + pk::u8encode("군");
            }

            @tradeForce = force;

            if (true == force.is_player())
            {
                pk::scene(pk::scene_t(TradeEventScene));
            }
            else
            {
                pk::person@ p = pk::get_person(무장_문관);
                pk::play_se(27);
                switch (eventLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x파도기병술\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 1:
                    // 만약 해당 기교가 개발중이면 개발 취소
                    if (tradeForce.researching_tech == 기교_기사)
                    {
                        auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                        for (int i = 0; i < officers.count; ++i)
                        {
                            if (officers[i].order == 무장임무_기교연구)
                            {
                                officers[i].order = 무장임무_없음;
                                officers[i].absence_timer = 0;
                                officers[i].action_done = false;
                            }
                        }

                        tradeForce.researching_tech = -1;
                    }
                    // 투석기교 확득
                    tradeForce.tech[기교_기사] = true;
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x안식사법\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 2:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x철갑기병\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;
                }
            }

            switch (eventLevel)
            {
            case 0:
                pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("{}이 \x1b[1x파도기병술\x1b[0x을 획득", pk::u8decode(forceName))));
                break;

            case 1:
                pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("{}이 \x1b[1x안식사법\x1b[0x을 획득", pk::u8decode(forceName))));
                break;

            case 2:
                pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("{}이 \x1b[1x철갑기병\x1b[0x을 획득", pk::u8decode(forceName))));
                break;
            }
        }

        void IndiaUpgradeEvent(pk::force@ force, int level)
        {
            @eventKunshu = pk::get_person(force.kunshu);
            string forceName;
            eventForceId = 우호_천축국;
            eventLevel = level;

            if (force.kokugou != -1)
            {
                forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
            }
            else
            {
                forceName = pk::get_name(eventKunshu) + pk::u8encode("군");
            }

            @tradeForce = force;

            if (true == force.is_player())
            {
                pk::scene(pk::scene_t(TradeEventScene));
            }
            else
            {
                pk::person@ p = pk::get_person(무장_문관);
                pk::play_se(27);
                switch (eventLevel)
                {
                case 0:
                    // 만약 해당 기교가 개발중이면 개발취소
                    if (tradeForce.researching_tech == 기교_공병육성)
                    {
                        auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                        for (int i = 0; i < officers.count; ++i)
                        {
                            if (officers[i].order == 무장임무_기교연구)
                            {
                                officers[i].order = 무장임무_없음;
                                officers[i].absence_timer = 0;
                                officers[i].action_done = false;
                            }
                        }

                        tradeForce.researching_tech = -1;
                    }
                    // 공병육성 획득
                    tradeForce.tech[기교_공병육성] = true;
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x마누법전\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 1:
                    // 만약 해당 기교가 개발중이면 개발 취소
                    if (tradeForce.researching_tech == 기교_법령정비)
                    {
                        auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                        for (int i = 0; i < officers.count; ++i)
                        {
                            if (officers[i].order == 무장임무_기교연구)
                            {
                                officers[i].order = 무장임무_없음;
                                officers[i].absence_timer = 0;
                                officers[i].action_done = false;
                            }
                        }

                        tradeForce.researching_tech = -1;
                    }
                    // 투석기교 확득
                    tradeForce.tech[기교_법령정비] = true;
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x실리론\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 2:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x가루다진법\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;
                }
            }

            switch (eventLevel)
            {
            case 0:
                pk::history_log(pk::get_building(eventKunshu.service).pos, force.color, pk::u8encode(pk::format("{}이 \x1b[1x마누법전\x1b[0x을 획득", pk::u8decode(forceName))));
                break;

            case 1:
                pk::history_log(pk::get_building(eventKunshu.service).pos, force.color, pk::u8encode(pk::format("{}이 \x1b[1x실리론\x1b[0x을 획득", pk::u8decode(forceName))));
                break;

            case 2:
                pk::history_log(pk::get_building(eventKunshu.service).pos, force.color, pk::u8encode(pk::format("{}이 \x1b[1x가루다진법\x1b[0x를 획득", pk::u8decode(forceName))));
                break;
            }
        }

        void KushanUpgradeEvent(pk::force@ force, int level)
        {
            @eventKunshu = pk::get_person(force.kunshu);
            string forceName;
            eventForceId = 우호_귀상국;
            eventLevel = level;

            if (force.kokugou != -1)
            {
                forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
            }
            else
            {
                forceName = pk::get_name(eventKunshu) + pk::u8encode("군");
            }

            @tradeForce = force;

            if (true == force.is_player())
            {
                pk::scene(pk::scene_t(TradeEventScene));
            }
            else
            {
                pk::person@ p = pk::get_person(무장_문관);
                pk::play_se(27);
                switch (eventLevel)
                {
                case 0:
                    // 만약 해당 기교가 개발중이면 개발 취소
                    if (tradeForce.researching_tech == 기교_목우유마)
                    {
                        auto officers = pk::get_person_list(tradeForce, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));

                        for (int i = 0; i < officers.count; ++i)
                        {
                            if (officers[i].order == 무장임무_기교연구)
                            {
                                officers[i].order = 무장임무_없음;
                                officers[i].absence_timer = 0;
                                officers[i].action_done = false;
                            }
                        }

                        tradeForce.researching_tech = -1;
                    }
                    // 투석기교 확득
                    tradeForce.tech[기교_목우유마] = true;
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x전륜왕수송술\x1b[0x을 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 1:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x우파베다\x1b[0x를 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;

                case 2:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x아미타바\x1b[0x를 획득했다고 합니다.", pk::u8decode(forceName))), p);
                    break;
                }
            }

            switch (eventLevel)
            {
            case 0:
                pk::history_log(pk::get_building(eventKunshu.service).pos, force.color, pk::u8encode(pk::format("{}이 \x1b[1x전륜왕수송술\x1b[0x을 획득", pk::u8decode(forceName))));
                break;

            case 1:
                pk::history_log(pk::get_building(eventKunshu.service).pos, force.color, pk::u8encode(pk::format("{}이 \x1b[1x우파베다\x1b[0x를 획득", pk::u8decode(forceName))));
                break;

            case 2:
                pk::history_log(pk::get_building(eventKunshu.service).pos, force.color, pk::u8encode(pk::format("{}이 \x1b[1x아미타바\x1b[0x를 획득", pk::u8decode(forceName))));
                break;
            }
        }

        void RapprochmentUpgradeEvent(pk::force@ force, int type, int level)
        {
            @eventKunshu = pk::get_person(force.kunshu);
            string forceName;
            eventRapprochmentLevel = level;
            eventAlienId = type;

            if (force.kokugou != -1)
            {
                forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
            }
            else
            {
                forceName = pk::get_name(eventKunshu) + pk::u8encode("군");
            }

            @tradeForce = force;

            if (true == force.is_player())
            {
                pk::scene(pk::scene_t(RapprochmentEventScene));
            }
            else
            {
                pk::person@ p = pk::get_person(무장_문관);
                pk::play_se(27);
                switch (eventRapprochmentLevel)
                {
                case 0:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x{}\x1b[0x과 우호관계를 맺은 듯 합니다.", pk::u8decode(forceName), 교역대상_이름[eventAlienId])));
                    break;

                case 1:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x{}\x1b[0x과 더욱 친밀해진것 같습니다.", pk::u8decode(forceName), 교역대상_이름[eventAlienId])));
                    break;

                case 2:
                    pk::message_box(pk::u8encode(pk::format("{}이 \x1b[1x{}\x1b[0x과 아주 가까운 사이가 되었다고 합니다.", pk::u8decode(forceName), 교역대상_이름[eventAlienId])));
                    break;
                }
            }

            pk::history_log(eventKunshu.get_pos(), force.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x과 \x1b[1x{}\x1b[0x의 우호가 상승", pk::u8decode(forceName), 교역대상_이름[eventAlienId])));
        }

        void RelationDownGradeEvent(pk::force@ force, int type, int level)
        {
            pk::person@ kunshu = pk::get_person(force.kunshu);
            pk::person@ moo = pk::get_person(무장_문관);
            string forceName = "";

            if (force.kokugou != -1)
            {
                forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
            }
            else
            {
                forceName = pk::get_name(kunshu) + pk::u8encode("군");
            }

            if (true == force.is_player())
            {
                pk::play_se(11);
                if (level > 1)
                {
                    pk::message_box(pk::u8encode(pk::format("\x1b[1x{}\x1b[0x이 아군을 수상하게 생각하는것 같습니다.", 교역대상_이름[type])), moo);
                }
                else
                {
                    pk::message_box(pk::u8encode(pk::format("\x1b[1x{}\x1b[0x이 더 이상 아군에게 호의적이지 않습니다.", 교역대상_이름[type])), moo);
                }
            }
            else
            {
                pk::play_se(27);
                if (level > 0)
                {
                    pk::message_box(pk::u8encode(pk::format("{}과 \x1b[1x{}\x1b[0x의 관계가 어색해진것 같습니다.", pk::u8decode(forceName), 교역대상_이름[type])), moo);
                }
                else
                {
                    pk::message_box(pk::u8encode(pk::format("{}과 \x1b[1x{}\x1b[0x이 서로 돌아선것 같습니다.", pk::u8decode(forceName), 교역대상_이름[type])), moo);
                }
            }

            pk::history_log(pk::get_person(force.kunshu).get_pos(), force.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x과 \x1b[1x{}\x1b[0x의 관계가 악화", pk::u8decode(forceName), 교역대상_이름[type])));
        }

        // ==========================================================================================================================================

        // ================================================= Shift 우클릭 메뉴 추가 ========================================================================

           /* =========================================================== 지역이점 출력 ==================================================================== */
        void AddPrintRegionBuffMenu()
        {
            pk::menu_item item;
            item.menu = 2;
            item.is_enabled = pk::menu_item_is_enabled_t(IsPrintEnabled);
            item.get_text = pk::menu_item_get_text_t(GetPrintRegionBuffText);
            item.get_desc = pk::menu_item_get_desc_t(GetPrintRegionBuffDesc);
            item.handler = pk::menu_item_handler_t(PrintRegionBuffHandler);
            pk::add_menu_item(item);
        }

        bool IsPrintEnabled()
        {
            return true;
        }

        string GetPrintRegionBuffText()
        {
            return pk::u8encode("지역이점 출력");
        }

        string GetPrintRegionBuffDesc()
        {
            return pk::u8encode("선택하면 각 세력의 지역이점을 출력합니다");
        }

        bool PrintRegionBuffHandler()
        {
            PrintRegionBuffInfo();
            return true;
        }

        /* =========================================================== 지역이점 도움말 ==================================================================== */
        pk::person@ helpMoo;

        void AddRegionBuffHelpMenu()
        {
            @helpMoo = pk::get_person(무장_주유);
            pk::menu_item item;
            item.menu = 2;
            item.is_enabled = pk::menu_item_is_enabled_t(IsHelpEnabled);
            item.get_text = pk::menu_item_get_text_t(GetRegionBuffHelpText);
            item.get_desc = pk::menu_item_get_desc_t(GetRegionBuffHelpDesc);
            item.handler = pk::menu_item_handler_t(RegionBuffHelpHandler);
            pk::add_menu_item(item);
        }

        bool IsHelpEnabled()
        {
            return true;
        }

        string GetRegionBuffHelpText()
        {
            return pk::u8encode("지역이점이란?");
        }

        string GetRegionBuffHelpDesc()
        {
            return pk::u8encode("선택하면 각 지역이점에 대한 설명을 볼 수 있습니다");
        }

        bool RegionBuffHelpHandler()
        {
            array<string> helpList =
            {
                pk::u8encode("지역이점 개요"),
                pk::u8encode("각 주의 지역이점"),
                pk::u8encode("이민족과의 외교"),
                pk::u8encode("교역"),
                pk::u8encode("뒤로가기")
            };

            int n = pk::choose(helpList, pk::u8encode("궁금한 사항을 선택해주십시오."), helpMoo);

            switch (n)
            {
            case 0:
                return HelpOutline();

            case 1:
                return HelpAdvantage();

            case 2:
                return HelpRapprochment();

            case 3:
                return HelpTrade();

            case 4:
                return false;
            }

            return false;
        }
        

        // 지역이점 개요
        bool HelpOutline()
        {
            pk::message_box(pk::u8encode("\x1b[2x삼국지11\x1b[0x에는 총 16개의 주가 존재하는데, 각각의 주마다 다른 효과의 \x1b[1x지역이점\x1b[0x이 책정되어 있습니다."), helpMoo);
            pk::message_box(pk::u8encode("각 주마다 주를 제패하는 조건이 다르게 설정되어 있고, 조건을 만족하는 세력에게 그 주의 지역이점이 적용됩니다."), helpMoo);
            pk::message_box(pk::u8encode("몇몇 이점은 주를 제패하는 순간 바로 적용되고, 몇몇은 타 세력과 교역을 실행해야 적용됩니다."), helpMoo);

            return  RegionBuffHelpHandler();
        }

        // 각 주의 지역이점
        bool HelpAdvantage()
        {
            array<string> helpList =
            {
                pk::u8encode("병주, 기주, 청주, 서주의 지역이점"),
                pk::u8encode("회남, 연주, 예주, 형북의 지역이점"),
                pk::u8encode("유주, 량주, 양주, 남중의 이민족"),
                pk::u8encode("사예, 경조, 형남, 익주의 교역"),
                pk::u8encode("뒤로가기")
            };

            int n = pk::choose(helpList, pk::u8encode("궁금한 지역을 선택해주십시오."), helpMoo);

            switch (n)
            {
            case 0:
                pk::message_box(pk::u8encode("\x1b[1x병주\x1b[0x의 지역이점은 \x1b[1x진양\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x병주\x1b[0x를 제패한 세력은 자세력의 영토가 아닌 지역에서 전투부대의 매턴 기력이 회복되고"), helpMoo);
                pk::message_box(pk::u8encode("병기, 수군을 제외한 부대의 이동속도가 증가합니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x기주\x1b[0x의 지역이점은 \x1b[1x업\x1b[0x과 \x1b[1x남피\x1b[0x를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x기주\x1b[0x를 제패한 세력은 부하 무장들의 충성도가 매월 증가하고 봉록의 일부를 절약할 수 있게됩니다."), helpMoo);
                
                pk::message_box(pk::u8encode("\x1b[1x청주\x1b[0x의 지역이점은 \x1b[1x평원\x1b[0x과 \x1b[1x평원\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x청주\x1b[0x를 제패한 세력은 매 턴 내정시설의 체력이 증가하며, 매월 초에 모든 도시의 치안이 증가합니다."), helpMoo);
               
                pk::message_box(pk::u8encode("\x1b[1x서주\x1b[0x의 지역이점은 \x1b[1x하비\x1b[0x와 \x1b[1x소패\x1b[0x를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x서주\x1b[0x를 제패한 세력은 거점의 공격력이 증가하고, 매 턴 도시의 내구도가 조금씩 추가 회복됩니다."), helpMoo);
                return HelpAdvantage();

            case 1:
                pk::message_box(pk::u8encode("\x1b[1x회남\x1b[0x의 지역이점은 \x1b[1x수춘\x1b[0x과 \x1b[1x여강\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x회남\x1b[0x을 제패한 세력은 부대가 계략을 실행할때 소비 기력이 일부 감소합니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x연주\x1b[0x의 지역이점은 \x1b[1x진류\x1b[0x와 \x1b[1x복양\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x연주\x1b[0x를 제패한 세력은 도시의 창,극,노의 생산량이 증가합니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x예주\x1b[0x의 지역이점은 \x1b[1x허창\x1b[0x과 \x1b[1x여남\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x예주\x1b[0x를 제패한 세력은 무장의 이동,소환,귀환의 필요일수가 감소합니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x형북\x1b[0x의 지역이점은 \x1b[1x양양\x1b[0x, \x1b[1x강릉\x1b[0x, \x1b[1x강하\x1b[0x, \x1b[1x신야\x1b[0x중 \x1b[1x양양\x1b[0x을 포함한 세 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x형북\x1b[0x을 제패한 세력은 매월 기교포인트가 증가하고 재야,포로 무장의 등용확률이 증가합니다."), helpMoo);
                return HelpAdvantage();

            case 2:
                pk::message_box(pk::u8encode("\x1b[1x유주\x1b[0x의 지역이점은 \x1b[1x북평\x1b[0x, \x1b[1x계\x1b[0x, \x1b[1x양평\x1b[0x중 \x1b[1x북평\x1b[0x을 포함한 두 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x유주\x1b[0x를 제패한 세력은 \x1b[2x오환\x1b[0x과의 외교가 가능해집니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x량주\x1b[0x의 지역이점은 \x1b[1x무위\x1b[0x, \x1b[1x천수\x1b[0x, \x1b[1x안정\x1b[0x중 \x1b[1x무위\x1b[0x를 포함한 두 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x량주\x1b[0x를 제패한 세력은 \x1b[2x강\x1b[0x과의 외교가 가능해집니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x양주\x1b[0x의 지역이점은 \x1b[1x건업\x1b[0x, \x1b[1x오\x1b[0x, \x1b[1x회계\x1b[0x, \x1b[1x시상\x1b[0x중 \x1b[1x건업\x1b[0x을 포함한 세 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x양주\x1b[0x를 제패한 세력은 \x1b[2x산월\x1b[0x과의 외교가 가능해집니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x남중\x1b[0x의 지역이점은 \x1b[1x운남\x1b[0x과 \x1b[1x건녕\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x남중\x1b[0x을 제패한 세력은 \x1b[2x남만\x1b[0x과의 외교가 가능해집니다."), helpMoo);
                return HelpAdvantage();

            case 3:
                pk::message_box(pk::u8encode("\x1b[1x사예\x1b[0x의 지역이점은 \x1b[1x낙양\x1b[0x을 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x사예\x1b[0x를 제패한 세력은 \x1b[2x대진국\x1b[0x과의 교역이 가능해집니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x경조\x1b[0x의 지역이점은 \x1b[1x장안\x1b[0x, \x1b[1x상용\x1b[0x, \x1b[1x완\x1b[0x중 \x1b[1x장안\x1b[0x을 포함한 두 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x경조\x1b[0x를 제패한 세력은 \x1b[2x안식국\x1b[0x과의 교역이 가능해집니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x형남\x1b[0x의 지역이점은 \x1b[1x장사\x1b[0x, \x1b[1x무릉\x1b[0x, \x1b[1x계양\x1b[0x, \x1b[1x영릉\x1b[0x중 \x1b[1x장사\x1b[0x를 포함한 세 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x형남\x1b[0x을 제패한 세력은 \x1b[2x천축국\x1b[0x과의 교역이 가능해집니다."), helpMoo);

                pk::message_box(pk::u8encode("\x1b[1x익주\x1b[0x의 지역이점은 \x1b[1x성도\x1b[0x, \x1b[1x한중\x1b[0x, \x1b[1x자동\x1b[0x, \x1b[1x강주\x1b[0x, \x1b[1x영안\x1b[0x중 \x1b[1x성도\x1b[0x를 포함한 세 도시를 소유한 세력에게 적용됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[1x익주\x1b[0x를 제패한 세력은 \x1b[2x귀상국\x1b[0x과의 교역이 가능해집니다."), helpMoo);
                return HelpAdvantage();

            case 4:
                return RegionBuffHelpHandler();
            }

            return RegionBuffHelpHandler();
        }
        
        // 이민족
        bool HelpRapprochment()
        {
            array<string> helpList =
            {
                pk::u8encode("이민족 개요"),
                pk::u8encode("오환족"),
                pk::u8encode("강족"),
                pk::u8encode("남만족"),
                pk::u8encode("산월족"),
                pk::u8encode("뒤로가기")
            };

            int n = pk::choose(helpList, pk::u8encode("궁금한 항목을 선택해주십시오."), helpMoo);

            switch (n)
            {
            case 0:
                pk::message_box(pk::u8encode("이민족과 외교가 가능한 지역이점을 획득하면 도시의 외교 메뉴에서 \x1b[2x이민족\x1b[0x이라는 항목을 사용할 수 있습니다."), helpMoo);
                pk::message_box(pk::u8encode("이민족과의 외교에는 기교포인트와 금이 필요하고, 단계가 올라갈수록 더 많은 금이 필요합니다."), helpMoo);
                pk::message_box(pk::u8encode("해당 이민족과 친분이 있는 무장이 세력에 존재할 경우 필요한 금이 일부분 감소됩니다."), helpMoo);
                pk::message_box(pk::u8encode("이민족과의 우호단계는 0단계부터 최대 3단계가 있습니다. 우호는 외교의 \x1b[2x이민족\x1b[0x 항목을 통해서만 증가시킬 수 있습니다."), helpMoo);
                pk::message_box(pk::u8encode("이민족과 우호도가 하락하는 요인에는 해당 지역이점 상실 또는 해당 주의 도시 치안이 특정 수치 이하로 떨어지는 것 입니다."), helpMoo);
                pk::message_box(pk::u8encode("우호도가 하락하게되면 상위 단계의 효과를 상실하게 됩니다."), helpMoo);
                return HelpRapprochment();
            case 1:
                pk::message_box(pk::u8encode("\x1b[2x오환\x1b[0x과의 외교는 \x1b[1x유주\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x오환\x1b[0x과 1단계의 우호도를 달성하면 분기마다 \x1b[1x유주\x1b[0x의 한 도시에 병력과 군마를 약간 공급받게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 분기마다 공급받는 물자의 양이 조금 상승하고, 매년 1월에 무장 한명에게 \x1b[2x오환\x1b[0x의 특기를 전수할 수 있게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 아군 기병이 적을 사로잡는 확률을 높여줍니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x오환\x1b[0x과의 우호도가 1단계 이상인 동안에는  \x1b[1x유주\x1b[0x 지역에 도적과 오환족이 출몰하지 않습니다."), helpMoo);
                return HelpRapprochment();
            case 2:
                pk::message_box(pk::u8encode("\x1b[2x강\x1b[0x과의 외교는 \x1b[1x량주\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x강\x1b[0x과 1단계의 우호도를 달성하면 분기마다 \x1b[1x량주\x1b[0x의 한 도시에 병력과 군마를 약간 공급받게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 분기마다 공급받는 물자의 양이 조금 상승하고, 매년 10월에 무장 한명에게 \x1b[2x강\x1b[0x의 특기를 전수할 수 있게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 아군 기병이 적에게 포로가 될 확률을 줄여줍니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x강\x1b[0x과의 우호도가 1단계 이상인 동안에는  \x1b[1x량주\x1b[0x 지역에 도적과 강족이 출몰하지 않습니다."), helpMoo);
                return HelpRapprochment();
            case 3:
                pk::message_box(pk::u8encode("\x1b[2x남만\x1b[0x과의 외교는 \x1b[1x남중\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x남만\x1b[0x과 1단계의 우호도를 달성하면 매 달 \x1b[1x남중\x1b[0x의 한 도시에 병력과 창,극을 약간 공급받게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 분기마다 공급받는 물자의 양이 조금 상승하고, 매년 4월에 무장 한명에게 \x1b[2x남만\x1b[0x의 특기를 전수할 수 있게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 아군의 검,창,극,노병이 숲에 위치할때 공격력이 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x남만\x1b[0x과의 우호도가 1단계 이상인 동안에는  \x1b[1x남중\x1b[0x 지역에 도적과 남만족이 출몰하지 않습니다."), helpMoo);
                return HelpRapprochment();
            case 4:
                pk::message_box(pk::u8encode("\x1b[2x산월\x1b[0x과의 외교는 \x1b[1x양주\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x산월\x1b[0x과 1단계의 우호도를 달성하면 분기마다 \x1b[1x양주\x1b[0x의 한 도시에 병력과 극을 약간 공급받게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 분기마다 투함을 추가로 제공받고, 매년 7월에 무장 한명에게 \x1b[2x산월\x1b[0x의 특기를 전수할 수 있게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 아군의 극병이 일반공격으로도 포로를 사로잡을 확률이 증가하게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x산월\x1b[0x과의 우호도가 1단계 이상인 동안에는  \x1b[1x양주\x1b[0x 지역에 도적과 산월족이 출몰하지 않습니다."), helpMoo);
            case 5:
                return RegionBuffHelpHandler();
            }

            return  RegionBuffHelpHandler();
        }


        //교역
        bool HelpTrade()
        {
            array<string> helpList =
            {
                pk::u8encode("교역 개요"),
                pk::u8encode("대진국"),
                pk::u8encode("안식국"),
                pk::u8encode("천축국"),
                pk::u8encode("귀상국"),
                pk::u8encode("뒤로가기")
            };

            int n = pk::choose(helpList, pk::u8encode("궁금한 항목을 선택해주십시오."), helpMoo);
            switch (n)
            {
            case 0:
                pk::message_box(pk::u8encode("외국과 교역이 가능한 지역이점을 획득하면 도시의 외교 메뉴에서 \x1b[2x교역\x1b[0x이라는 항목을 사용할 수 있습니다."), helpMoo);
                pk::message_box(pk::u8encode("교역에는 기교포인트와 금,군량,병력이 필요하고, 단계가 올라갈수록 더 많은 물자들이 필요합니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x과 \x1b[2x안식국\x1b[0x, 그리고 \x1b[1x천축국\x1b[0x과 \x1b[1x귀상국\x1b[0x은 서로 적대적인 관계에 있기 때문에 동시 교역은 불가능합니다."), helpMoo);
                pk::message_box(pk::u8encode("교역을 통한 우호단계는 0단계부터 최대 3단계가 있습니다. 우호는 외교의 \x1b[2x교역\x1b[0x 항목을 통해서만 증가시킬 수 있습니다."), helpMoo);
                pk::message_box(pk::u8encode("특정 단계의 교역을 달성하게 되면 기존에 개발하지 않던 기교연구를 얻을수 있고 부가효과까지 얻을 수 있습니다."), helpMoo);
                pk::message_box(pk::u8encode("현재 외국과의 우호도는 하락하지 않기 때문에 높은단계의 우호도를 쌓게된다면 해당 지역이점을 상실해도 우호도는 유지되지만"), helpMoo);
                pk::message_box(pk::u8encode("지역이점을 상실한 경우에는 교역으로 인한 부가효과가 절반으로 감소하게 됩니다."), helpMoo);
                return HelpTrade();
            case 1:
                pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x과의 교역은 \x1b[1x사예\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x과 1단계의 우호도를 달성하면 \x1b[1x귀갑진\x1b[0x을 얻게되며 아군 창병부대의 방어력이 추가로 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 그들의 공성병기 \x1b[1x발석거\x1b[0x를 얻게됩니다. 효과는 기교 \x1b[2x투석\x1b[0x을 획득하며 아군 투석부대의 공격력이 추가로 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 \x1b[2x대진국\x1b[0x이 자랑하는 \x1b[1x군단병\x1b[0x을 전수받아 아군 창병부대의 방어력이 더욱 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x대진국\x1b[0x과 교역을 시작하게 되면 \x1b[2x안식국\x1b[0x과는 교역이 불가능해집니다."), helpMoo);
                return HelpTrade();
            case 2:
                pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x과의 교역은 \x1b[1x경조\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x과 1단계의 우호도를 달성하면 \x1b[1x파도기병술\x1b[0x을 통해 아군 기병부대의 공격력이 추가로 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 \x1b[1x안식사법\x1b[0x을 전수받습니다. 효과는 기교 \x1b[2x기사\x1b[0x를 획득하며 아군 기병이 행동종료시 일정 확률로 적에게 추가 사격을 합니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 \x1b[2x안식국\x1b[0x이 자랑하는 \x1b[1x철갑기병\x1b[0x을 전수받아 아군 기병부대의 공격력이 더욱 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x안식국\x1b[0x과 교역을 시작하게 되면 \x1b[2x대진국\x1b[0x과는 교역이 불가능해집니다."), helpMoo);
                return HelpTrade();
            case 3:
                pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x과의 교역은 \x1b[1x형남\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x과 1단계의 우호도를 달성하면 \x1b[1x마누법전\x1b[0x을 전수받습니다. 효과는 기교 \x1b[2x공병육성\x1b[0x을 획득하며"), helpMoo);
                pk::message_box(pk::u8encode("도시 점령시 파괴되는 시설과 소실되는 금, 군량, 병사의 양을 줄여줍니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 \x1b[1x실리론\x1b[0x을 전수받습니다. 효과는 기교 \x1b[2x법령정비\x1b[0x를 획득하며 징병시 감소되는 치안이 경감됩니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 \x1b[1x가루다진법\x1b[0x을 전수받아 기병,병기를 제외한 아군 부대가 도시 근처에서 추가 전투력을 얻게됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x천축국\x1b[0x과 교역을 시작하게 되면 \x1b[2x귀상국\x1b[0x과는 교역이 불가능해집니다."), helpMoo);
                return HelpTrade();
            case 4:
                pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x과의 교역은 \x1b[1x익주\x1b[0x 지역을 제패하면 가능해집니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x과 1단계의 우호도를 달성하면 \x1b[1x전륜왕수송술\x1b[0x을 얻게됩니다."), helpMoo);
                pk::message_box(pk::u8encode("효과는 기교 \x1b[2x목우유마\x1b[0x를 획득하며 수송부대의 기동력이 추가로 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("2단계의 우호도를 달성하면 \x1b[1x우파베다\x1b[0x를 전수받아 아군 노병부대의 공격력이 추가로 증가합니다."), helpMoo);
                pk::message_box(pk::u8encode("3단계의 우호도를 달성하면 \x1b[1x아미타바\x1b[0x를 통해 매 턴이 시작될때 일정확률로 상태이상인 아군 부대가 상태회복이 되며, 회복된 부대는 그 턴에 행동이 가능하게 됩니다."), helpMoo);
                pk::message_box(pk::u8encode("\x1b[2x귀상국\x1b[0x과 교역을 시작하게 되면 \x1b[2x천축국\x1b[0x과는 교역이 불가능해집니다."), helpMoo);
                return HelpTrade();
            case 5:
                return RegionBuffHelpHandler();
            }
            return RegionBuffHelpHandler();
        }
        // ===============================================================================================================================================
    }
        
    RegionBuff regionBuff;
}