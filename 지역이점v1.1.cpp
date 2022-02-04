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
    array<int> 교역대상_아이디 = { -1, -1, -1, -1, 세력_오환, -1, 세력_강, 세력_남만, 세력_산월 };

    const int 교역불가_교역중 = 0;
    const int 교역불가_지역이점없음 = 1;
    const int 교역불가_기교부족 = 2;
    const int 교역불가_물자부족 = 3;
    const int 교역불가_최대 = 4;
    
    array<int> 오환_영향력 = { 유주, 병주, 기주, 청주, 연주 };
    array<int> 강_영향력 = { 예주,  사예, 경조 , 량주 };
    array<int> 남만_영향력 = { 형남, 익주, 남중 };
    array<int> 산월_영향력 = { 회남, 서주, 양주, 형북 };

    const int 이민족_철군_동맹 = 0;
    const int 이민족_철군_기한 = 1;
    const int 이민족_철군_진상 = 2;
    const int 이민족_철군_끝 = 3;

    const int 대회_항상개최 = 0;
    const int 대회_개최안함 = 1;
    const int 대회_랜덤 = 2;

    const int 대회_무술 = 0;
    const int 대회_설전 = 1;
    const int 대회_끝 = 2;

    const int 대회_8강이상 = 0;
    const int 대회_4강 = 1;
    const int 대회_자세력 = 2;

    const int 홀수년도 = 0;
    const int 짝수년도 = 1;
    const int 매년 = 2;
    // ============================================== Customize ======================================================

    // ============================================== 지역 이점 =======================================================

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
    const int 기주_지역이점_최대누적충성 = 110;
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
    
    // ==============================================================================================================================
    
    // =========================================  이민족 지원 요청 ===================================================================

    const int 이민족_지속기간 = 9;           // 1 = 10일 , (군량은 90일분으로 출전함)
    const int 이민족_원군요청_기교 = 1000;
    const int 이민족_원군요청_기본금 = 2000; 
    const int 이민족_원군요청_추가금 = 500;  // 1년마다 늘어나는 필요 금
    const int AI_이민족지원_기본확률 = 2;    // (요청이 가능한 경우) 턴마다 지원요청을 실행할 확률
    const int AI_이민족지원_추가확률 = 2;    // 2년이 지날때마다 추가될 확률 (최대 4번 추가됨) 

    // ===============================================================================================================================

    // =========================================== 무술, 설전 대회 ====================================================================
    
    /* 무술대회 참가의 자격 요건은 무력 80 이상인 무장의 보유 유무 입니다. 
       마찬가지로 설전대회의 참가 자격 요건은 지력 80 이상인 무장의 보유 유무입니다.
       
       한실의 역적들은 대회 선발과정에서 제외됩니다. 여기서 역적이라함은 황제를 보호중이지 않은 다른 황제 및 황건적을 지칭합니다.

       대회는 황제가 보호중일 경우에만 개최되고, 황제를 보호중인 세력은 우선적으로 참가 자격을 얻습니다. (자격 요건을 충족하지 못한 경우에는 참가 불가)
       자격 요건을 갖춘 세력이 20개 이상인 경우에는 16강부터 대회가 진행되고, 8~19 사이인 경우에는 8강부터 대회가 진행됩니다.
       
       황제가 보호중인 상태가 아니거나 세력이 7개 이하인 경우에는 한황제가 개최하는 대회가 열리지 않지만 
       대신 공 이상의 작위를 가진 세력에 한해서 자체적으로 대회를 개최할 수 있게됩니다.
       
       황제를 참칭한 역적의 경우에는 한실의 대회가 개최되는 경우에도 자체적으로 대회를 개최할 수 있습니다.
    */

    const int 대회_개최여부 = 대회_항상개최;            // 한실 무술 설전대회 개최여부 ( 대회_항상개최, 대회_개최안함, 대회_랜덤)
    const int 대회_랜덤확률 = 50;                      // 대회 개최가 랜덤일 경우 확률, 그 이외에는 사용안함 (0 ~ 100)
    
    const bool 자세력_대회_개최여부 = true;            // 세력 내에서 대회를 개최할 조건을 만족할 경우 대회개최 버튼을 활성화시킬 것인지 여부 (true : 가능, false : 불가능)
    const int 대회_개최비용 = 5000;                   // 세력 내 대회 개최비용
    const int 대회_개최기교 = 1000;                   // 세력 내 대회 개최기교

    const int 대회_개최년도_무술 = 홀수년도;            // 대회 개최년도 설정 (홀수년도, 짝수년도, 매년 중 선택가능)
    const int 대회_개최년도_설전 = 짝수년도;

    const bool 대회_4세력개최여부 = true;              // 4세력의 8강대회도 열릴것인지 여부

    const int 대회_개최시기_무술 = 4;                  // 대회를 개최하는 월 (해당 월 1일에 개최,  1 ~ 12 사이로 세팅할것)
    const int 대회_개최시기_설전 = 4;

    const int 대회_무력제한 = 80;                      // 무술대회 참가자격이 주어지는 최소 무력수치
    const int 대회_지력제한 = 80;                      // 설전대회 참가자격이 주어지는 최소 지력수치

    const int 무술대회_초기우승자 = /*무장_여포*/ -1;          // 시나리오 시작 시 세팅될 대회 최초 우승자 ( 없을 경우 -1, 그 외에는 무장_여포, 무장_관우 이런식으로 세팅)
    const int 설전대회_초기우승자 = -1;
    /* 대회 우승자에 한해서 전투 시 특수한 효과를 부여하는 것을 선택하는 항목입니다. 
       
       무술대회 우승자의 경우 부대 행동 종료 시 부대의 무력 차이에 비례해서 적의 기력을 감소시킵니다.
       설전대회 우승자의 경우 부대 행동 종료 시 주위의 임의의 적 1부대에게 교란을 실행합니다.
       설전대회 특전의 경우에는 시전자나 대상자의 특기와 무관하게 지력차이에 의해 성공률이 결정됩니다.
       
       대회 우승자는 다음 대회가 개최될때까지 해당 효과를 받고, 다른 우승자가 결정되거나 대회가 폐지되는 경우 해당 효과를 상실합니다.

       세력내에서 개최한 대회의 우승자에게는 대회의 종류에 관계없이 주악의 효과를 받습니다.
       세력내에서 개최한 대회의 효과는 매년 1월에 사라집니다.
    */
    const bool 우승자_특전여부 = true;

    // 유저 세력의 대회 강제참가 여부. 개최국이 AI의 세력이면서 유저 8인 플레이라면 유저 세력중 한 세력은 참가하지 못할 수 있음.
    const bool 플레이어_무술대회_참여여부 = false;     // 플레이어 세력이 무조건 무술대회에 참가하는가?(true : 무조건 참여, false : 랜덤참여)  
    const bool 플레이어_설전대회_참여여부 = false;     // 플레이어 세력이 무조건 설전대회에 참가하는가?

    const int 우승_상금 = 3000;             // 무술대회 우승 상금
    const int 우승_기교 = 1500;             // 설전대회 우승 기교
    const int 우승_공적 = 3000;             // 무술,설전 대회 우승 공적

    const int 준우승_상금 = 1000;           // 무술대회 준우승 상금
    const int 준우승_기교 = 500;           // 설전대회 준우승 기교
    const int 준우승_공적 = 1000;           // 무술,설전 대회 준우승 공적

    const int 자세력_우승_공적 = 1000;      // 자세력 대회 우승자 공적
    const int 자세력_준우승_공적 = 500;     // 자세력 대회 준우승자 공적

    const int 헌제_대회_경험치 = 40;         // 한황제가 개최하는 대회 참가자 경험치. 무술 = 통솔,무력   설전 = 지력, 정치
    const int 자체_대회_경험치 = 20;         // 한 세력내에서 자체적으로 개최하는 대회 참가자 경험치.

    // AI의 대회 출전 무장을 뽑기위해 무력에 더해줄 수치 입니다. 부가무력_무장 과 부가무력_수치의 순서가 일치해야 제대로 적용됩니다. 황충의 경우 별도로 계산합니다
    array<int> 부가무력_무장 = { 무장_항적, 무장_여포, 무장_관우, 무장_장비, 무장_조운, 무장_마초, 무장_허저};
    array<int> 부가무력_수치 = { 20, 10, 5, 5, 3, 3, 3};

    // AI의 대회 출전 무장을 선출하는 방식에 더해줄 점수 입니다. 최종 계산은 무력 + 부가무력 + 보물 점수 중 가장 높은 숫자를 지닌 무장이 선택됩니다.
    const int 긴무기_점수 = 5;
    const int 검_점수 = 3;
    const int 활_점수 = 3;
    const int 암기_점수 = 2;

    // AI의 설전 선별무장 성격 점수
    const int 설전_대담 = 6;
    const int 설전_소심 = 4;
    const int 설전_저돌 = 1;
    const int 설전_냉정 = 0;

    // AI의 설전 선별무장 보유화술점수. 서적을 소유하고 있을 경우에는 모든 화술점수를 얻습니다. 
    const int 설전_궤변 = 4;
    const int 설전_대갈 = 5;
    const int 설전_무시 = 1;
    const int 설전_진정 = 2;
    const int 설전_흥분 = 3;

    // ========================================================== 대회 우승자 특전 =======================================================

    const int 무술대회특전_최대사거리 = 1;
    const int 무술대회특전_최소발동_무력차 = 10;
    const int 무술대회특전_무력차_제수 = 3;       // 무력차에 나누어 줄 숫자입니다.

    const int 무술대회특전_기력감소_최소값 = 1;
    const int 무술대회특전_기력감소_최대값 = 10;

    array<int> 무술대회특전_면역특기 =
    {
        //특기_침착, 특기_규율
    };

    const int 설전대회특전_최대사거리 = 2;
    const int 설전대회특전_계략실행확률 = 100; // (0~100);

    const int 자체대회특전_기력회복 = 5;
    // ==================================================================================================================================
    // ==================================================================================================================================
    class RegionBuff
    {
        array<int> forceRegionBuff(도시_끝);                           // 세력별 확인용
        pk::point rb_checkPoint = pk::point(0, 0);                    // 지역이점 스크립트 적용 여부 체크
        array<array<pk::point>> dataPointArray(도시_끝);               // 세력별 data건물 위치 배열
        array<pk::point> barbarianDataArray(4);                       // 이민족 원군요청 데이터
        array<pk::point> competitionDataArray(2);                     // 한황제 대회 우승자 데이터  0 : 무술대회, 1 : 설전대회
        array<pk::point> singleCompetitionDataArray(도시_끝);         // 세력별 자세력 대회 우승자 데이터
        bool loadSuccess = false;
        array<array<pk::person@>> barbarianMooArray = 
        {
            {null, null, null, null, null, null, null, null, null, null}, 
            {null, null, null, null, null, null, null, null, null, null},
            {null, null, null, null, null, null, null, null, null, null},
            {null, null, null, null, null, null, null, null, null, null}
        };                                                              // 이민족 무장 재활용 배열
        pk::force@ hostForce;
        pk::list<pk::force@> validPlayerCompetitonList;                // 플레이어 참가 가능 세력 리스트
        pk::list<pk::force@> validAICompetitionList;                   // AI 참가 가능 세력 리스트
        int validForceCount = -1;
        pk::list<pk::person@> competitonParticipantList;               // 대회 참가무장

        RegionBuff()
        {
            pk::bind(102, pk::trigger102_t(Init));
            pk::bind(102, pk::trigger102_t(OnGameInit));            // 특기 설명 수정을 위해 추가
            pk::bind(104, pk::trigger104_t(OnScenarioEnd));
            pk::bind(107, pk::trigger107_t(UpdateDayStart));
            pk::bind(108, pk::trigger108_t(UpdateMonthStart));
            pk::bind(109, pk::trigger109_t(UpdateSeasonStart));
            pk::bind(110, pk::trigger110_t(UpdateYearStart));
            pk::bind(111, pk::trigger111_t(UpdateTurnStart));
            pk::bind(112, pk::trigger112_t(UpdateTurnEnd));
            pk::bind(171, pk::trigger171_t(UpdateUnitRemove));
            pk::bind(174, pk::trigger174_t(UpdateUnitTurnEnd));

            pk::reset_func(101);
            pk::set_func(101, pk::func101_t(func101));                // 101 징병 치안 증감
            pk::reset_func(102);
            pk::set_func(102, pk::func102_t(func102));                // 102 병기생산량
            pk::reset_func(111);
            pk::set_func(111, pk::func111_t(func111));                // 111 등용확률
            pk::reset_func(158);
            pk::set_func(158, pk::func158_t(func158));                // 158 본거지 발생 확률
            pk::reset_func(163);
            pk::set_func(163, pk::func163_t(func163));                // 163 부대 능력치
            pk::reset_func(168);
            pk::set_func(168, pk::func168_t(func168));                // 168 점령 후 처리
            pk::reset_func(205);
            pk::set_func(205, pk::func205_t(func205));                // 205 계략 소비 기력
            pk::reset_func(211);
            pk::set_func(211, pk::func211_t(func211));                // 211 건물의 공격 데미지
            pk::reset_func(220);
            pk::set_func(220, pk::func220_t(func220));                // 220 포로 확률

            AddRegionBuffHelpMenu();                                  // Shift 우클릭 지역이점 도움말 
            AddPrintRegionBuffMenu();                                 // Shift 우클릭 지역이점 현황 표시
            AddTradeMenu();                                           // 외국 교역 메뉴 추가
            AddrapprochementMenu();                                   // 이민족 교류 메뉴 추가
            AddSupportMenu();                                         // 이민족 지원요청 메뉴 추가
            AddCompetitionMenu();                                     // 대회개최 메뉴 추가
        }

        // 게임 최초 실행시 지역이점 적용여부 확인작업
        void Init()
        {
            ArrayInit();
            loadSuccess = true;
            BarbarianDataSetting();
            CompetitionDataSetting();
            if (true == 자세력_대회_개최여부)
            {
                SingleCompetitionDataSetting();                           // 기존 지역이점과 호환하기 위해 게임 시작할때 생성해줌
            }
            InitBarbarianMooArray();
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
            UpdateBarbarianForce();
        }

        // 새달 적용될 것
        void UpdateMonthStart()
        {
            ExecuteJiZhouLoyalty();
            ExecuteQingZhouPublicOrder();
            ExecuteJingBeiTech();
            UpdateBarbarianRelation();
            CheckDuelCompetition();
            CheckEloquenceCompetition();
        }

        // 새분기 적용될 것
        void UpdateSeasonStart()
        {
            ExecuteBarbarianSupport();
        }

        // 새해 적용될것
        void UpdateYearStart()
        {
            ResetSingleCompetitionWinner();
        }

        // 턴 시작시 적용될 것
        void UpdateTurnStart(pk::force@ force)
        {
            UpdateRelation(force);
            ExecuteBarbarianSkill(force);
            ExecuteKushanLevelThree(force);
            ExecuteBingZhouEnergy(force);
            UpdateAICompetition(force);
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

        // 지원보낸 이민족 부대 초기화 할때 쓰는 함수
        void UpdateUnitRemove(pk::unit@ unit, int type)
        {
            int forceId = unit.get_force_id();

            // 이민족 세력일 경우 패스
            if (forceId == 세력_오환 || forceId == 세력_강 || forceId == 세력_남만 || forceId == 세력_산월)
            {
                return; 
            }

            // 이민족 세력이 아니지만 이민족 무장일 경우 수동처리
            if (unit.leader >= 적장_시작 && unit.leader < 적장_끝)
            {
                pk::person@ barbarian = pk::get_person(unit.leader);
                pk::set_district(pk::get_person(unit.leader), -1);
                barbarian.mibun = 신분_없음;
            }
        }

        // 부대 행동 완료 시 적용될 것
        void UpdateUnitTurnEnd(pk::unit@ unit)
        {
            ExecuteParthianLevelThree(unit);
            ExecuteDuelPrivillage(unit);
            ExecuteEloquencePrivillage(unit);
            ExecuteSingleCompetitionPrivilage(unit);
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

                ExecuteAISupport(force);

                // AI의 외국 교역
                int targetId = AITrade(force);
                if (-1 != targetId)
                {
                    ExecuteTrade(force, targetId);
                }
            }
        }

        // 안식국 2단계 효과
        void ExecuteParthianLevelThree(pk::unit@ unit)
        {
            if (false == pk::is_alive(unit) || 부대상태_통상 != unit.status)
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
                            if (int(officers[i].loyalty) < 기주_지역이점_최대누적충성)
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

            // 등용확률이 0%가 아니면 20% 상승
            if (n > 0)
            {
                n = n + 형북_지역이점_등용상승;
            }
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
                    pk::add_tp(force, 형북_지역이점_기교획득 * 2, pos);
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
            array<pk::force@> forceArray = pk::list_to_array(forces);

            for (int i = 0; i < forceArray.length; ++i)
            {
                pk::force@ force = forceArray[i];
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

            for (int i = 0; i < 4; ++i)
            {
                barbarianDataArray[i] = pk::point(x + i, y);
            }

            x = 184;

            for (int i = 0; i < 2; ++i)
            {
                competitionDataArray[i] = pk::point(x + i, y);
            }

            x = 180;
            y = 198;
            xc = 0;
            yc = 0;

            for (int i = 0; i < 도시_끝; ++i)
            {
                xc = i % 6;
                yc = i / 6;
                singleCompetitionDataArray[i] = pk::point(x + xc, y - yc);
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

                    if (force.is_alive())
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

        // 세력과 이민족 우호 체크 후 동맹이 제대로 안되있을 경우 동맹 맺는 함수 (사용안함)
        void InitBarbarianAlly()
        {
            auto forces = pk::get_force_list();
            array<pk::force@> forceArray = pk::list_to_array(forces);

            for (int i = 0; i < forceArray.length; ++i)
            {
                pk::force@ force = forceArray[i];

                if (true == force.is_alive())
                {
                    if (GetRelationLevel(force, 우호_오환) > 0)
                    {
                        if (false == force.ally[세력_오환])
                        {
                            pk::set_ceasefire_timer(force, 세력_오환, 7200);
                            pk::set_ally(force, 세력_오환, true);
                            //pk::set_ally(pk::get_force(세력_오환), force.get_force_id(), true);
                        }
                    }

                    if (GetRelationLevel(force, 우호_강) > 0)
                    {
                        if (false == force.ally[세력_강])
                        {
                            pk::set_ceasefire_timer(force, 세력_강, 7200);
                            pk::set_ally(force, 세력_강, true);
                            //pk::set_ally(pk::get_force(세력_강), force.get_force_id(), true);
                        }
                    }

                    if (GetRelationLevel(force, 우호_남만) > 0)
                    {
                        if (false == force.ally[세력_남만])
                        {
                            pk::set_ceasefire_timer(force, 세력_남만, 7200);
                            pk::set_ally(force, 세력_남만, true);
                            //pk::set_ally(pk::get_force(세력_남만), force.get_force_id(), true);
                        }
                    }

                    if (GetRelationLevel(force, 우호_산월) > 0)
                    {
                        if (false == force.ally[세력_산월])
                        {
                            pk::set_ceasefire_timer(force, 세력_산월, 7200);
                            pk::set_ally(force, 세력_산월, true);
                            //pk::set_ally(pk::get_force(세력_산월), force.get_force_id(), true);
                        }
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

        // 한황실의 대회 우승자 데이터 생성
        void CompetitionDataSetting()
        {
            for (int j = 0; j < 2; ++j)
            {
                pk::point point = competitionDataArray[j];
                pk::building@ buildingCheck = pk::get_building(point);

                if (buildingCheck == null)
                {
                    pk::building@ building = pk::create_building(pk::get_facility(시설_석벽), point, -1);
                    if (j == 0)
                    {
                        building.hp = 무술대회_초기우승자;
                    }
                    else if (j == 1)
                    {
                        building.hp = 설전대회_초기우승자;
                    }
                    building.completed = true;
                }
            }
        }

        // 세력별 자체대회 우승자 데이터 생성
        void SingleCompetitionDataSetting()
        {
            for (int j = 0; j < 도시_끝; ++j)
            {
                pk::force@ force = pk::get_force(j);

                if (true == force.is_alive())
                {
                    pk::point point = singleCompetitionDataArray[j];
                    pk::building@ buildingCheck = pk::get_building(point);

                    if (buildingCheck == null)
                    {
                        pk::building@ building = pk::create_building(pk::get_facility(시설_석벽), point, -1);
                        building.hp = -1;
                        building.completed = true;
                    }
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

            if (true == 자세력_대회_개최여부)
            {
                pk::point point = singleCompetitionDataArray[forceId];
                pk::building@ buildingCheck = pk::get_building(point);

                if (buildingCheck == null)
                {
                    pk::building@ building = pk::create_building(pk::get_facility(시설_석벽), point, -1);
                    building.hp = -1;
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

            if (true == 자세력_대회_개최여부)
            {
                pk::point point = singleCompetitionDataArray[forceId];
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

        // 지역이점 현황 불러오기, 대회 우승자 출력
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

                    if (GetSingleCompetitionWinnerId(force.get_force_id()) != -1)
                    {
                        pk::person@ p = pk::get_person(GetSingleCompetitionWinnerId(force.get_force_id()));

                        if (p != null && true == p.is_alive() && force.get_force_id() == p.get_force_id())
                        {
                            pk::history_log(p.get_pos(), force.color, pk::u8encode(pk::format("세력대회 우승 : \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(p)))));
                        }
                    }
                }
            }

            if (GetCompetitionWinnerId(대회_무술) != -1)
            {
                pk::person@ p = pk::get_person(GetCompetitionWinnerId(대회_무술));
                if (p != null && true == p.is_alive())
                {
                    pk::history_log(p.get_pos(), pk::get_force(p.get_force_id()).color, pk::u8encode(pk::format("한실 무술대회 우승 : \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(p)))));
                }
            }

            if (GetCompetitionWinnerId(대회_설전) != -1)
            {
                pk::person@ p = pk::get_person(GetCompetitionWinnerId(대회_설전));
                if (p != null && true == p.is_alive())
                {
                    pk::history_log(p.get_pos(), pk::get_force(p.get_force_id()).color, pk::u8encode(pk::format("한실 설전대회 우승 : \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(p)))));
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

        // 개발 중 공적획득 (적용 안함)
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

                        pk::add_kouseki(officerArray[i], value / 2 );
                    }
                }
            }
        }

        void SetBarbarianForceData(int type, int day)
        {
            int index = -1;

            if (우호_오환 == type)
            {
                index = 0;
            }
            else if (우호_강 == type)
            {
                index = 1;
            }
            else if (우호_남만 == type)
            {
                index = 2;
            }
            else if (우호_산월 == type)
            {
                index = 3;
            }

            pk::point point = barbarianDataArray[index];
            pk::building@ data = pk::get_building(point);
            data.hp = day;
        }

        void UpdateBarbarianForce()
        {
            for (int i = 0; i < 4; ++i)
            {
                pk::point point = barbarianDataArray[i];
                pk::building@ data = pk::get_building(point);
                int barbarianType = -1;

                if (0 == i)
                {
                    barbarianType = 우호_오환;
                }
                else if (1 == i)
                {
                    barbarianType = 우호_강;
                }
                else if (2 == i)
                {
                    barbarianType = 우호_남만;
                }
                else if (3 == i)
                {
                    barbarianType = 우호_산월;
                }

                // 기한이 남았을 경우 차감
                if (data.hp % 100 > 0)
                {
                    data.hp -= 1;
                    
                    // 기한이 모두 소진되었을 경우 군세 삭제
                    if (data.hp % 100 == 0)
                    {
                        data.hp = 0;

                        ResetBarbarianUnits(barbarianType, 이민족_철군_기한);
                    }
                }
            }
        }

        bool IsActiveForce(int type)
        {
            if (type == 우호_오환)
            {
                pk::point point = barbarianDataArray[0];
                pk::building@ data = pk::get_building(point);

                if (data.hp <= 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }

            if (type == 우호_강)
            {
                pk::point point = barbarianDataArray[1];
                pk::building@ data = pk::get_building(point);

                if (data.hp <= 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }

            if (type == 우호_남만)
            {
                pk::point point = barbarianDataArray[2];
                pk::building@ data = pk::get_building(point);

                if (data.hp <= 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }

            if (type == 우호_산월)
            {
                pk::point point = barbarianDataArray[3];
                pk::building@ data = pk::get_building(point);

                if (data.hp <= 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }

            return false;
        }

        void SummonBarbarianForce(pk::force@ force, pk::city@ city, int barbarianOrder, int type, int count, int troops)
        {
            pk::force@ barbarianForce;
            switch (type)
            {
            case 우호_오환:
                @barbarianForce = pk::get_force(세력_오환);
                break;

            case 우호_강:
                @barbarianForce = pk::get_force(세력_강);
                break;

            case 우호_남만:
                @barbarianForce = pk::get_force(세력_남만);
                break;

            case 우호_산월:
                @barbarianForce = pk::get_force(세력_산월);
                break;
            }

            array<pk::point> posArray = pk::range(city.get_pos(), 4, 6);
            int length = 0;

            for (int i = 0; i < posArray.length; ++i)
            {
                pk::point pos = posArray[i];
                
                if (true == IsValidSummonPos(posArray[i]))
                {
                    length = length + 1;
                }
            }

            if (length == 0)
            {
                return;
            }

            array<pk::point> validPointArray(length);
            int start = 0;

            for (int i = 0; i < posArray.length; ++i)
            {
                if (true == IsValidSummonPos(posArray[i]))
                {
                    validPointArray[start] = posArray[i];
                    start = start + 1;
                }
            }
            
            array<pk::point> destPointArray = GetRandomValidPointArray(validPointArray, count);

            for (int i = 0; i < destPointArray.length; ++i)
            {
                CreateBarbarianUnit(force, type, pk::city_to_building(city), barbarianOrder, destPointArray[i], troops);
            }

            pk::history_log(city.get_pos(), barbarianForce.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x 부근에 \x1b[2x{}군\x1b[0x 출현", pk::u8decode(pk::get_name(city)), 교역대상_이름[type])));
        }

        array<pk::point> GetRandomValidPointArray(array<pk::point> source, int count)
        {
            int c = source.length;

            if (c <= count)
            {
                return source;
            }
            else
            {
                array<int> indexArray(count);
                // -1로 초기화
                for (int i = 0; i < indexArray.length; ++i)
                {
                    indexArray[i] = -1;
                }

                array<pk::point> destArray(count);
                int n = 0;

                while (true)
                {
                    int r = pk::rand(source.length);

                    // 중복 체크 후 중복이 아니면 포인트 배정
                    if (false == IsDuplicated(indexArray, r))
                    {
                        indexArray[n] = r;
                        destArray[n] = source[r];
                        n = n + 1;
                    }

                    // 모든 배열을 채울 경우 반복문 중단
                    if (n >= count)
                    {
                        break;
                    }
                }

                return destArray;
            }
        }

        // 지역배열 중복 체크
        bool IsDuplicated(array<int> indexArray, int source)
        {
            for (int i = 0; i < indexArray.length; ++i)
            {
                if(indexArray[i] == source)
                {
                    return true;
                }
            }

            return false;
        }

        void CreateBarbarianUnit(pk::force@ force, int type, pk::building@ building, int barbarianOrder, pk::point pos, int troops)
        {
            //int barbarianId;
            int mooArrayIndex = -1;
            int groundWeapon;
            int waterWeapon;
            if (우호_오환 == type)
            {
                //barbarianId = 무장_오환장수;
                mooArrayIndex = 0;
                groundWeapon = 병기_군마;
                waterWeapon = 병기_주가;
            }
            else if (우호_강 == type)
            {
                //barbarianId = 무장_강장수;
                mooArrayIndex = 1;
                groundWeapon = 병기_군마;
                waterWeapon = 병기_주가;
            }
            else if (우호_남만 == type)
            {
                //barbarianId = 무장_남만장수;
                mooArrayIndex = 2;
                if (pk::rand(100) > 49)
                {
                    groundWeapon = 병기_창;
                }
                else
                {
                    groundWeapon = 병기_극;
                }
                waterWeapon = 병기_투함;
            }
            else if (우호_산월 == type)
            {
                //barbarianId = 무장_산월장수;
                mooArrayIndex = 3;
                groundWeapon = 병기_극;
                waterWeapon = 병기_투함;
            }
            auto district = pk::get_district_list(force);
            pk::person@ bandit_person = GetValidBarbarianMoo(type);
            pk::set_district(bandit_person, district[0], building, 0);
            pk::add_loyalty(bandit_person, 255);
            //pk::set_district(bandit_person, force.get_force_id());
            //pk::set_force(pk::get_person(0), force, pk::get_person(1), 0);
            pk::unit@ bandit_unit = pk::create_unit(building, bandit_person, null, null, troops, groundWeapon, waterWeapon, 0, (troops * 9) / 10, pos);
            bandit_unit.energy = 100;
            pk::set_order(bandit_unit, barbarianOrder, building.get_pos());
        }

        bool IsValidSummonPos(pk::point pos)
        {
            if (false == pk::is_valid_pos(pos))
            {
                return false;
            }

            pk::hex@ hex = pk::get_hex(pos);

            if (true == hex.has_building)
            {
                return false;
            }

            if (true == hex.has_unit)
            {
                return false;
            }

            int terrain_id = hex.terrain;

            if (false == pk::is_valid_terrain_id(terrain_id))
            {
                return false;
            }

            if (false == pk::is_enabled_terrain(terrain_id))
            {
                return false;
            }

            if (true == pk::is_water_terrain(terrain_id))
            {
                return false;
            }

            return true;
        }

        /// <summary>
        /// 이민족 원군요청 가능 데이터. (-3 : 금 부족, -2 : 요청 가능한 도시 없음, -1 : 기교부족, 0 : 요청 가능한 세력 없음, 오환 가능 +1, 강 가능 +2, 남만 가능 +4, 산월 가능 +8)
        /// </summary>
        /// <param name="force"></param>
        /// <returns></returns>
        int GetSupportData(pk::force@ force)
        {
            int value = 0;
            bool isValidCity = true;
            pk::list<pk::city@> cityList;
            pk::list<pk::city@> validCityList;

            if (3 <= GetRelationLevel(force, 우호_오환))
            {
                if (false == IsActiveForce(우호_오환))
                {
                    if (force.tp < 이민족_원군요청_기교 && true == force.is_player())
                    {
                        return -1;
                    }
                    else
                    {
                        cityList.clear();
                        validCityList.clear();

                        for (int i = 0; i < 오환_영향력.length; ++i)
                        {
                            auto cityArr = GetZhoudCityArray(오환_영향력[i]);

                            for (int j = 0; j < cityArr.length; ++j)
                            {
                                cityList.add(pk::get_city(cityArr[j]));
                            }
                        }

                        validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
                    }

                    if (validCityList.count >= 1)
                    {
                        value += 1;
                    }
                    else
                    {
                        isValidCity = false;
                    }
                }
            }

            if (3 <= GetRelationLevel(force, 우호_강))
            {
                if (false == IsActiveForce(우호_강))
                {
                    if (force.tp < 이민족_원군요청_기교 && true == force.is_player())
                    {
                        return -1;
                    }
                    else
                    {
                        cityList.clear();
                        validCityList.clear();

                        for (int i = 0; i < 강_영향력.length; ++i)
                        {
                            auto cityArr = GetZhoudCityArray(강_영향력[i]);

                            for (int j = 0; j < cityArr.length; ++j)
                            {
                                cityList.add(pk::get_city(cityArr[j]));
                            }
                        }

                        validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
                    }

                    if (validCityList.count  >= 1)
                    {
                        value += 2;
                    }
                    else
                    {
                        isValidCity = false;
                    }
                }
            }
            
            if (3 <= GetRelationLevel(force, 우호_남만))
            {
                if (false == IsActiveForce(우호_남만))
                {
                    if (force.tp < 이민족_원군요청_기교 && true == force.is_player())
                    {
                        return -1;
                    }
                    else
                    {
                        cityList.clear();
                        validCityList.clear();

                        for (int i = 0; i < 남만_영향력.length; ++i)
                        {
                            auto cityArr = GetZhoudCityArray(남만_영향력[i]);

                            for (int j = 0; j < cityArr.length; ++j)
                            {
                                cityList.add(pk::get_city(cityArr[j]));
                            }
                        }

                        validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
                    }

                    if (validCityList.count >= 1)
                    {
                        value += 4;
                    }
                    else
                    {
                        isValidCity = false;
                    }
                }
            }

            if (3 <= GetRelationLevel(force, 우호_산월))
            {
                if (false == IsActiveForce(우호_산월))
                {
                    if (force.tp < 이민족_원군요청_기교 && true == force.is_player())
                    {
                        return -1;
                    }
                    else
                    {
                        cityList.clear();
                        validCityList.clear();

                        for (int i = 0; i < 산월_영향력.length; ++i)
                        {
                            auto cityArr = GetZhoudCityArray(산월_영향력[i]);

                            for (int j = 0; j < cityArr.length; ++j)
                            {
                                cityList.add(pk::get_city(cityArr[j]));
                            }
                        }

                        validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
                    }

                    if (validCityList.count >= 1)
                    {
                        value += 8;
                    }
                    else
                    {
                        isValidCity = false;
                    }
                }
            }

            if (0 == value && false == isValidCity)
            {
                return -2;
            }

            return value;
        }
        
        void ResetBarbarianUnits(int forceType, int removeType)
        {
            int forceId;
            string name = "";
            forceId = 교역대상_아이디[forceType];
            pk::force@ barbarianForce = pk::get_force(forceId);

            string s = "";

            if (removeType == 이민족_철군_동맹)
            {
                s = "철군 명령이 떨어졌다. 이만 돌아가야겠군";
            }
            else if (removeType == 이민족_철군_기한)
            {
                s = "약속한 기한이 지났으니 우리는 물러나도록 하겠소.";
                if (우호_오환 == forceType)
                {
                    name = pk::get_name(pk::get_person(무장_오환장수));
                }
                else if (우호_강 == forceType)
                {
                    name = pk::get_name(pk::get_person(무장_강장수));
                }
                else if (우호_남만 == forceType)
                {
                    name = pk::get_name(pk::get_person(무장_남만장수));
                }
                else if (우호_산월 == forceType)
                {
                    name = pk::get_name(pk::get_person(무장_산월장수));
                }
            }
            else if (removeType == 이민족_철군_진상)
            {
                s = "흥. 성의를 봐서 한번 봐주도록 할까.";
            }
            
            pk::list<pk::unit@> list = pk::get_unit_list();
            array<pk::unit@> unitArray = pk::list_to_array(list);

            if (unitArray.length > 0)
            {
                bool isDone = false;
                pk::point logPos;

                for (int i = 0; i < unitArray.length; ++i)
                {
                    if (true == unitArray[i].is_alive() && null != unitArray[i])
                    {
                        pk::unit@ unit = unitArray[i];
                        if (unit.leader >= 적장_시작 && unit.leader < 적장_끝)
                        {
                            // 적장의 이름이 이민족 무장 이름과 같은경우 체크
                            string barbarianName = pk::get_name(pk::get_person(unit.leader));
                            if (barbarianName == name)
                            {
                                if (false == isDone)
                                {
                                    logPos = unit.get_pos();
                                    pk::say(pk::u8encode(s), pk::get_person(unit.leader), unit);
                                    isDone = true;
                                }
                                pk::kill(unit);
                            }
                        }
                    }
                }

                if (true == isDone)
                {
                    // 철군 기한이 지났을때 이민족 부대가 남아있을 경우 메시지 출력
                    if (removeType == 이민족_철군_기한)
                    {
                        pk::message_box(pk::u8encode(pk::format("\x1b[2x{}군\x1b[0x이 철수했습니다.", 교역대상_이름[forceType])));
                    }

                    pk::history_log(logPos, barbarianForce.color, pk::u8encode(pk::format("\x1b[2x{}군\x1b[0x 퇴각", 교역대상_이름[forceType])));
                }
            }

            // 이민족과의 동맹으로 인한 철군인 경우에만 본거지 철거 실시
            if (이민족_철군_동맹 == removeType)
            {
                // 이 콜백은 도시 별로 호출되기 때문에 맵 상에 건물이 많을 수록 리스트로 접근하면 속도가 느려지므로 배열로 변환.
                array<pk::building@> arr = pk::list_to_array(pk::get_building_list());
            
                for (int j = 0; j < arr.length; j++)
                {
                    pk::building@ building = arr[j];
                    
                    if (building.facility == 시설_본거지1 || building.facility == 시설_본거지2)
                    {
                        if (building.get_force_id() == forceId && true == building.is_alive())
                        {
                            pk::kill(building);
                        }
                    }
                }
            }
        }

        pk::list<pk::city@> GetValidSupportCity(pk::force@ force, array<pk::city@> cityArray)
        {
            pk::list<pk::city@> forceCityList;
            pk::list<pk::city@> validCityList;

            for (int i = 0; i < cityArray.length; ++i)
            {
                pk::city@ city = cityArray[i];
        
                if (city.get_force_id() == force.get_force_id())
                {
                    forceCityList.add(city);
                    //validCityList.add(city);
                }
            }

            for (int i = 0; i < cityArray.length; ++i)
            {
                pk::city@ city = cityArray[i];

                // 자세력 소유 도시가 아닌 도시만 가능
                if (city.get_force_id() != force.get_force_id())
                {
                    // 동맹중인 세력에 공격요청 불가
                    if (true == pk::is_enemy(force, city))
                    {
                        for (int j = 0; j < forceCityList.count; ++j)
                        {
                            if (true == pk::has_neighbor(city, forceCityList[j].get_id()))
                            {
                                validCityList.add(city);
                                break;
                            }
                        }
                    }
                }
            }

            return validCityList;
        }

        bool IsValidBandit()
        {
            for (int person_id = 적장_시작; person_id < 적장_끝; person_id++)
            {
                pk::person@ person = pk::get_person(person_id);
                if (person.mibun == 신분_없음) return true;
                if (person.mibun == 신분_사망) return true;
            }

            return false;
        }

        pk::list<pk::city@> GetValidSupportCityList(pk::force@ force, int type)
        {
            pk::list<pk::city@> cityList;
            pk::list<pk::city@> validCityList;
            
            if (type == 우호_오환)
            {
                for (int i = 0; i < 오환_영향력.length; ++i)
                {
                    auto cityArr = GetZhoudCityArray(오환_영향력[i]);

                    for (int j = 0; j < cityArr.length; ++j)
                    {
                        cityList.add(pk::get_city(cityArr[j]));
                    }
                }

                validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
            }

            if (type == 우호_강)
            {
                for (int i = 0; i < 강_영향력.length; ++i)
                {
                    auto cityArr = GetZhoudCityArray(강_영향력[i]);

                    for (int j = 0; j < cityArr.length; ++j)
                    {
                        cityList.add(pk::get_city(cityArr[j]));
                    }
                }

                validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
            }

            if (type == 우호_남만)
            {
                for (int i = 0; i < 남만_영향력.length; ++i)
                {
                    auto cityArr = GetZhoudCityArray(남만_영향력[i]);

                    for (int j = 0; j < cityArr.length; ++j)
                    {
                        cityList.add(pk::get_city(cityArr[j]));
                    }
                }

                validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
            }

            if (type == 우호_산월)
            {
                for (int i = 0; i < 산월_영향력.length; ++i)
                {
                    auto cityArr = GetZhoudCityArray(산월_영향력[i]);

                    for (int j = 0; j < cityArr.length; ++j)
                    {
                        cityList.add(pk::get_city(cityArr[j]));
                    }
                }

                validCityList = GetValidSupportCity(force, pk::list_to_array(cityList));
            }

            return validCityList;
        }

        void ExecuteAISupport(pk::force@ force)
        {
            int year = pk::get_elapsed_years();
            int percentage = AI_이민족지원_기본확률;
            pk::person@ barbarianMoo;

            // 1년 이내에는 AI가 지원요청 하지 않음
            if (year < 1)
            {
                return;
            }
            else if (year < 3)
            {
                percentage += AI_이민족지원_추가확률;
            }
            else if (year < 5)
            {
                percentage += AI_이민족지원_추가확률;
            }
            else if (year < 7)
            {
                percentage += AI_이민족지원_추가확률;
            }
            else if (year < 9)
            {
                percentage += AI_이민족지원_추가확률;
            }

            pk::list<pk::city@> validCityList;
            int data = GetSupportData(force);
            int count = 0;

            if (data <= 0)
            {
                return;
            }

            if (data % 2 == 1)
            {
                count = count + 1;
            }
            // 강
            if ((data / 2) % 2 == 1)
            {
                count = count + 1;
            }
            // 남만
            if ((data / 4) % 2 == 1)
            {
                count = count + 1;
            }
            // 산월
            if ((data / 8) % 2 == 1)
            {
                count = count + 1;
            }

            if (count <= 0)
            {
                return;
            }

            array<int> barbarianArray(count);
            count = 0;

            if (data % 2 == 1)
            {
                barbarianArray[count] = 우호_오환;
                count = count + 1;
            }
            // 강
            if ((data / 2) % 2 == 1)
            {
                barbarianArray[count] = 우호_강;
                count = count + 1;
            }
            // 남만
            if ((data / 4) % 2 == 1)
            {
                barbarianArray[count] = 우호_남만;
                count = count + 1;
            }
            // 산월
            if ((data / 8) % 2 == 1)
            {
                barbarianArray[count] = 우호_산월;
                count = count + 1;
            }

            int r = pk::rand(count);
            int targetForceId = barbarianArray[r];
            validCityList = GetValidSupportCityList(force, targetForceId);
            if (validCityList.count <= 0)
            {
                return;
            }
            validCityList.shuffle();
            pk::city@ city = validCityList[0];
            bool isPlayer = false;
            // 목표 도시가 유저 도시일 경우 유저 도시 숫자의 1.5배보다 도시 수가 적을경우 확률 두배
            if (true == pk::get_force(city.get_force_id()).is_player())
            {
                int playerCityCount = pk::get_city_list(pk::get_force(city.get_force_id())).count;
                int aiCityCount = pk::get_city_list(force).count;

                if (playerCityCount * 3 > aiCityCount * 2)
                {
                    percentage = percentage * 2;
                }

                isPlayer = true;
            }

            if (true == pk::rand_bool(percentage))
            {
                if (targetForceId == 우호_오환)
                {
                    @barbarianMoo = pk::get_person(무장_오환두목);
                }
                else if (targetForceId == 우호_강)
                {
                    @barbarianMoo = pk::get_person(무장_강두목);
                }
                else if (targetForceId == 우호_남만)
                {
                    @barbarianMoo = pk::get_person(무장_남만두목);
                }
                else if (targetForceId == 우호_산월)
                {
                    @barbarianMoo = pk::get_person(무장_산월두목);
                }

                // 유저 도시에 등장할 경우 메시지 출력
                if (true == isPlayer)
                {
                    if (true == pk::rand_bool(50))
                    {
                        pk::message_box(pk::u8encode(pk::format("출진의 북을 울려라. \x1b[1x{}\x1b[0x에 쥐새끼 한마리도 남기지 마라!", pk::u8decode(pk::get_name(city)))), barbarianMoo);
                    }
                    else
                    {
                        pk::message_box(pk::u8encode("개인적인 원한은 없네만 당신네들이 너무 거슬려서 말이지. 흐흐흐..."), barbarianMoo);
                    }
                }
                SetBarbarianForceData(targetForceId, 이민족_지속기간);
                SummonBarbarianForce(force, city, 부대임무_정복, targetForceId, GetBarbarianSupportUnitCount(), GetBarbarianSupportUnitTroops());
            }

            validCityList.clear();
        }

        int GetBarbarianSupportUnitCount()
        {
            int year = pk::get_elapsed_years();
    
            if (year <= 0)
            {
                return 2;
            }
            else if (year <= 2)
            {
                return 3;
            }
            else if (year <= 4)
            {
                return 4;
            }
            else if (year <= 6)
            {
                return 5;
            }
            else if (year <= 8)
            {
                return 6;
            }
            
            return 7;
        }

        int GetBarbarianSupportUnitTroops()
        {
            int year = pk::get_elapsed_years();

            if (year <= 1)
            {
                return 3000;
            }
            else if (year <= 3)
            {
                return 4000;
            }
            else if (year <= 5)
            {
                return 5000;
            }
            else if (year <= 7)
            {
                return 6000;
            }
            else if (year <= 9)
            {
                return 7000;
            }

            return 8000;
        }

        void InitBarbarianMooArray()
        {
            for (int i = 0; i < 4; ++i)
            {
                for (int j = 0; j < 10; ++j)
                {
                    pk::person@ bandit_person;

                    if (i == 0)
                    {
                        @bandit_person = pk::create_bandit(pk::get_person(무장_오환장수));
                    }
                    else if (i == 1)
                    {
                        @bandit_person = pk::create_bandit(pk::get_person(무장_강장수));
                    }
                    else if (i == 2)
                    {
                        @bandit_person = pk::create_bandit(pk::get_person(무장_남만장수));
                    }
                    else if (i == 3)
                    {
                        @bandit_person = pk::create_bandit(pk::get_person(무장_산월장수));
                    }
                    bandit_person.mibun = 신분_없음;
                    @barbarianMooArray[i][j] = bandit_person;
                }
            }
        }

        pk::person@ GetValidBarbarianMoo(int type)
        {
            int arrayIndex = -1;

            if (우호_오환 == type)
            {
                arrayIndex = 0;
            }
            else if (우호_강 == type)
            {
                arrayIndex = 1;
            }
            else if (우호_남만 == type)
            {
                arrayIndex = 2;
            }
            else if (우호_산월 == type)
            {
                arrayIndex = 3;
            }

            for (int i = 0; i < 10; ++i)
            {
                pk::person@ moo = barbarianMooArray[arrayIndex][i];
                
                if (moo.mibun == 신분_없음 || moo.mibun == 신분_사망)
                {
                    moo.mibun == 신분_일반;
                    return moo;
                }
            }

            return null;
        }

        void CheckDuelCompetition()
        {
            // 월체크
            if (pk::get_month() != 대회_개최시기_무술)
            {
                return;
            }

            // 년도체크
            int year = pk::get_year();

            if (홀수년도 == 대회_개최년도_무술 && year % 2 == 0)
            {
                return;
            }
            else if (짝수년도 == 대회_개최년도_무술 && year % 2 == 1)
            {
                return;
            }
            else if (매년 == 대회_개최년도_무술)
            {
                // 통과
            }

            // 개최여부 파정
            bool isRun = false;

            if (대회_항상개최 == 대회_개최여부)
            {
                isRun = true;
            }
            else if (대회_개최안함 == 대회_개최여부)
            {
               
            }
            else if (대회_랜덤 == 대회_개최여부)
            {
                if (true == pk::rand_bool(대회_랜덤확률))
                {
                    isRun = true;
                }
            }

            if (true == isRun)
            {
                ExecuteCompetition(대회_무술);
            }
        }

        void CheckEloquenceCompetition()
        {
            // 월체크
            if (pk::get_month() != 대회_개최시기_설전)
            {
                return;
            }

            // 년도체크
            int year = pk::get_year();

            if (홀수년도 == 대회_개최년도_설전 && year % 2 == 0)
            {
                return;
            }
            else if (짝수년도 == 대회_개최년도_설전 && year % 2 == 1)
            {
                return;
            }
            else if (매년 == 대회_개최년도_설전)
            {
                // 통과
            }

            // 개최여부 파정
            bool isRun = false;

            if (대회_항상개최 == 대회_개최여부)
            {
                isRun = true;
            }
            else if (대회_개최안함 == 대회_개최여부)
            {

            }
            else if (대회_랜덤 == 대회_개최여부)
            {
                if (true == pk::rand_bool(대회_랜덤확률))
                {
                    isRun = true;
                }
            }

            if (true == isRun)
            {
                ExecuteCompetition(대회_설전);
            }
        }

        void ExecuteCompetition(int type)
        {
            //초기화
            bool isProtecting = false;
            @hostForce = null;
            validAICompetitionList.clear();
            validPlayerCompetitonList.clear();              
            competitonParticipantList.clear();
            validForceCount = 0;
            SetCompetitionWinner(-1, type);

            pk::person@ Emperor = pk::get_person(pk::get_scenario().emperor);
            
            // 황제가 죽었거나 없을 경우 패스
            if (null == Emperor)
            {
                return;
            }
            else if (Emperor.mibun == 신분_사망)
            {
                return;
            }

            for (int i = 0; i < 도시_끝; ++i)
            {
                pk::force@ force = pk::get_force(i);

                if (true == force.is_alive())
                {
                    // 황제 보유국 유무 체크
                    if (true == pk::is_protecting_the_emperor(force))
                    {
                        // 황제는 보호받는 중임
                        isProtecting = true;

                        // 황제 보유국의 참가여부 체크
                        if (true == IsExistQualification(force, type, 대회_8강이상))
                        {
                            @hostForce = force;
                            validForceCount++;
                        }

                        continue;
                    }
                    else
                    {
                        // 황제 옹립 안하면서 국호 있으면 패스
                        if (force.kokugou != -1)
                        {
                            continue;
                        }
                    }

                    // 자격요건 검사
                    if (false == IsExistQualification(force, type, 대회_8강이상))
                    {
                        continue;
                    }

                    validForceCount++;

                    if (true == force.is_player())
                    {
                        validPlayerCompetitonList.add(force);
                    }
                    else
                    {
                        validAICompetitionList.add(force);
                    }
                }
            }

            // 황제를 보호중인 세력이 없을경우 패스
            if (false == isProtecting)
            {
                return;
            }
            
            // 자격요건을 충족하는 세력이 20개 이상이면 16강부터 시작
            if (validForceCount >= 20)
            {
                validForceCount = 16;
            }
            // 8 ~ 19 사이면 8강 시작
            else if (validForceCount >= 8)
            {
                validForceCount = 8;
            }
            // 7세력 이하인 경우
            else
            {
                if (true == 대회_4세력개최여부)
                {
                    InspectFourCountryCompetition(type);
                    // 4세력 이상이면 4세력 대회 개최
                    if (validForceCount >= 4)
                    {
                        validForceCount = 4; 
                    }
                    // 그 이하면 패스
                    else
                    {
                        return;
                    }
                }
                // 4세력 개최여부가 불가면 패스
                else
                {
                    return;
                }
            }

            if (대회_무술 == type)
            {
                pk::scene(pk::scene_t(DuelCompetitonScene));
            }

            else if (대회_설전 == type)
            {
                pk::scene(pk::scene_t(EloquenceCompetitionScene));
            }
        }

        void InspectFourCountryCompetition(int type)
        {
            //bool isProtecting = false;
            @hostForce = null;
            validAICompetitionList.clear();
            validPlayerCompetitonList.clear();
            competitonParticipantList.clear();
            validForceCount = 0;
            //SetCompetitionWinner(-1, type);

            pk::person@ Emperor = pk::get_person(pk::get_scenario().emperor);

            // 황제가 죽었거나 없을 경우 패스
            if (null == Emperor)
            {
                return;
            }
            else if (Emperor.mibun == 신분_사망)
            {
                return;
            }

            for (int i = 0; i < 도시_끝; ++i)
            {
                pk::force@ force = pk::get_force(i);

                if (true == force.is_alive())
                {
                    // 황제 보유국 유무 체크
                    if (true == pk::is_protecting_the_emperor(force))
                    {
                        // 황제는 보호받는 중임
                        //isProtecting = true;

                        // 황제 보유국의 참가여부 체크
                        if (true == IsExistQualification(force, type, 대회_4강))
                        {
                            @hostForce = force;
                            validForceCount++;
                        }

                        continue;
                    }
                    else
                    {
                        // 황제 옹립 안하면서 국호 있으면 패스
                        if (force.kokugou != -1)
                        {
                            continue;
                        }
                    }

                    // 자격요건 검사
                    if (false == IsExistQualification(force, type, 대회_4강))
                    {
                        continue;
                    }

                    validForceCount++;

                    if (true == force.is_player())
                    {
                        validPlayerCompetitonList.add(force);
                    }
                    else
                    {
                        validAICompetitionList.add(force);
                    }
                }
            }
        }

        // 무술대회 씬
        void DuelCompetitonScene()
        {
            pk::person@ Emperor = pk::get_person(pk::get_scenario().emperor);
            array<pk::force@> forceArray = GetParticipatingForceArray(대회_무술);

            string ment0 = pk::format("\x1b[2x무술대회\x1b[0x를 개최하도록 하겠소. 참가하는 세력은 \x1b[2x{}\x1b[0x,", pk::u8decode(pk::get_name(forceArray[0])));
            pk::person@ winner = null;
            pk::person@ runnerUp = null;

            pk::message_box(pk::u8encode("황제로부터 \x1b[2x무술대회\x1b[0x를 개최한다는 칙서가 내려왔습니다."));
            pk::move_screen(Emperor.get_pos());
            
            pk::fade(0);
            pk::sleep();
            pk::background(1);
            pk::fade(255);

            if (4 == validForceCount)
            {
                ment0 = ment0 + pk::format(" \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x의 세력이오.", pk::u8decode(pk::get_name(forceArray[1])), pk::u8decode(pk::get_name(forceArray[2])), pk::u8decode(pk::get_name(forceArray[3])));
                pk::message_box(pk::u8encode(ment0), Emperor);
            }
            else if (8 == validForceCount)
            {
                string ment1 = pk::format("\x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(forceArray[1])), pk::u8decode(pk::get_name(forceArray[2])), pk::u8decode(pk::get_name(forceArray[3])), pk::u8decode(pk::get_name(forceArray[4])), pk::u8decode(pk::get_name(forceArray[5])), pk::u8decode(pk::get_name(forceArray[6])), pk::u8decode(pk::get_name(forceArray[7])));
                pk::message_box(pk::u8encode(ment0), Emperor);
                ment1 = ment1 + "의 세력이오";
                pk::message_box(pk::u8encode(ment1), Emperor);
            }
            else if(16 == validForceCount)
            {
                string ment1 = pk::format("\x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(forceArray[1])), pk::u8decode(pk::get_name(forceArray[2])), pk::u8decode(pk::get_name(forceArray[3])), pk::u8decode(pk::get_name(forceArray[4])), pk::u8decode(pk::get_name(forceArray[5])), pk::u8decode(pk::get_name(forceArray[6])), pk::u8decode(pk::get_name(forceArray[7])));
                pk::message_box(pk::u8encode(ment0), Emperor);
                pk::message_box(pk::u8encode(ment1), Emperor);
                ment1 = pk::format("그리고 \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x의 세력이오", pk::u8decode(pk::get_name(forceArray[8])), pk::u8decode(pk::get_name(forceArray[9])), pk::u8decode(pk::get_name(forceArray[10])), pk::u8decode(pk::get_name(forceArray[11])), pk::u8decode(pk::get_name(forceArray[12])), pk::u8decode(pk::get_name(forceArray[13])), pk::u8decode(pk::get_name(forceArray[14])), pk::u8decode(pk::get_name(forceArray[15])));
                pk::message_box(pk::u8encode(ment1), Emperor);
            }
            
            int requireCount = 1;

            if (4 == validForceCount)
            {
                requireCount = 2;
            }

            // 참가무장 선발
            for (int i = 0; i < forceArray.length; ++i)
            {
                auto list = GetCompetitionPersonList(forceArray[i], 대회_무술, false);
                auto validList = GetSortedCompetitionPersonList(list, 무장능력_무력);
                if (false == forceArray[i].is_player())
                {
                    for (int i = 0; i < requireCount; ++i)
                    {
                        competitonParticipantList.add(validList[i]);
                    }
                }
                else
                {
                    pk::message_box(pk::u8encode("무술대회에 참가할 무장을 선택해주십시오."));
                    pk::list<pk::person@> person_sel = pk::person_selector(pk::u8encode("무장 선택"), pk::u8encode("무술대회에 참가할 무장을 선택합니다.)"), validList, requireCount, requireCount);
                    if (person_sel.count <= 0)
                    {
                        pk::message_box(pk::u8encode("무장을 선택을 취소했습니다. 자동으로 무장이 선택됩니다."));

                        for (int i = 0; i < requireCount; ++i)
                        {
                            competitonParticipantList.add(validList[i]);
                        }
                    }
                    else
                    {
                        for (int i = 0; i < requireCount; ++i)
                        {
                            competitonParticipantList.add(person_sel[i]);
                        }
                    }
                }
            }

            pk::fade(0);
            pk::sleep();
            pk::background(57);
            pk::fade(255);

            array<pk::person@> backUpArray = pk::list_to_array(competitonParticipantList);
            RunDuelCompetition(competitonParticipantList, winner, runnerUp, false);

            pk::fade(0);
            pk::sleep();
            pk::background(19);
            pk::fade(255);
            pk::play_se(10);
            pk::message_box(pk::u8encode(pk::format("우승자는 \x1b[2x{}\x1b[0x인가. 그대야 말로 \x1b[1x천하무쌍\x1b[0x이란 말에 걸맞소. 앞으로도 더욱 단련에 힘쓰도록 하시오.", pk::u8decode(pk::get_name(winner)))), Emperor);
            pk::message_box(pk::u8encode("이건 내가 그대에게 내리는 포상이오."), Emperor);
            pk::message_box(pk::u8encode("영광이옵니다."), winner);
            pk::building@ winnerBuilding = pk::get_building(winner.location);
            pk::add_gold(winnerBuilding, 우승_상금, true);
            pk::add_kouseki(winner, 우승_공적);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x상금\x1b[0x \x1b[1x{}\x1b[0x을 받고 그 명성으로 \n\x1b[2x공적\x1b[0x이 \x1b[1x{}\x1b[0x만큼 올랐습니다", 우승_상금, 우승_공적)));
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에게도 포상을 내리겠소.", pk::u8decode(pk::get_name(runnerUp)))), Emperor);
            pk::message_box(pk::u8encode("영광이옵니다."), runnerUp);
            pk::building@ runnerUpBuilding = pk::get_building(runnerUp.location);
            pk::add_gold(runnerUpBuilding, 준우승_상금, true);
            pk::add_kouseki(runnerUp, 준우승_공적);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x상금\x1b[0x \x1b[1x{}\x1b[0x을 받고 그 명성으로 \n\x1b[2x공적\x1b[0x이 \x1b[1x{}\x1b[0x만큼 올랐습니다", 준우승_상금, 준우승_공적)));
            pk::message_box(pk::u8encode("이것으로 대회를 폐하겠소."), Emperor);
            pk::play_se(6);
            pk::message_box(pk::u8encode("대회에 참가한 모든 무장의 통솔과 무력 경험치가 상승했습니다."));
            for (int i = 0; i < backUpArray.length; ++i)
            {
                pk::person@ p = backUpArray[i];
                p.stat_exp[무장능력_통솔] = p.stat_exp[무장능력_통솔] + 헌제_대회_경험치;
                p.stat_exp[무장능력_무력] = p.stat_exp[무장능력_무력] + 헌제_대회_경험치;
            }
            SetCompetitionWinner(winner.get_id(), 대회_무술);
            pk::history_log(winner.get_pos(), pk::get_force(winner.get_force_id()).color, pk::u8encode(pk::format("\x1b[2x{}\x1b[0x, \x1b[1x무술대회\x1b[0x 우승", pk::u8decode(pk::get_name(winner)))));
            // 퇴장 
            pk::fade(0);
            pk::sleep();
            pk::background(-1);
            pk::fade(255);
        }

        void RunDuelCompetition(pk::list<pk::person@> personList, pk::person@ &winner, pk::person@ &runnerUp, bool isSingleCompetition)
        {
            // 4세력 2무장일 경우 순번을 섞어준다
            if (4 == validForceCount)
            {
                pk::person@ temp = personList[7];
                @personList[7] = personList[1];
                @personList[1] = temp;

                @temp = personList[5];
                @personList[5] = personList[3];
                @personList[3] = temp;

                @temp = personList[7];
                @personList[7] = personList[5];
                @personList[5] = temp;
            }

            pk::person@ moo = pk::get_person(무장_병사);
            int remain = personList.count;
            int round = 1;

            while (remain > 2)
            {
                pk::list<pk::person@> list;
                int n = 1;

                for (int i = 0; i < personList.count; ++i)
                {
                    pk::person@ p1 = personList[i];
                    pk::person@ p2 = personList[i + 1];
                    pk::message_box(pk::u8encode(pk::format("{}회전 {}경기에 참가할 무장은 \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x님 입니다.", round, n, pk::u8decode(pk::get_name(p1)), pk::u8decode(pk::get_name(p2)))), moo);
                    bool c1 = false;                            // 무장1 조종여부
                    bool c2 = false;                            // 무장2 조종여부
                    bool skip = false;

                    if (true == isSingleCompetition)
                    {
                        skip = true;
                    }
                    else if (true == personList[i].is_player() && true == personList[i + 1].is_player())
                    {
                        skip = true;
                    }

                    if (false == skip)
                    {
                        if (true == personList[i].is_player())
                        {
                            c1 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 경기를 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[i])))));
                        }

                        if (true == personList[i + 1].is_player())
                        {
                            c2 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 경기를 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[i + 1])))));
                        }
                    }
                                                                                        // 1 조종, 2 조종, 관전선택여부
                    pk::int_bool win = pk::duel(null, null, p1, null, null, p2, null, null, c1, c2, 0, true);
                    list.add(personList[i + win.first]);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode(pk::format("{}경기 승자는 \x1b[2x{}\x1b[0x입니다.", n, pk::u8decode(pk::get_name(personList[i + win.first])))));

                    i = i + 1;
                    n = n + 1;
                }

                personList.clear();
                personList = list;
                remain = personList.count;
                round++;
            }

            pk::message_box(pk::u8encode(pk::format("결승은 \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x님의 경기입니다.", pk::u8decode(pk::get_name(personList[0])), pk::u8decode(pk::get_name(personList[1])))), moo);
            
            bool c1 = false;                            // 무장1 조종여부
            bool c2 = false;                            // 무장2 조종여부
            bool skip = false;

            if (true == isSingleCompetition)
            {
                skip = true;
            }
            else if (true == personList[0].is_player() && true == personList[1].is_player())
            {
                skip = true;
            }

            if (false == skip)
            {
                if (true == personList[0].is_player())
                {
                    c1 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 경기를 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[0])))));
                }

                if (true == personList[1].is_player())
                {
                    c2 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 경기를 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[1])))));
                }
            }
                                                                                                        // 1 조종, 2 조종,   관전여부
            pk::int_bool win = pk::duel(null, null, personList[0], null, null, personList[1], null, null, c1, c2, 0, true);

            @winner = personList[win.first];
            @runnerUp = personList[(win.first + 1) % 2];
        }


        // 설전대회 씬
        void EloquenceCompetitionScene()
        {
            pk::person@ Emperor = pk::get_person(pk::get_scenario().emperor);
            array<pk::force@> forceArray = GetParticipatingForceArray(대회_설전);

            string ment0 = pk::format("\x1b[2x설전대회\x1b[0x를 개최하도록 하겠소. 참가하는 세력은 \x1b[2x{}\x1b[0x,", pk::u8decode(pk::get_name(forceArray[0])));
            pk::person@ winner = null;
            pk::person@ runnerUp = null;

            pk::message_box(pk::u8encode("황제로부터 \x1b[2x설전대회\x1b[0x를 개최한다는 칙서가 내려왔습니다."));
            pk::move_screen(Emperor.get_pos());

            pk::fade(0);
            pk::sleep();
            pk::background(1);
            pk::fade(255);

            if (4 == validForceCount)
            {
                ment0 = ment0 + pk::format(" \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x의 세력이오", pk::u8decode(pk::get_name(forceArray[1])), pk::u8decode(pk::get_name(forceArray[2])), pk::u8decode(pk::get_name(forceArray[3])));
                pk::message_box(pk::u8encode(ment0), Emperor);
            }
            else if (8 == validForceCount)
            {
                string ment1 = pk::format("\x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(forceArray[1])), pk::u8decode(pk::get_name(forceArray[2])), pk::u8decode(pk::get_name(forceArray[3])), pk::u8decode(pk::get_name(forceArray[4])), pk::u8decode(pk::get_name(forceArray[5])), pk::u8decode(pk::get_name(forceArray[6])), pk::u8decode(pk::get_name(forceArray[7])));
                pk::message_box(pk::u8encode(ment0), Emperor);
                ment1 = ment1 + "의 세력이오";
                pk::message_box(pk::u8encode(ment1), Emperor);
            }
            else if (16 == validForceCount)
            {
                string ment1 = pk::format("\x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x", pk::u8decode(pk::get_name(forceArray[1])), pk::u8decode(pk::get_name(forceArray[2])), pk::u8decode(pk::get_name(forceArray[3])), pk::u8decode(pk::get_name(forceArray[4])), pk::u8decode(pk::get_name(forceArray[5])), pk::u8decode(pk::get_name(forceArray[6])), pk::u8decode(pk::get_name(forceArray[7])));
                pk::message_box(pk::u8encode(ment0), Emperor);
                pk::message_box(pk::u8encode(ment1), Emperor);
                ment1 = pk::format("그리고 \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x의 세력이오", pk::u8decode(pk::get_name(forceArray[8])), pk::u8decode(pk::get_name(forceArray[9])), pk::u8decode(pk::get_name(forceArray[10])), pk::u8decode(pk::get_name(forceArray[11])), pk::u8decode(pk::get_name(forceArray[12])), pk::u8decode(pk::get_name(forceArray[13])), pk::u8decode(pk::get_name(forceArray[14])), pk::u8decode(pk::get_name(forceArray[15])));
                pk::message_box(pk::u8encode(ment1), Emperor);
            }

            int requireCount = 1;

            if (4 == validForceCount)
            {
                requireCount = 2;
            }

            // 참가무장 선발
            for (int i = 0; i < forceArray.length; ++i)
            {
                auto list = GetCompetitionPersonList(forceArray[i], 대회_설전, false);
                auto validList = GetSortedCompetitionPersonList(list, 무장능력_지력);

                if (false == forceArray[i].is_player())
                {
                    for (int i = 0; i < requireCount; ++i)
                    {
                        competitonParticipantList.add(validList[i]);
                    }
                }
                else
                {
                    pk::message_box(pk::u8encode("설전대회에 참가할 무장을 선택해주십시오."));
                    pk::list<pk::person@> person_sel = pk::person_selector(pk::u8encode("무장 선택"), pk::u8encode("설전대회에 참가할 무장을 선택합니다.)"), validList, requireCount, requireCount);
                    if (person_sel.count <= 0)
                    {
                        pk::message_box(pk::u8encode("무장을 선택을 취소했습니다. 자동으로 무장이 선택됩니다."));
                        
                        for (int i = 0; i < requireCount; ++i)
                        {
                            competitonParticipantList.add(validList[i]);
                        }
                    }
                    else
                    {
                        for (int i = 0; i < requireCount; ++i)
                        {
                            competitonParticipantList.add(person_sel[i]);
                        }
                    }
                }
            }

            pk::fade(0);
            pk::sleep();
            pk::background(37);
            pk::fade(255);

            array<pk::person@> backUpArray = pk::list_to_array(competitonParticipantList);
            RunEloquenceCompetition(competitonParticipantList, winner, runnerUp, false);

            pk::fade(0);
            pk::sleep();
            pk::background(19);
            pk::fade(255);
            pk::play_se(10);
            pk::message_box(pk::u8encode(pk::format("우승자는 \x1b[2x{}\x1b[0x인가. 그대야 말로 \x1b[1x천하기재\x1b[0x란 말에 걸맞군. 앞으로의 활약도 기대하겠소.", pk::u8decode(pk::get_name(winner)))), Emperor);
            pk::message_box(pk::u8encode("이건 내가 그대에게 내리는 포상이오."), Emperor);
            pk::message_box(pk::u8encode("영광이옵니다."), winner);
            pk::add_tp(pk::get_force(winner.get_force_id()), 우승_기교 * 2, Emperor.get_pos());
            pk::add_kouseki(winner, 우승_공적);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x기교\x1b[0x \x1b[1x{}\x1b[0x을 받고 그 명성으로 \n\x1b[2x공적\x1b[0x이 \x1b[1x{}\x1b[0x만큼 올랐습니다.", 우승_기교, 우승_공적)));
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에게도 포상을 내리겠소.", pk::u8decode(pk::get_name(runnerUp)))), Emperor);
            pk::message_box(pk::u8encode("영광이옵니다."), runnerUp);
            pk::add_tp(pk::get_force(runnerUp.get_force_id()), 준우승_기교 * 2, Emperor.get_pos());
            pk::add_kouseki(runnerUp, 준우승_공적);
            pk::message_box(pk::u8encode(pk::format("\x1b[2x기교\x1b[0x \x1b[1x{}\x1b[0x을 받고 그 명성으로 \n\x1b[2x공적\x1b[0x이 \x1b[1x{}\x1b[0x만큼 올랐습니다.", 준우승_기교, 준우승_공적)));
            pk::message_box(pk::u8encode("이것으로 대회를 폐하겠소."), Emperor);
            pk::play_se(6);
            pk::message_box(pk::u8encode("대회에 참가한 모든 무장의 지력과 정치 경험치가 상승했습니다."));
            for (int i = 0; i < backUpArray.length; ++i)
            {
                pk::person@ p = backUpArray[i];
                p.stat_exp[무장능력_지력] = p.stat_exp[무장능력_지력] + 헌제_대회_경험치;
                p.stat_exp[무장능력_정치] = p.stat_exp[무장능력_정치] + 헌제_대회_경험치;
            }
            SetCompetitionWinner(winner.get_id(), 대회_설전);
            pk::history_log(winner.get_pos(), pk::get_force(winner.get_force_id()).color, pk::u8encode(pk::format("\x1b[2x{}\x1b[0x, \x1b[1x설전대회\x1b[0x 우승", pk::u8decode(pk::get_name(winner)))));

            // 퇴장 
            pk::fade(0);
            pk::sleep();
            pk::background(-1);
            pk::fade(255);
        }

        void RunEloquenceCompetition(pk::list<pk::person@> personList, pk::person@& winner, pk::person@& runnerUp, bool isSingleCompetition)
        {
            // 4세력 2무장일 경우 순번을 섞어준다
            if (4 == validForceCount)
            {
                pk::person@ temp = personList[7];
                @personList[7] = personList[1];
                @personList[1] = temp;

                @temp = personList[5];
                @personList[5] = personList[3];
                @personList[3] = temp;

                @temp = personList[7];
                @personList[7] = personList[5];
                @personList[5] = temp;
            }

            pk::person@ moo = pk::get_person(무장_문관);
            int remain = personList.count;
            int round = 1;

            while (remain > 2)
            {
                pk::list<pk::person@> list;
                int n = 1;

                for (int i = 0; i < personList.count; ++i)
                {
                    pk::person@ p1 = personList[i];
                    pk::person@ p2 = personList[i + 1];
                    pk::message_box(pk::u8encode(pk::format("{}회전 {}경기에 참가할 무장은 \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x님 입니다.", round, n, pk::u8decode(pk::get_name(p1)), pk::u8decode(pk::get_name(p2)))), moo);
                    bool c1 = false;                            // 무장1 조종여부
                    bool c2 = false;                            // 무장2 조종여부
                    bool skip = false;

                    if (true == isSingleCompetition)
                    {
                        skip = true;
                    }
                    else if (true == personList[i].is_player() && true == personList[i + 1].is_player())
                    {
                        skip = true;
                    }

                    if (false == skip)
                    {
                        if (true == personList[i].is_player())
                        {
                            c1 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 설전을 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[i])))));
                        }

                        if (true == personList[i + 1].is_player())
                        {
                            c2 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 설전을 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[i + 1])))));
                        }
                    }
                                                       // 1 조종, 2 조종, 관전선택여부
                    pk::int_int_bool win = pk::debate(p1, p2, c1, c2, false, true);
                    list.add(personList[i + win.first]);
                    pk::play_se(6);
                    pk::message_box(pk::u8encode(pk::format("{}경기 승자는 \x1b[2x{}\x1b[0x입니다.", n, pk::u8decode(pk::get_name(personList[i + win.first])))));

                    i = i + 1;
                    n = n + 1;
                }

                personList.clear();
                personList = list;
                remain = personList.count;
                round++;
            }

            pk::message_box(pk::u8encode(pk::format("결승은 \x1b[2x{}\x1b[0x, \x1b[2x{}\x1b[0x님의 경기입니다.", pk::u8decode(pk::get_name(personList[0])), pk::u8decode(pk::get_name(personList[1])))), moo);

            bool c1 = false;                            // 무장1 조종여부
            bool c2 = false;                            // 무장2 조종여부

            bool skip = false;

            if (true == isSingleCompetition)
            {
                skip = true;
            }
            else if (true == personList[0].is_player() && true == personList[1].is_player())
            {
                skip = true;
            }

            if (false == skip)
            {
                if (true == personList[0].is_player())
                {
                    c1 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 설전을 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[0])))));
                }

                if (true == personList[1].is_player())
                {
                    c2 = pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x의 설전을 직접 조종하시겠습니까?", pk::u8decode(pk::get_name(personList[1])))));
                }
            }
                                                                      // 1 조종, 2 조종,   관전여부
            pk::int_int_bool win = pk::debate(personList[0], personList[1], c1, c2, false, true);

            @winner = personList[win.first];
            @runnerUp = personList[(win.first + 1) % 2];
        }



        // 추첨한 참가국 받아오기
        array<pk::force@> GetParticipatingForceArray(int type)
        {
            array<pk::force@> forceArray(validForceCount);

            int count = 0;

            // 개최국(황제 보호세력)이 참가 요건에 해당되면 개최국 자격으로 참가
            if (hostForce != null)
            {
                @forceArray[0] = hostForce;
                count = 1;
            }

            pk::list<pk::force@> validList;

            for (int i = 0; i < validPlayerCompetitonList.count; ++i)
            {
                pk::force@ force = validPlayerCompetitonList[i];
                validList.add(force);
            }

            int validListCount = validList.count;

            // 플레이어 세력이 무조건 참가하게되는 경우
            if (대회_무술 == type && true == 플레이어_무술대회_참여여부)
            {
                validAICompetitionList.shuffle();

                for (int i = 0; i < (validForceCount - count) - validListCount; ++i)
                {
                    pk::force@ force = validAICompetitionList[i];
                    validList.add(force);
                }
            }
            else if (대회_설전 == type && true == 플레이어_설전대회_참여여부)
            {
                validAICompetitionList.shuffle();

                for (int i = 0; i < (validForceCount - count) - validListCount; ++i)
                {
                    pk::force@ force = validAICompetitionList[i];
                    validList.add(force);
                }
            }
            // 그렇지 않은 경우
            else
            {
                for (int i = 0; i < validAICompetitionList.count; ++i)
                {
                    pk::force@ force = validAICompetitionList[i];
                    validList.add(force);
                }
            }

            validList.shuffle();

            for (int i = 0; i < validForceCount - count; ++i)
            {
                @forceArray[i + count] = validList[i];
            }

            return forceArray;
        }

        // 참가자격
        bool IsExistQualification(pk::force@ force, int competitionType, int participateType)
        {
            pk::list<pk::person@> personList;
            if (participateType <= 대회_4강)
            {
                personList = pk::get_person_list(force, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));
            }
            else
            {
                personList = pk::get_person_list(force, pk::mibun_flags(신분_도독, 신분_태수, 신분_일반));
            }
            int count = 0;

            for (int i = 0; i < personList.count; ++i)
            {
                pk::person@ person = personList[i];

                if (대회_무술 == competitionType)
                {
                    if (true == person.is_alive())
                    {
                        if (person.stat[무장능력_무력] >= 대회_무력제한)
                        {
                            // 황제가 여는 8세력 이상 대회면 바로 반환
                            if (대회_8강이상 == participateType)
                            {
                                return true;
                            }
                            else
                            {
                                count++;
                            }
                        }
                    }
                }
                else if (대회_설전 == competitionType)
                {
                    if (true == person.is_alive())
                    {
                        if (person.stat[무장능력_지력] >= 대회_지력제한)
                        {
                            // 황제가 여는 8세력 이상 대회면 바로 반환
                            if (대회_8강이상 == participateType)
                            {
                                return true;
                            }
                            else
                            {
                                count++;
                            }
                        }
                    }
                }
            }

            if (대회_4강 == participateType)
            {
                if (count >= 2)
                {
                    return true;
                }
            }

            if (대회_자세력 == participateType)
            {
                if (count >= 8)
                {
                    return true;
                }
            }

            return false;
        }
        
        pk::list<pk::person@> GetCompetitionPersonList(pk::force@ force, int competitionType, bool isSingleCompetition)
        {
            pk::list<pk::person@> list;
            
            if (false == isSingleCompetition)
            {
                list = pk::get_person_list(force, pk::mibun_flags(신분_군주, 신분_도독, 신분_태수, 신분_일반));
            }
            else
            {
                list = pk::get_person_list(force, pk::mibun_flags(신분_도독, 신분_태수, 신분_일반));
            }

            pk::list<pk::person@> validList;

            for (int i = 0; i < list.count; ++i)
            {
                if (대회_무술 == competitionType)
                {
                    if (list[i].stat[무장능력_무력] >= 대회_무력제한)
                    {
                        validList.add(list[i]);
                    }
                }
                else if (대회_설전 == competitionType)
                {
                    if (list[i].stat[무장능력_지력] >= 대회_지력제한)
                    {
                        validList.add(list[i]);
                    }
                }
            }

            return validList;
        }

        // 삽입정렬. AI의 참가무장 선별 및 무장선택 화면에 무장 정렬에 사용됨
        pk::list<pk::person@> GetSortedCompetitionPersonList(pk::list<pk::person@> personList, int ability)
        {
            if (personList.count > 1)
            {
                for (int i = 1; i < personList.count; ++i)
                {
                    for (int j = i; j > 0; j--)
                    {
                        if (GetCompetitionValue(personList[j], ability) > GetCompetitionValue(personList[j - 1], ability))
                        {
                            pk::person@ temp = personList[j];
                            @personList[j] = personList[j - 1];
                            @personList[j - 1] = temp;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }

            return personList;
        }

        int GetCompetitionValue(pk::person@ person, int ability)
        {
            int id = person.get_id();
            int value = 0;
       
            if (무장능력_무력 == ability)
            {
                value = person.stat[ability];

                if (id == 무장_여포 || id == 무장_관우 || id == 무장_장비 || id == 무장_조운 || id == 무장_마초 || id == 무장_허저)
                {
                    value = value + GetAddedForce(id);
                }
                // 황충의 부가무력은 시나리오 사실 여부, 나이에 따라 달라짐
                else if (id == 무장_황충)
                {
                    if (true == pk::get_scenario().virtual)
                    {
                        value = value + 5;
                    }
                    else
                    {
                        int age = pk::get_age(person);

                        if (age < 60)
                        {
                            value = value + 1;
                        }
                        else if (age < 65)
                        {
                            value = value + 2;
                        }
                        else if (age < 70)
                        {
                            value = value + 3;
                        }
                        else if (age < 80)
                        {
                            value = value + 4;
                        }
                        else if (age < 90)
                        {
                            value = value + 5;
                        }
                        else
                        {
                            value = value + 10;
                        }
                    }
                }

                value = value + GetAddedItemValue(id);
            }
            else if (무장능력_지력 == ability)
            {
                value = person.stat[ability];

                // 성격 체크
                int character = person.character;

                if (성격_대담 == character)
                {
                    value = value + 설전_대담;
                }
                else if (성격_소심 == character)
                {
                    value = value + 설전_소심;
                }
                else if (성격_저돌 == character)
                {
                    value = value + 설전_저돌;
                }
                else if (성격_냉정 == character)
                {
                    value = value + 설전_냉정;
                }

                if (true == IsBook(id))
                {
                    value = value + 설전_궤변 + 설전_대갈 + 설전_진정 + 설전_무시 + 설전_흥분;
                }
                else
                {
                    // 궤변 체크
                    if (true == person.wajutsu_kiben)
                    {
                        value = value + 설전_궤변;
                    }
                    // 대갈 체크
                    if (true == person.wajutsu_daikatsu)
                    {
                        value = value + 설전_대갈;
                    }
                    // 진정 체크
                    if (true == person.wajutsu_chinsei)
                    {
                        value = value + 설전_진정;
                    }
                    // 무시 체크
                    if (true == person.wajutsu_mushi)
                    {
                        value = value + 설전_무시;
                    }
                    // 흥분 체크
                    if (true == person.wajutsu_gyakujou)
                    {
                        value = value + 설전_흥분;
                    }
                }
            }
            else
            {
                return -1;
            }

            return value;
        }

        // 부가무력 받아오기
        int GetAddedForce(int moo)
        {
            for (int i = 0; i < 부가무력_무장.length; ++i)
            {
                if (부가무력_무장[i] == moo)
                {
                    return 부가무력_수치[i];
                }
            }

            return 0;
        }

        // 무기 점수 받아오기
        int GetAddedItemValue(int moo)
        {
            int longWeapon = 0;
            int swordWeapon = 0;
            int bowWeapon = 0;
            int secretWeapon = 0;

            for (int i = 0; i < 보물_끝; ++i)
            {
                pk::item@ item = pk::get_item(i);
                
                if (item.owner == moo)
                {
                    switch (item.type)
                    {
                    case 보물종류_검 :
                        swordWeapon = 검_점수;
                        break;

                    case 보물종류_긴무기:
                        longWeapon = 긴무기_점수;
                        break;

                    case 보물종류_암기:
                        secretWeapon = 암기_점수;
                        break;

                    case 보물종류_활:
                        bowWeapon = 활_점수;
                        break;
                    }
                }
            }

            return longWeapon + swordWeapon + bowWeapon + secretWeapon;
        }

        // 서적 보유 유무 받아오기
        bool IsBook(int moo)
        {
            for (int i = 0; i < 보물_끝; ++i)
            {
                pk::item@ item = pk::get_item(i);

                if (item.owner == moo)
                {
                    if (item.type == 보물종류_서책)
                    {
                        return true;
                    }
                }
            }

            return false;
        }

        void SetCompetitionWinner(int moo, int type)
        {
            pk::point point = competitionDataArray[type];
            pk::building@ data = pk::get_building(point);

            data.hp = moo;
        }

        int GetCompetitionWinnerId(int type)
        {
            pk::point point = competitionDataArray[type];
            pk::building@ data = pk::get_building(point);

            int id = data.hp;

            pk::person@ p = pk::get_person(id);

            if (null == p || false == p.is_alive())
            {
                return -1;
            }
            else
            {
                return id;
            }
        }

        void SetSingleCompetitionWinner(int forceId, int moo)
        {
            pk::point point = singleCompetitionDataArray[forceId];
            pk::building@ data = pk::get_building(point);

            if (data != null)
            {
                if (moo == -1)
                {
                    data.hp = moo;
                }
                else
                {
                    data.hp = moo + 10000;
                }
            }
        }

        int GetSingleCompetitionWinnerId(int forceId)
        {
            pk::point point = singleCompetitionDataArray[forceId];
            pk::building@ data = pk::get_building(point);

            int id = data.hp;
            
            if (id >= 10000 && id < 20000)
            {
                return  id - 10000;
            }
            else
            {
                return -1;
            }
        }

        bool IsHoldCompetition(int forceId)
        {
            pk::point point = singleCompetitionDataArray[forceId];
            pk::building@ data = pk::get_building(point);

            int id = data.hp;

            if (id >= 10000 && id < 20000)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void ResetSingleCompetitionWinner()
        {
            auto forceArray = pk::list_to_array(pk::get_force_list());

            for (int i = 0; i < forceArray.length; ++i)
            {
                pk::force@ force = forceArray[i];

                if (true == IsValidForce(force))
                {
                    SetSingleCompetitionWinner(i, -1);
                }
            }
        }

        // 무술대회 우승자 특전
        void ExecuteDuelPrivillage(pk::unit@ unit)
        {
            // 상태이상인 경우 패스
            if (부대상태_통상 != unit.status)
            {
                return;
            }

            if (false == 우승자_특전여부)
            {
                return;
            }

            int winner = GetCompetitionWinnerId(대회_무술);

            if (-1 == winner)
            {
                return;
            }


            // 대회 우승자가 부대에 없으면 패스
            if(unit.member[0] != winner && unit.member[1] != winner && unit.member[2] != winner)
            {
                return;
            }

            bool success = false;

            array<pk::point> arr = pk::range(unit.get_pos(), 1, 무술대회특전_최대사거리);

            int actor = winner;

            int sourPower = unit.attr.stat[부대능력_무력];

            int lastDstPower = -1;
            int lastLeaderId = -1;
            pk::point lastPos;

            for (int i = 0; i < arr.length; ++i)
            {
                pk::unit@ dst = pk::get_unit(arr[i]);
                bool immune = false;

                if (dst == null || !pk::is_enemy(unit, dst))
                {
                    continue;
                }

                int energy = 0;
                int dstPower = dst.attr.stat[부대능력_무력];
                pk::person@ dstLeader = pk::get_person(dst.leader);
                pk::point pos = dst.get_pos();


                for (int j = 0; j < 무술대회특전_면역특기.length; ++j)
                {
                    if (dst.has_skill(무술대회특전_면역특기[j]))
                    {
                        immune = true;
                    }
                }

                if (immune == true)
                {
                    continue;
                }

                if (dstPower + 10 > sourPower)
                {
                    continue;
                }
                else
                {
                    if (lastLeaderId == -1 || lastDstPower < dstPower)
                    {
                        lastLeaderId = dst.leader;
                        lastPos = pos;
                    }
                }

                energy = sourPower - dstPower;
                energy /= 무술대회특전_무력차_제수;

                if (energy > 무술대회특전_기력감소_최대값)
                {
                    energy = 무술대회특전_기력감소_최대값;
                }

                if (energy < 무술대회특전_기력감소_최소값)
                {
                    energy = 무술대회특전_기력감소_최소값;
                }

                pk::play_se(41, pos);
                pk::add_energy(dst, -energy, true);
                success = true;
            }


            if (success == true)
            {
                bool gap = false;
                if (sourPower > lastDstPower + 10)
                {
                    gap = true;
                }
                PrintVictimMessage(pk::get_unit(lastPos), pk::get_person(lastLeaderId), gap);
                PrintPrivilageMessage(unit, actor);
            }
        }

        void PrintPrivilageMessage(pk::unit@ unit, int actorId)
        {
            pk::person@ moo = pk:: get_person(actorId);

            int r = pk::rand(2);

            if (r == 0)
            {
                pk::say(pk::u8encode("내가 바로 천하무쌍이다!"), moo, unit);
            }
            else
            {
                if (actorId == 무장_장료)
                {
                    pk::say(pk::u8encode("장료가 왔다!"), moo, unit);
                }
                else if (actorId == 무장_감녕)
                {
                    pk::say(pk::u8encode("하하하! 화려하게 날뛰어 볼까!"), moo, unit);
                }
                else if (actorId == 무장_관우)
                {
                    pk::say(pk::u8encode("너희는 나를 막을 수 없으리라!"), moo, unit);
                }
                else
                {
                    pk::say(pk::u8encode("내가 바로 천하무쌍이다!"), moo, unit);
                }
            }
        }

        void PrintVictimMessage(pk::unit@ unit, pk::person@ moo, bool gap)
        {
            if (gap == true)
            {
                switch (pk::rand(3))
                {
                case 0: pk::say(pk::u8encode("크윽..."), moo, unit);
                    break;

                case 1: pk::say(pk::u8encode("이럴수가..."), moo, unit);
                    break;

                case 2: pk::say(pk::u8encode("어떻게든 해야한다..."), moo, unit);
                    break;
                }
            }
            else
            {
                switch (pk::rand(3))
                {
                case 0: pk::say(pk::u8encode("다들 정신차려라!"), moo, unit);
                    break;

                case 1: pk::say(pk::u8encode("당황하지마라!"), moo, unit);
                    break;

                case 2: pk::say(pk::u8encode("두고보자..."), moo, unit);
                    break;
                }
            }
        }

        // 설전대회 우승자 특전
        void ExecuteEloquencePrivillage(pk::unit@ unit)
        {
            if (false == 우승자_특전여부)
            {
                return;
            }

            // 상태이상인 경우 패스
            if (부대상태_통상 != unit.status)
            {
                return;
            }

            int winner = GetCompetitionWinnerId(대회_설전);

            if (-1 == winner)
            {
                return;
            }

            // 대회 우승자가 부대에 없으면 패스
            if (unit.member[0] != winner && unit.member[1] != winner && unit.member[2] != winner)
            {
                return;
            }

            bool success = false;

            array<pk::point> arr = pk::range(unit.get_pos(), 1, 설전대회특전_최대사거리);

            int actor = winner;

            int src_int = unit.attr.stat[부대능력_지력];

            pk::list<pk::unit@> unitList;

            for (int i = 0; i < arr.length; ++i)
            {
                pk::unit@ dst = pk::get_unit(arr[i]);

                if (dst == null || !pk::is_enemy(unit, dst))
                {
                    continue;
                }
                else
                {
                    if (dst.status == 부대상태_통상)
                    {
                        unitList.add(dst);
                    }
                }
            }

            if (unitList.count == 0)
            {
                return;
            }
            
            unitList.shuffle();

            if (true == pk::rand_bool(설전대회특전_계략실행확률))
            {
                pk::unit@ dst = unitList[0];
                int dst_int = dst.attr.stat[부대능력_지력];

                int b = data_849b14(pk::get_person(dst.leader).character);
                int c = dst.attr.stat[부대능력_방어] / 20;

                int d = src_int * 3 / 10 - dst_int / 5;
                d += b;
                d += c;

                int e = d + 70;

                int f = 100;
                f -= dst_int * 9 / 10;
                f *= src_int * src_int * 100;
                f /= dst_int * dst_int + src_int * src_int;
                f /= 45;
                f -= (100 - src_int) / 10;

                f += b;
                f += c;
                if (src_int < dst_int) f -= (dst_int - src_int) / 3;
                if (f < 1) f = 1;

                int n = pk::max(1, pk::min(99, e, f));

                // 계략성공
                if (true == pk::rand_bool(n))
                {
                    // 시전부대 대사
                    pk::say(pk::u8encode("잠시 내 말좀 들어보시오."), pk::get_person(actor), unit);
                    // 대상 부대 상태이상
                    pk::set_status(dst, null, 부대상태_혼란, 1, true);
                }
            }

            
        }

        /** 성격에 따른 교란 상수 */
        int data_849b14(int character)
        {
            switch (character)
            {
            case 성격_소심: return -2;
            case 성격_냉정: return 0;
            case 성격_대담: return 1;
            case 성격_저돌: return 3;
            }
            return 0;
        }

        void ExecuteSingleCompetitionPrivilage(pk::unit@ unit)
        {
            int forceId = unit.get_force_id();
            
            pk::force@ force = pk::get_force(forceId);

            if(false == IsValidForce(force))
            {
                return;
            }

            int moo = GetSingleCompetitionWinnerId(forceId);

            if (-1 == moo)
            {
                return;
            }

            if (unit.member[0] != moo && unit.member[1] != moo && unit.member[2] != moo)
            {
                return;
            }

            pk::add_energy(unit, 자체대회특전_기력회복 ,true);
        }

        // 자세력 내 대회 계최가 가능한지 확인하는 데이터  // -1 : 황건, 012 : 개최가능,  3 : 한황실 대회 개최가능, 4 : 작위부족 , 5 : 이미 대회를 개최함,  6 : 기교 부족, 7 : 금 부족, 8 : 장수부족
        int GetPossibleHoldSingleCompetition(pk::force@ force, pk::building@ building)
        {
            // 황건은 개최불가
            if (국호_황건 == force.kokugou)
            {
                return -1;
            }

            int tp = force.tp;
            uint gold;
            if (true == force.is_player())
            {
                gold = pk::get_gold(building);
            }

            if (force.title >= 작위_대사마)
            {
                return 4;
            }
 

            // 대회 개최 유무
            if (true == IsHoldCompetition(force.get_force_id()))
            {
                return 5;
            }

            // 세력 기교 검사
            if (tp < 대회_개최기교 && true == force.is_player())
            {
                return 6;
            }

            // 도시의 금 검사
            if (gold < 대회_개최비용 && true == force.is_player())
            {
                return 7;
            }

            // 장수 자격요건 검사
            bool duelCheck = IsExistQualification(force, 대회_무술, 대회_자세력);
            bool EloquencyCheck = IsExistQualification(force, 대회_설전, 대회_자세력);

            // 모두 개최가능
            if (true == duelCheck && true == EloquencyCheck)
            {
                return 0;
            }
            // 무술대회만 가능
            else if (true == duelCheck && false == EloquencyCheck)
            {
                return 1;
            }
            // 설전대회만 가능
            else if (false == duelCheck && true == EloquencyCheck)
            {
                return 2;
            }
            // 장수 자격부족
            else
            {
                return 8;
            }
        }

        void UpdateAICompetition(pk::force@ force)
        {
            if (true == force.is_player() || false == IsValidForce(force))
            {
                return;
            }
                
            int data = GetPossibleHoldSingleCompetition(force, null);

            if (data == -1 || data > 2)
            {
                return;
            }

            if (0 == data )
            {
                if (true == pk::rand_bool(50))
                {
                    // AI 무술대회
                    ExecuteAICompetition(force, 대회_무술);
                }
                else
                {
                    // AI 설전대회
                    ExecuteAICompetition(force, 대회_설전);
                }
            }
            else if (1 == data)
            {
                // AI 무술대회
                ExecuteAICompetition(force, 대회_무술);
            }
            else if (2 == data)
            {
                // AI 설전대회
                ExecuteAICompetition(force, 대회_설전);
            }
        }

        void ExecuteAICompetition(pk::force@ force, int competitiontype)
        {
            string competitionName;
            auto tempList = GetCompetitionPersonList(force, competitiontype, true);
            int ability;
            
            if (대회_무술 == competitiontype)
            {
                ability = 무장능력_무력;
                competitionName = "무술대회";
            }
            else if (대회_설전 == competitiontype)
            {
                ability = 무장능력_지력;
                competitionName = "설전대회";
            }

            auto validList = GetSortedCompetitionPersonList(tempList, ability);
            pk::list<pk::person@> personList;
            
            for (int i = 0; i < 8; ++i)
            {
                personList.add(validList[i]);
            }

            array<pk::person@> backUpArray = pk::list_to_array(personList);

            int remain = personList.count;
            int round = 1;

            while (remain > 2)
            {
                pk::list<pk::person@> list;
                int n = 1;

                for (int i = 0; i < personList.count; ++i)
                {
                    pk::person@ p1 = personList[i];
                    pk::person@ p2 = personList[i + 1];
                    int first;
                    if (대회_무술 == competitionType)
                    {
                        first = pk::duel(null, null, p1, null, null, p2, null, null, false, false, 0, false).first;
                    }
                    else if (대회_설전 == competitionType)
                    {
                        first = pk::debate(p1, p2, false, false, false, false).first;
                    }
                    list.add(personList[i + first]);

                    i = i + 1;
                    n = n + 1;
                }

                personList.clear();
                personList = list;
                remain = personList.count;
                round++;
            }

            int first;

            if (대회_무술 == competitionType)
            {
                first = pk::duel(null, null, personList[0], null, null, personList[1], null, null, false, false, 0, false).first;
            }
            else if (대회_설전 == competitionType)
            {
                first = pk::debate(personList[0], personList[1], false, false, false, false).first;
            }

            pk::person@ winner = personList[first];
            pk::person@ runnerUp = personList[(first + 1) % 2];

            string forceName;

            if (force.kokugou == -1)
            {
                forceName = pk::u8decode(pk::get_name(pk::get_person(force.kunshu)));
            }
            else
            {
                forceName = pk::u8decode(pk::get_kokugou(force.kokugou).get_name());
            }
            
            if (대회_무술 == competitionType)
            {
                for (int i = 0; i < backUpArray.length; ++i)
                {
                    pk::person@ p = backUpArray[i];
                    p.stat_exp[무장능력_통솔] = p.stat_exp[무장능력_통솔] + 자체_대회_경험치;
                    p.stat_exp[무장능력_무력] = p.stat_exp[무장능력_무력] + 자체_대회_경험치;
                }
            }
            else if (대회_설전 == competitionType)
            {
                for (int i = 0; i < backUpArray.length; ++i)
                {
                    pk::person@ p = backUpArray[i];
                    p.stat_exp[무장능력_지력] = p.stat_exp[무장능력_지력] + 자체_대회_경험치;
                    p.stat_exp[무장능력_정치] = p.stat_exp[무장능력_정치] + 자체_대회_경험치;
                }
            }

            SetSingleCompetitionWinner(force.get_force_id(), winner.get_id());
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}군\x1b[0x에서 열린 \x1b[1x{}\x1b[0x의 우승자는 \x1b[2x{}\x1b[0x입니다.", forceName, competitionName, pk::u8decode(pk::get_name(winner)))));
            pk::history_log(winner.get_pos(), force.color, pk::u8encode(pk::format("\x1b[1x{}군\x1b[0x의 \x1b[2x{}\x1b[0x, 세력 내 \x1b[1x{}\x1b[0x 우승", forceName, pk::u8decode(pk::get_name(winner)), competitionName)));
        }
        // ================================================= 101 징병 치안 증감 =====================================================================

        int func101(pk::city@ city, const pk::detail::arrayptr<pk::person@>& in actors, int troops)
        {
            int n = 100;
            for (int i = 0; i < actors.length; i++)
            {
                pk::person@ actor = actors[i];
                if (pk::is_alive(actor))
                {
                    n = n + actor.stat[int(pk::core["징병.능력"])];
                }
            }

            int value = -troops / n;

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

            return value;
        }

        // ==================================================== 징병 치안 증감 끝 ===================================================================

        // ================================================= 102 병기생산량 =========================================================================

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

            for (int i = 0; i < actors.length; i++)
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

            // 연주 지역이점
            pk::force@ force = pk::get_force(city.get_force_id());

            if (weapon_id <= 병기_노)
            {
                ExecuteYanZhou(force, n);
            }

            n = n * func_5c7040(city, weapon_id);

            // 컴퓨터일 경우 특급 난이도에서 2배
            if (pk::get_scenario().difficulty == 난이도_특급 and !city.is_player())
                n = n * 2;

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
        void func163(pk::unit_attr& attr, const pk::detail::arrayptr<pk::person@>& in member, int weapon_id, uint troops, int type, int status, bool navy, bool shoubyou)
        {
            pk::person@ leader = member[0];

            if (!pk::is_alive(leader))
                return;

            pk::force@ force = pk::get_force(leader.get_force_id());

            if (!pk::is_alive(force))
                return;
            if (!pk::is_valid_equipment_id(weapon_id) or !pk::is_valid_unit_type(type) or !pk::is_valid_unit_status(status))
                return;

            // 부장이 있다면
            if (member[1] !is null or member[2] !is null)
            {
                // 혐오 관계가 있다면 보정하지 않음
                if (func_4960d0(leader, member[1]) or func_4960d0(leader, member[2]) or func_4960d0(member[1], member[2]))
                {
                    for (int i = 0; i < 무장능력_끝; i++)
                        attr.stat[i] = shoubyou ? leader.stat[i] : leader.max_stat[i];
                }
                // 혐오 관계가 없다면 보정
                else
                {
                    for (int i = 0; i < 무장능력_끝; i++)
                    {
                        int a = 0, b = 0;
                        int leader_stat = shoubyou ? leader.stat[i] : leader.max_stat[i];

                        // 통솔, 무력은 무장 관계에 따라 보정
                        if (i <= 무장능력_무력)
                        {
                            if (member[1] !is null)
                                a = func_495ff0(leader, leader_stat, member[1], shoubyou ? member[1].stat[i] : member[1].max_stat[i]);
                            if (member[2] !is null)
                                b = func_495ff0(leader, leader_stat, member[2], shoubyou ? member[2].stat[i] : member[2].max_stat[i]);
                        }
                        // 지력, 정치, 매력은 최대값
                        else
                        {
                            if (member[1] !is null)
                                a = pk::max(leader_stat, shoubyou ? member[1].stat[i] : member[1].max_stat[i]);
                            if (member[2] !is null)
                                b = pk::max(leader_stat, shoubyou ? member[2].stat[i] : member[2].max_stat[i]);
                        }

                        attr.stat[i] = pk::max(a, b);
                    }
                }
            }
            // 부장이 없다면
            else
            {
                // 주장 능력치 그대로 사용
                for (int i = 0; i < 무장능력_끝; i++)
                    attr.stat[i] = shoubyou ? leader.stat[i] : leader.max_stat[i];
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
                    else if(relation_level > 0)
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

            attr.stat[부대능력_공격] = pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_무력] * atk * apt * 0.01f) * str * sts));

            attr.stat[부대능력_방어] = pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_통솔] * def * apt * 0.01f) * ldr * sts));

            attr.stat[부대능력_건설] = pk::min(255.f, pk::max(1.f, (attr.stat[부대능력_정치] * 2.f / 3 + 50) * ldr * sts));

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
                    if (pk::has_tech(force, 기교_정예기병))
                        mov = mov + 2;
                    if (pk::has_tech(force, 기교_양마산출))
                        mov = mov + 4;
                    break;
                case 병기_충차:
                case 병기_정란:
                case 병기_투석:
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
                }
            }
            else
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
            }

            if (navy)
                mov = mov + int(pk::core::skill_constant(member, 특기_조타)); // 4

            attr.stat[부대능력_이동] = mov;
        }

        /**
            관계에 따른 능력 보정
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
        // ================================================== 부대 능력치 끝 ==========================================================================

        // ================================================== 168 거점 점령 후 처리 ====================================================================
        
        void func168(pk::building@ base, pk::unit@ attacker)
        {
            pk::person@ leader;

            if (pk::is_alive(attacker))
                @leader = pk::get_person(attacker.leader);

            pk::force@ force = pk::get_force(leader.get_force_id());
            pk::person@ moo = pk::get_person(무장_문관);

            int n = 5;
            int charisma = 20;

            bool has_buff = false;
            int relation_level = GetRelationLevel(force, 우호_천축국);
            
            if (relation_level >= 1)
            {
                has_buff = true;
            }
            int value = 천축_1단계_추가보존;
            
            if (false == IsEnableZhou(force, 형남))
            {
                value = value / 2;
            }

            if (pk::is_alive(leader))
            {
                charisma = leader.stat[무장능력_매력];
                n = pk::max(charisma / 10, 5);
            }

            // 천축국 지역이점이 있으면 금, 군량등의 소실 경감
            if (true == has_buff)
            {
                n = n * (100 + value) / 100;
            }

            pk::set_gold(base, pk::get_gold(base) * n / 100);
            pk::set_food(base, pk::get_food(base) * n / 100);
            pk::set_troops(base, pk::get_troops(base) * n / 100);
            for (int i = 0; i < 병기_끝; i++)
                pk::set_weapon_amount(base, i, pk::get_weapon_amount(base, i) * n / 100);

            pk::city@ city = pk::building_to_city(base);

            // 도시가 아닌경우 여기서 종료
            if (!pk::is_alive(city))
                return;
            
            int city_id = city.get_id();
            int city_force_id = city.get_force_id();
            pk::list<pk::building@> city_devs;
            pk::list<pk::building@> buildings = pk::get_building_list();

            pk::force@ baseForce = pk::get_force(city.get_force_id());
            int zhou = GetZhouId(city_id);
            
            bool isAttackerGet = IsRegionBuffChange(force, city_id, false);             // 공격자가 지역이점 획득
            bool isDefenderLose = IsRegionBuffChange(baseForce, city_id, true);            // 피격자가 지역이점 상실
            
            // 지역이점 변동여부 체크
            
            if (true == IsValidForce(force))
            {
                if (true == force.is_player())
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

            if (true == IsValidForce(baseForce))
            {
                if (true == baseForce.is_player())
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
            if (true == isDefenderLose && pk::get_city_count(baseForce) > 1)
            {
                string forceName;

                if (baseForce.kokugou != -1)
                {
                    forceName = pk::get_kokugou(baseForce.kokugou).get_name() + pk::u8encode("군");
                }
                else
                {
                    forceName = pk::get_name(pk::get_person(baseForce.kunshu)) + pk::u8encode("군");
                }

                pk::history_log(base.get_pos(), baseForce.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x이 \x1b[1x{}\x1b[0x의 지역이점 상실", pk::u8decode(forceName), 주_이름[zhou])));
            }
            
            // 공격세력이 지역이점을 획득했을 경우
            if (true == isAttackerGet)
            {
                string forceName;

                if (force.kokugou != -1)
                {
                    forceName = pk::get_kokugou(force.kokugou).get_name() + pk::u8encode("군");
                }
                else
                {
                    forceName = pk::get_name(pk::get_person(force.kunshu)) + pk::u8encode("군");
                }

                pk::history_log(base.get_pos(), force.color, pk::u8encode(pk::format("\x1b[1x{}\x1b[0x이 \x1b[1x{}\x1b[0x의 지역이점 획득", pk::u8decode(forceName), 주_이름[zhou])));
            }

            for (int i = 0; i < buildings.size; i++)
            {
                pk::building@ building = buildings[i];
                if (pk::is_alive(building) and pk::get_city_id(building.get_pos()) == city_id)
                {
                    switch (pk::get_facility_type(building))
                    {
                    case 시설종류_내정시설:
                        if (building.completed)
                        {
                            // 건설 완료된 내정시설은 동작대가 아니라면 무작위로 파괴.
                            if (building.facility != 시설_동작대)
                                city_devs.push_back(building);
                        }
                        else
                        {
                            // 건설중인 동작대가 파괴된 경우 동작 보물도 사라짐.
                            if (building.facility == 시설_동작대)
                            {
                                pk::item@ item = pk::get_item(보물_동작);
                                if (pk::is_alive(item))
                                    pk::kill(item);
                            }
                            // 건설중인 내정시설은 모두 파괴.
                            else
                            {
                                pk::kill(building, false);
                            }
                        }
                        break;

                    case 시설종류_군사시설:
                        // 구역 내 도시를 점령하고 있던 세력과 같은 세력의 군사시설은 모두 파괴
                        if (pk::is_valid_force_id(city_force_id) and city_force_id == building.get_force_id())
                            pk::kill(building, false);
                        break;
                    }
                }
            }

            n = city_devs.size;
            if (pk::is_valid_normal_force_id(attacker.get_force_id()))
                n = n - pk::min(charisma / 20, n);

            // 천축국 지역이점이 있으면 파괴되는 시설 감소
            if (true == has_buff)
            {
                n = (n * 100) / (100 + value);
            }

            city_devs.shuffle();
            for (int i = 0; i < n; i++)
                pk::kill(city_devs[i], false);
        }
    
        
        // ===========================================================================================================================================

        // =============================================== 205 계략 소비 기력 =========================================================================
        int func205(pk::unit@ src, int strategy_id)
        {
            pk::force@ force = pk::get_force(src.get_force_id());

            int energy = 0;

            switch (strategy_id)
            {
            case 계략_화계: energy = 10;
                break;
            case 계략_소화: energy = 10;
                break;
            case 계략_위보: energy = 15;
                break;
            case 계략_교란: energy = 15;
                break;
            case 계략_진정: energy = 10;
                break;
            case 계략_복병: energy = 10;
                break;
            case 계략_동토: energy = 20;
                break;
            case 계략_요술: energy = 50;
                break;
            case 계략_낙뢰: energy = 50;
                break;
            }

            if (src.has_skill(특기_백출))
            {
                energy = (energy + 1) / 2;
            }

            // 회남 지역이점. 계략소비 경감
            ExecuteHuaiNan(force, energy);

            return energy;
        }
        // ================================================== 계략 소비 기력 끝 ========================================================================


        // ================================================ 211 건물의 공격 데미지 =====================================================================
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
                info.troops_damage = func_5aee60(atk, troops, troops_atk, 0, target_unit.attr.stat[부대능력_방어], func_5aee10(target_unit)) * 0.8f;
                if (pk::equipment_id_to_heishu(target_unit.weapon) == 병종_병기)
                    info.troops_damage *= 0.8f;
                break;

            case 시설_진:
            case 시설_요새:
            case 시설_성채:
            case 시설_궁노:
            case 시설_연노로:
            case 시설_투석대:
                info.troops_damage = func_5af370(attacker, target_unit);
                if (pk::equipment_id_to_heishu(target_unit.weapon) == 병종_병기 and attacker.facility != 시설_투석대)
                    info.troops_damage *= 0.8f;
                break;

            default:
                // 시설.자동공격 대미지
                info.troops_damage = func_5af370(attacker, target_unit);
                if (pk::equipment_id_to_heishu(target_unit.weapon) == 병종_병기)
                    info.troops_damage *= 0.8f;
                break;
            }

            if (attacker.is_player())
                info.troops_damage *= float(pk::core["대미지패널티"][pk::get_scenario().difficulty]);

            // 방어강화 기교 연구 시 성, 관문, 항구, 진, 요새, 성채의 공격력 2배
            if (attacker.has_tech(기교_방어강화) and attacker.facility >= 시설_도시 and attacker.facility <= 시설_성채)
                info.troops_damage *= 2;

            // 서주 지역이점 획득 시 성, 관문, 항구의 공격력 20% 상승
            if (attacker.facility >= 시설_도시 && attacker.facility <= 시설_항구)
            {
                ExecuteXuZhouDamage(force, info);
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

        /***/
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

        /***/
        void func_5af0e0(int& out src_atk, int& out dst_atk, int& out dst_def, int& out dst_troops, pk::building@ building)
        {
            src_atk = 10;
            pk::person@ taishu = pk::get_person(pk::get_taishu_id(building));
            if (pk::is_alive(taishu))
            {
                dst_atk = pk::max(taishu.stat[무장능력_무력] - 25, 40);
                dst_def = pk::max(taishu.stat[무장능력_통솔] - 25, 40);
                dst_troops = pk::min(pk::get_troops(building), pk::get_command(taishu));
            }
            else
            {
                dst_atk = 30;
                dst_def = 30;
                dst_troops = pk::min(pk::get_troops(building), 7000);
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
                // 시설.자동공격 대미지
                atk = 300;
                bonus = 300;
                break;
            }

            float max_hp = pk::max(pk::get_max_hp(attacker), 1);
            float hp = pk::max(attacker.hp, max_hp / 2);

            return hp / max_hp * (152 - int(target.attr.stat[부대능력_방어])) * atk / 132 + pk::rand(bonus);
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
                loyalty = pk::get_scenario().difficulty == 난이도_초급 ? 60 : 70;

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

            // 우호가 생성됐을 경우 이민족 철군 및 동맹
            if (eventRapprochmentLevel == 0)
            {
                pk::set_ally(force, 교역대상_아이디[eventAlienId], true);
                ResetBarbarianUnits(eventAlienId, 이민족_철군_동맹);
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

            // 우호도가 모두 하락했을 경우 동맹 파기
            if (level <= 0)
            {
                pk::unally(force, 교역대상_아이디[eventAlienId]);
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

        // ====================================================== 이민족 원군요청 ==========================================================================

        void AddSupportMenu()
        {
            pk::menu_item item;
            item.menu = 103;
            item.pos = 9;
            item.shortcut = "B";
            item.init = pk::building_menu_item_init_t(SupportInit);
            item.is_enabled = pk::menu_item_is_enabled_t(SupportEnabled);
            item.get_text = pk::menu_item_get_text_t(GetSupportText);
            item.get_desc = pk::menu_item_get_desc_t(GetSupportDescription);
            item.handler = pk::menu_item_handler_t(SupportHandler);
            pk::add_menu_item(item);
        }

        void SupportInit(pk::building@ building)
        {
            @tradeBuilding = @building;
            tradeBuildingGold = pk::get_gold(building);
            @tradeForce = pk::get_force(building.get_force_id());
            @tradeKunshu = pk::get_person(tradeForce.kunshu);
            @tradeCity = pk::building_to_city(tradeBuilding);
            tradeBuildingGold = pk::get_gold(building);
            tradeData = GetPossibleTrade(tradeForce, tradeBuilding, tradeStatus);
        }

        bool SupportEnabled()
        {
            int year = pk::get_elapsed_years();
            year = pk::min(year, 10);

            int gold = 이민족_원군요청_기본금 + year * 이민족_원군요청_추가금;

            if (tradeBuildingGold < gold)
            {
                return false;
            }

            if (tradeForce.tp < 이민족_원군요청_기교)
            {
                return false;
            }

            if (GetSupportData(tradeForce) > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        string GetSupportText()
        {
            return  pk::u8encode("이민족 요청");
        }

        string GetSupportDescription()
        {
            int year = pk::get_elapsed_years();
            year = pk::min(year, 10);

            int gold = 이민족_원군요청_기본금 + year * 이민족_원군요청_추가금;

            if (tradeBuildingGold < gold)
            {
                return pk::u8encode(pk::format("원군요청에 필요한 금이 부족합니다. (금 : {} 필요)", gold));
            }

            int data = GetSupportData(tradeForce);

            if (data > 0)
            {
                return pk::u8encode(pk::format("이민족에게 지원군을 요청합니다. (기교P : {} , 금 : {} 소비)", 이민족_원군요청_기교, gold));
            }
            else
            {
                if (0 == data)
                {
                    return pk::u8encode("요청 가능한 이민족이 없습니다.");
                }
                else if (-1 == data)
                {
                    return pk::u8encode(pk::format("기교가 부족합니다. (기교 P : {} 필요)", 이민족_원군요청_기교));
                }
                else if (-2 == data)
                {
                    return pk::u8encode("요청 가능한 도시가 없습니다.");
                }
                else
                {
                    return "";
                }
            }
        }

        bool SupportHandler()
        {
            int year = pk::get_elapsed_years();

            int gold = 이민족_원군요청_기본금 + year * 이민족_원군요청_추가금;

            pk::person@ barbarianMoo;
            int forceId = tradeForce.get_force_id();
            //pk::list<pk::force@> force_sel = pk::force_selector(pk::u8encode("세력 선택"), pk::u8encode("교류의 대상을 선택합니다."), forceList, 1, 1);
            pk::list<pk::force@> forceList;
            pk::list<pk::city@> validCityList;

            int targetForceId = -1;

            int data = GetSupportData(tradeForce);
            
            if (data <= 0)
            {
                return false;
            }
             
            if (data % 2 == 1)
            {
                forceList.add(pk::get_force(세력_오환));
            }
            // 강
            if ((data / 2) % 2 == 1)
            {
                forceList.add(pk::get_force(세력_강));
            }
            // 남만
            if ((data / 4) % 2 == 1)
            {
                forceList.add(pk::get_force(세력_남만));
            }
            // 산월
            if ((data / 8) % 2 == 1)
            {
                forceList.add(pk::get_force(세력_산월));
            }

            if (forceList.count != 0)
            {
                pk::list<pk::force@> force_sel = pk::force_selector(pk::u8encode("세력 선택"), pk::u8encode("지원을 요청할 세력을 선택합니다."), forceList, 1, 1);

                if (force_sel.count == 0)
                {
                    return false; // 미선택 시 취소 종료
                }

                switch (force_sel[0].get_id())
                {
                case 세력_오환:
                    targetForceId = 우호_오환;
                    @barbarianMoo = pk::get_person(무장_오환두목);
                    break;

                case 세력_강:
                    targetForceId = 우호_강;
                    @barbarianMoo = pk::get_person(무장_강두목);
                    break;

                case 세력_남만:
                    targetForceId = 우호_남만;
                    @barbarianMoo = pk::get_person(무장_남만두목);
                    break;

                case 세력_산월:
                    targetForceId = 우호_산월;
                    @barbarianMoo = pk::get_person(무장_산월두목);
                    break;
                }
            }

            validCityList = GetValidSupportCityList(tradeForce, targetForceId);

            pk::list<pk::city@> city_sel = pk::city_selector2(pk::u8encode("도시 선택"), pk::u8encode("도움을 요청할 지역을 선택합니다."), validCityList, 1, 1);

            if (city_sel.count <= 0)
            {
                return false;
            }

            if (city_sel[0].get_force_id() == forceId)
            {
                // 수비 요청 불가
                //if (true == pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에게 \x1b[1x{}\x1b[0x의 방어를 요청하시겠습니까?", 교역대상_이름[targetForceId], pk::u8decode(pk::get_name(city_sel[0]))))))
                //{
                //    SetBarbarianForceData(targetForceId, 이민족_지속기간);
                //    pk::add_tp(tradeForce, -이민족_원군요청_기교, tradeBuilding.get_pos());
                //    SummonBarbarianForce(city_sel[0], 부대임무_수복, targetForceId, GetBarbarianSupportUnitCount, GetBarbarianSupportUnitTroops());
                //}
            }
            else
            {
                // 공격 요청
                if (true == pk::yes_no(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에게 \x1b[1x{}\x1b[0x의 공격을 요청하시겠습니까?", 교역대상_이름[targetForceId], pk::u8decode(pk::get_name(city_sel[0]))))))
                {
                    SetBarbarianForceData(targetForceId, 이민족_지속기간);
                    pk::add_tp(tradeForce, -이민족_원군요청_기교, tradeBuilding.get_pos());
                    pk::add_gold(tradeBuilding, -gold, true);
                    SummonBarbarianForce(tradeForce, city_sel[0], 부대임무_정복, targetForceId, GetBarbarianSupportUnitCount(), GetBarbarianSupportUnitTroops());
                    pk::play_se(10);
                    if (true == pk::rand_bool(50))
                    {
                        pk::message_box(pk::u8encode(pk::format("후후.. 걱정마시오. \x1b[1x{}\x1b[0x 따위는 단숨에 점령해주겠소.", pk::u8decode(pk::get_name(city_sel[0])))), barbarianMoo);
                    }
                    else
                    {
                        pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x공의 부탁이라면 거절할 수 없지. 바로 쳐들어가도록 하겠소.", pk::u8decode(pk::get_name(tradeKunshu)))), barbarianMoo);
                    }
                }
            }

            return true;
        }

        // ============================================================ 자세력 내 대회개최 ================================================================
        pk::list<pk::person@> singleCompetitionPersonList;
        int competitionType;

        void AddCompetitionMenu()
        {
            pk::menu_item item;
            item.menu = 105;
            item.pos = 9;
            item.shortcut = "C";
            item.init = pk::building_menu_item_init_t(CompetitionInit);
            item.is_enabled = pk::menu_item_is_enabled_t(CompetitionEnabled);
            item.get_text = pk::menu_item_get_text_t(GetCompetitionText);
            item.get_desc = pk::menu_item_get_desc_t(GetCompetitionDescription);
            item.handler = pk::menu_item_handler_t(CompetitionHandler);
            pk::add_menu_item(item);
        }

        void CompetitionInit(pk::building@ building)
        {
            @tradeBuilding = @building;
            @tradeForce = pk::get_force(building.get_force_id());
            tradeBuildingGold = pk::get_gold(building);
            tradeData = GetPossibleHoldSingleCompetition(tradeForce, tradeBuilding);
        }

        bool CompetitionEnabled()
        {
            if (tradeData > 2 || -1 == tradeData)
            {
                return false;
            }

            return true;
        }

        string GetCompetitionText()
        {
            return  pk::u8encode("대회");
        }

        string GetCompetitionDescription()
        {
            // 012 : 개최가능,  3 : 한황실 대회 개최가능(사용안함) , 4 : 작위부족 , 5 : 이미 대회를 개최함,  6 : 기교 부족, 7 : 금 부족, 8 : 장수부족
            switch (tradeData)
            {
            case -1:
                return pk::u8encode("황건 세력은 대회 개최가 불가능합니다.");
                break;

            case 0:
            case 1:
            case 2:
                return pk::u8encode(pk::format("자세력 무장들이 겨루는 대회를 개최합니다. (기교P : {}, 금 : {} 소비 )", 대회_개최기교, 대회_개최비용));
                break;

            case 3:
                return pk::u8encode("아직 황제를 따르는 제후들이 많이 남아있습니다.");      // 사용안함
                break;

            case 4:
                return pk::u8encode("대회를 개최하려면 공 이상의 작위가 필요합니다.");
                break;
            case 5:
                return pk::u8encode("이번 해에 이미 대회를 개최했습니다.");
                break;
            case 6:
                return pk::u8encode(pk::format("기교가 부족합니다. (기교P : {} 필요 )", 대회_개최기교));
                break;
            case 7:
                return pk::u8encode(pk::format("도시의 금이 부족합니다. (금 : {} 필요 )", 대회_개최비용));
                break;
            case 8:
                return pk::u8encode("대회에 참가할 수 있는 무장이 부족합니다.");
                break;
            }

            return "";
        }

        bool CompetitionHandler()
        {
            int n;
            int c;
            if (tradeData == 0)
            {
                n = 3;
            }
            else
            {
                n = 2;
            }

            array<string> CompetitionList(n);
            array<int> cArray(n - 1);
            if (tradeData == 0)
            {
                CompetitionList[0] = pk::u8encode("무술대회");
                CompetitionList[1] = pk::u8encode("설전대회");
                cArray[0] = 대회_무술;
                cArray[1] = 대회_설전;
            }
            else if (tradeData == 1)
            {
                CompetitionList[0] = pk::u8encode("무술대회");
                cArray[0] = 대회_무술;
            }
            else if (tradeData == 2)
            {
                CompetitionList[0] = pk::u8encode("설전대회");
                cArray[0] = 대회_설전;
            }
            else
            {
                return false;
            }

            CompetitionList[n - 1] = pk::u8encode("취소");

            c = pk::choose(pk::u8encode("개최할 대회를 선택하십시오."), CompetitionList);

            if (c == n - 1)
            {
                return false;
            }

            competitionType = cArray[c];
            int ability; 

            if (대회_무술 == competitionType)
            {
                ability = 무장능력_무력;
            }
            else if (대회_설전 == competitionType)
            {
                ability = 무장능력_지력;
            }
            else
            {
                return false;
            }

            auto list = GetCompetitionPersonList(tradeForce, competitionType, true);

            auto validList = GetSortedCompetitionPersonList(list, ability);

            singleCompetitionPersonList.clear();
            pk::list<pk::person@> person_sel = pk::person_selector(pk::u8encode("장수 선택"), pk::u8encode("대회에 참가할 무장을 선택합니다.(8인 선택)"), validList, 8, 8);

            if (person_sel.count < 8)
            {
                return CompetitionHandler();
            }

            singleCompetitionPersonList = person_sel;

            pk::scene(pk::scene_t(SingleCompetitionScene));

            return true;
        }

        void SingleCompetitionScene()
        {
            @eventKunshu = pk::get_person(tradeForce.kunshu);
            pk::person@ winner = null;
            pk::person@ runnerUp = null;

            pk::move_screen(eventKunshu.get_pos());

            pk::fade(0);
            pk::sleep();
            pk::background(1);
            pk::fade(255);
            string a;
            string ment = "를 개최하도록 하겠소. 훌륭한 실력을 보여주길 기대하겠소.";

            if (대회_무술 == competitionType)
            {
                a = "\x1b[2x무술대회\x1b[0x";
            }
            else if (대회_설전 == competitionType)
            {
                a = "\x1b[2x설전대회\x1b[0x";
            }
            else
            {
                return;
            }
            
            pk::message_box(pk::u8encode(a + ment), eventKunshu);
            
            array<pk::person@> backUpArray = pk::list_to_array(singleCompetitionPersonList);
            singleCompetitionPersonList.shuffle();

            if (대회_무술 == competitionType)
            {
                pk::fade(0);
                pk::sleep();
                pk::background(57);
                pk::fade(255);

                RunDuelCompetition(singleCompetitionPersonList, winner, runnerUp, true);
            }
            else if (대회_설전 == competitionType)
            {
                pk::fade(0);
                pk::sleep();
                pk::background(37);
                pk::fade(255);

                RunEloquenceCompetition(singleCompetitionPersonList, winner, runnerUp, true);
            }

            pk::fade(0);
            pk::sleep();
            pk::background(19);
            pk::fade(255);
            pk::play_se(10);
            pk::message_box(pk::u8encode(pk::format("우승자는 \x1b[2x{}\x1b[0x인가. 앞으로도 나를 위해 더욱 힘써주시오.", pk::u8decode(pk::get_name(winner)))), eventKunshu);
            pk::message_box(pk::u8encode("이건 내가 그대에게 내리는 포상이오."), eventKunshu);
            pk::message_box(pk::u8encode("영광이옵니다."), winner);
            pk::add_kouseki(winner, 자세력_우승_공적);
            pk::message_box(pk::u8encode(pk::format("공적이 \x1b[1x{}\x1b[0x만큼 올랐습니다", 자세력_우승_공적)));
            pk::message_box(pk::u8encode(pk::format("\x1b[2x{}\x1b[0x에게도 포상을 내리겠소.", pk::u8decode(pk::get_name(runnerUp)))), eventKunshu);
            pk::message_box(pk::u8encode("영광이옵니다."), runnerUp);
            pk::add_kouseki(runnerUp, 자세력_준우승_공적);
            pk::message_box(pk::u8encode(pk::format("공적이 \x1b[1x{}\x1b[0x만큼 올랐습니다", 자세력_준우승_공적)));
            pk::message_box(pk::u8encode("이것으로 대회를 폐하겠소"), eventKunshu);
            pk::play_se(6);
            if (대회_무술 == competitionType)
            {
                pk::message_box(pk::u8encode("대회에 참가한 모든 무장의 통솔과 무력 경험치가 상승했습니다."));
                for (int i = 0; i < backUpArray.length; ++i)
                {
                    pk::person@ p = backUpArray[i];
                    p.stat_exp[무장능력_통솔] = p.stat_exp[무장능력_통솔] + 자체_대회_경험치;
                    p.stat_exp[무장능력_무력] = p.stat_exp[무장능력_무력] + 자체_대회_경험치;
                }
            }
            else if (대회_설전 == competitionType)
            {
                pk::message_box(pk::u8encode("대회에 참가한 모든 무장의 지력과 정치 경험치가 상승했습니다."));
                for (int i = 0; i < backUpArray.length; ++i)
                {
                    pk::person@ p = backUpArray[i];
                    p.stat_exp[무장능력_지력] = p.stat_exp[무장능력_지력] + 자체_대회_경험치;
                    p.stat_exp[무장능력_정치] = p.stat_exp[무장능력_정치] + 자체_대회_경험치;
                }
            }
            SetSingleCompetitionWinner(tradeForce.get_force_id(), winner.get_id());
            // 퇴장 
            pk::fade(0);
            pk::sleep();
            pk::background(-1);
            pk::fade(255);
        }

        // ================================================================================================================================================
    }
        
    RegionBuff regionBuff;
}