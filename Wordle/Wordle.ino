#include <Arduboy2.h>
#include <avr/pgmspace.h>

Arduboy2 arduboy;
const char cWords[] PROGMEM = "abackabaftabaseabateabbeyabbotabhorabideablerabodeaboutaboveabuseabyssachedachesacidsacornacresacridacted"
"actoracuteadageadaptaddedadderadeptadieuadmitadobeadoptadoreadornadultaegisaeonsaffixafireafootafteragainagapeagateagentagileagingaglow"
"agonyagreeaheadaidedaidesailedaimedairedaislealarmalbumalderalertaliasalibialienalikealiveallayalleyallotallowalloyaloesaloftalonealong"
"aloofaloudalphaaltaralteraltosamassamazeamberambleamendamigoamissamityamongamourampleamplyamuseangelangerangleangryangstanimeankleannex"
"annoyannulantesanticanvilapaceapartapingappalappleapplyapronaptlyareasarenaarguearisearmedaromaarosearrayarrowarsonashenashesasideasked"
"askewaspenassayassesassetasterastiratlasatollatomsatoneattaratticaudioauditaugeraughtaugurauntsaurasautosavailaversavertavoidavowsawait"
"awakeawardawareawfulawokeaxiomaxlesazurebabelbabesbacksbaconbadgebadlybaggybaitsbaizebakedbakerbalesballsbalmybanalbandsbandybangsbanjo"
"banksbannsbarbsbardsbaredbargebarksbarnsbaronbasalbasedbaserbasesbasicbasilbasinbasisbassobastebatchbatedbathebathsbatonbayoubeachbeads"
"beadybeaksbeamsbeansbeardbearsbeastbeauxbeechbeetsbefitbeganbegatbegetbeginbegotbegunbeingbeliebellebellsbellybelowbeltsbenchbendsbergs"
"berryberthberylbesetbesombevelbiblebidedbidesbightbigotbilgebillsbillybindsbipedbirchbirdsbirthbisonbitchbitesblackbladeblameblandblank"
"blareblastblazebleakbleatbleedblendblentblessblestblindblinkblissblockblocsblondbloodbloomblotsblownblowsbluerbluesbluffbluntblurtblush"
"boardboarsboastboatsbodedbodesboggybogusboilsbolesboltsbombsbondsbonedbonesbonnybonusboobybooksboomsboonsboorsboostboothbootsbootybooze"
"boraxboredboresbornebosomboughboundboutsbowedbowelbowerbowlsboxedboxerboxesbracebragsbraidbrainbrakebrandbrassbratsbravebravobrawlbrawn"
"breadbreakbreedbriarbribebrickbridebriefbrierbrigsbrimsbrinebringbrinkbrinybriskbroadbroilbrokebroodbrookbroombrothbrownbrowsbruinbrunt"
"brushbrutebucksbudgebuggybuglebuildbuiltbulbsbulgebulksbulkybullsbullybumpsbunchbunksbuoysburlyburnsburntburroburrsburstbushybustsbutte"
"buttsbuxombuyercabalcabbycabincablecacaocachecadetcadrecagedcagescairncakedcakescallscalmscalyxcamelcameocampscanalcandycanescannycanoe"
"canoncantocapercapescaponcardscaredcarescargocarolcarrycartscarvecasedcasescaskscastecastscatchcatercausecavedcavescavilceasecedarceded"
"cellscentschafechaffchainchairchalkchampchantchaoschapscharmchartcharychasechasmchatscheapcheatcheckcheekcheerchefschesschestchickchide"
"chiefchildchillchimechinachinkchinschipschirpchoirchokechopschordchosechuckchumpchumschunkchurlchurnchutecidercigarcinchcircacitedcites"
"civetciviccivilclackclaimclampclamsclangclankclansclapsclashclaspclassclawscleanclearclefscleftclerkclewsclickcliffclimbclimeclingclink"
"clipscloakclockclodsclogscloseclothcloudcloutcloveclownclubscluckcluesclumpclungcoachcoalscoastcoatscobracockscocoacodescoilscoinscolds"
"coliccoloncoltscombscomercomescometcomiccommaconchconesconiccooedcookscoolscopracopsecoralcordscorescorkscornscorpscostscotescouchcough"
"couldcountcoupecoupscourtcovercovescovetcoveycowedcowercoylycozencrabscrackcraftcragscrampcranecrankcrapecrashcrasscratecravecrawlcraze"
"crazycreakcreamcredocreedcreekcreepcrepecreptcresscrestcrewscribscrickcriedcriercriescrimecrimpcrispcroakcrockcronecronycrookcropscross"
"croupcrowdcrowncrowscrudecruelcrumbcrushcrustcryptcubescubiccubitcuffscultscurdscuredcurescurlscurlycurrycursecurstcurvecyclecynicdaddy"
"dailydairydaisydalesdallydamesdampsdancedandydareddaresdartsdateddatesdatumdaubsdauntdawnsdazeddealsdealtdeansdearsdeathdebardebitdebts"
"debutdecaydecksdecoydecrydeedsdeemsdeepsdeferdeigndeitydelaydellsdeltadelvedemondemurdensedentsdepotdepthderbydesksdeterdeucedevildiary"
"diceddicesdictadietsdigitdikesdimesdimlydineddinerdinesdingydirgedirtydiscsdisksditchdittodittydivandiveddiverdivesdizzydocksdodgedoers"
"dogmadoingdoleddollsdomeddomesdonordoomsdoorsdoseddosesdoteddotesdoubtdoughdovesdowdydownsdownydowrydozeddozendraftdragsdraindrakedrama"
"dramsdrankdrapedrawldrawndrawsdraysdreaddreamdregsdressdrieddrierdriesdriftdrilldrilydrinkdripsdrivedrolldronedroopdropsdrossdrovedrown"
"drugsdrumsdrunkdrylyducalducatduchyducksductsduelsduetsdukesdullydummydumpsdumpyduncedunesdunnodupeddupesduskydustydwarfdwelldweltdying"
"dykeseagereagleearlsearlyearnseartheasedeaseleaseseateneatereavesebbedebonyedgededgesedictedifyeerieeggedeightejectelateelbowelderelect"
"elegyelfineliteelopeeludeelvesemailemitsemptyenactendedendowenemyenjoyennuienrolensueenterentryenvoyepicsepochequalequiperaseerecterred"
"erroressayetherethicevadeeventeveryevilsevokeexactexaltexcelexertexileexistexitsexpelextolextraexulteyingeyriefablefacedfacesfactsfaded"
"fadesfailsfaintfairsfairyfaithfakirfallsfalsefamedfancyfangsfarcefaredfaresfarmsfastsfatalfatedfatesfattyfaultfaunafaunsfawnsfearsfeast"
"featsfeedsfeelsfeignfeintfellsfelonfenceferalfernsferryfetchfetedfetidfetusfeudsfeverfewerfichefiefsfieldfiendfieryfifesfifthfiftyfight"
"filchfiledfilesfiletfillsfillyfilmsfilmyfilthfinalfinchfindsfinedfinerfinesfinisfinnyfiordfiredfiresfirmsfirstfishyfistsfitlyfivesfixed"
"fixerfixesfjordflagsflailflairflakeflakyflameflankflapsflareflashflaskflatsflawsfleasfleckfleesfleetfleshflickflierfliesflingflintflirt"
"flitsfloatflockfloesfloodfloorfloraflossflourfloutflownflowsfluesflufffluidflukeflumeflungflushfluteflyerfoamsfoamyfocalfocusfoggyfoils"
"foistfoldsfoliofolksfollyfoodsfoolsforayforcefordsforgeforgoforksformsforteforthfortsfortyforumfoundfountfoursfowlsfoxesfoyerfrailframe"
"francfrankfraudfreakfreedfreerfreesfreshfretsfriarfriedfrillfriskfrockfrogsfrondfrontfrostfrothfrownfrozefruitfudgefuelsfuguefullyfumed"
"fumesfundsfungifunnyfurryfurzefusedfusesfussyfuzzygablegailygainsgalesgallsgamesgamingammagamutgangsgapedgapesgasesgaspsgatesgaudygauge"
"gauntgauzegauzygavelgawkygayergaylygazedgazergazesgearsgeesegeniegeniigenregentsgenusgermsghostgiantgibesgiddygiftsgildsgillsgimmegipsy"
"girdsgirlsgirthgivengivesgladeglandglareglassglazegleamgleanglensglideglintgloatglobegloomgloryglossgloveglowsgluedgnashgnatsgnawsgnome"
"goadsgoalsgoatsgodlygoinggollygongsgonnagoodsgoodygoosegoredgorgegorsegottagougegourdgoutygownsgrabsgracegradegraftgraingramsgrandgrant"
"grapegraphgraspgrassgrategravegravygrazegreatgreedgreengreetgreysgriefgrillgrimegrimygrindgrinsgripegripsgristgroangroingroomgropegross"
"groupgrovegrowlgrowngrowsgrubsgruelgruffgruntguanoguardguessguestguideguildguileguiltguisegulchgulfsgullsgullygummygustogustsgustygypsy"
"habithackshailshairshairyhaledhallshaltshalvehandshandyhangshappyhardyharemharesharmsharpsharpyharryharshhartshastehastyhatchhatedhater"
"haulshavenhavochawkshazelheadsheadyhealsheapsheardhearsheartheathheatsheaveheavyhedgeheedsheelsheirshelixhellohelmshelpshenceherbsherds"
"heronheroshewedhideshillshillyhiltshindshingehintshiredhireshitchhiveshoardhoaryhobbyhoistholdsholeshollyhomeshoneyhoodshoofshookshoops"
"hootshopedhopeshordehornshornyhorsehostshotelhotlyhoundhourshousehovelhoverhowlshulkshullshumanhumidhumpshumushunchhuntshurlshurryhurts"
"huskshuskyhussyhydrahyenahymnsicilyicingidealideasidiomidiotidledidleridolsidylliglooimageimbueimpelimplyinaneincurindexineptinertinfer"
"ingotinletinnerinterinureirateirkedironsironyislesisletissueitemsivoryjacksjadedjailsjauntjeansjeersjellyjerksjerkyjestsjettyjeweljiffy"
"joinsjointjokedjokerjokesjollyjoustjoyedjudgejuicejuicyjumpsjunksjuntajurorkarmakeelskeepsketchkeyedkhakikickskillskindakindskingskiosk"
"kitesknackknavekneadkneelkneesknellkneltknifeknitsknobsknockknollknotsknownknowslabellacedlaceslacksladenladlelagerlairslaitylakeslambs"
"lamedlameslampslancelandslaneslankylapellapselarchlargelargolarkslarvalassolastslatchlaterlathelathslaughlawnslayerleadsleafyleaksleaky"
"leansleapsleaptlearnleaseleashleastleaveledgeleechleekslegallemmelemonlendsleperleveelevelleverliarslibellicksliegeliensliftslightliked"
"likenlikerlikeslilaclimbolimbslimeslimitlinedlinenlinerlineslingolinkslionslistslithelivedliverliveslividllamaloadsloamyloansloathlobby"
"lobeslocallockslocuslodgeloftylogeslogicloginloinslongslooksloomsloonsloopslooselordsloserloseslotuslouselousylovedloverloveslowedlower"
"lowlyloyallucidluckylullslumpslumpylunarlunchlungelungslurchluredluresluridlurkslustslustyluteslyinglymphlynchlyricmacesmadammadlymagic"
"maidsmailsmainsmaizemajormakermakesmalesmammamanesmangamangemangomangymaniamanlymannamanormansemaplemarchmaresmarksmarrymarshmartsmasks"
"masonmastsmatchmatedmatesmauvemaximmaybemayormazesmealsmealymeansmeantmeatsmedalmediameetsmelonmeltsmemesmendsmenusmercymeresmergemerit"
"merrymesasmetalmetedmetermewedmidstmiensmightmilchmilesmilkymillsmimesmimicmincemindsminedminerminesminormintsminusmirthmisermistsmites"
"mixedmixesmoansmoatsmocksmodelmodemmodesmoistmolarmolesmommamoneymonksmonthmoodsmoodymoonsmoorsmoosemopedmoralmoresmossymotesmothsmotif"
"motormottomoundmountmournmousemouthmovedmovermovesmoviemowedmowermucusmuddymulesmultimummymumpsmunchmuralmurkymusedmusesmusicmuskymusty"
"mutedmutesmyrrhmythsnabobnailsnaivenakednamednamesnasalnastynatalnattynavalnavelnavesnearsnecksneedsneedyneighnervenestsnevernewernewly"
"nicernicheniecenightninnynoblenoblynoisenoisynomadnoncenooksnoosenorthnosednosesnotchnotednotesnounsnovelnudgenursenymphoakenoakumoases"
"oasisoatenoathsobeseobeysoccuroceanochreodderoddlyodiumoffalofferoftenoiledoldenolderomensomitsoniononsetoozedoozesopalsopensoperaopine"
"opiumopticorbitorderorganosierotherotteroughtounceoutdoouterovalsovaryovensovertowingownedowneroxideozonepacespackspaddypadrepaeanpagan"
"pagespailspainspaintpairspaledpalerpalespalmspalmypalsypanelpanespangspanicpansypantspapalpapaspaperparedparkaparksparryparsepartsparty"
"pashapastepastypatchpatespathspatiopausepavedpawedpawnspayedpayerpeacepeachpeakspealspearlpearspeasepeckspedalpeepspeerspeltspenalpence"
"penispennypeonsperchperilpeskypesospestspetalpettyphasephialphonephotopianopickspiecepierspietypigmypikespiledpilespillspilotpinchpined"
"pinespinkspintopintspiouspipedpiperpipespiquepitchpithypivotplaceplaidplainplaitplaneplankplansplantplateplaysplazapleadpleaspliedplies"
"plotspluckplugsplumbplumeplumsplushpodiapoemspoesypoetspointpoisepokedpokerpokespolarpolespolkapollspondspoolspopespoppapoppyporchpored"
"poresportsposedposerposespossepostspouchpoundpourspowerprankprateprayspresspreyspriceprickpridepriedpriesprimeprintpriorprismprivyprize"
"probeproneproofpropsproseprosyproudproveprowlprowsproxyprudeprunepsalmpshawpudgypuffspuffypullspulpypulsepumpspunchpupilpuppypureepurer"
"purgepursepussyputtyquackquaffquailquakequalmquartquasiquaysqueenqueerquellqueryquestqueuequickquietquillquiltquipsquirequitequitsquota"
"quotequothrabbirabidracedracerracesracksradiiradioraftsragedragesraidsrailsrainsrainyraiserajahrakedrakesrallyranchrangeranksrapidrarer"
"raresratedratesratioravedravenravesrayonrazedrazorreachreactreadsreadyrealmrealsreamsreapsrearsrebelrebusrebutrecurreedsreedyreefsreeks"
"reelsreevereferrefitregalreignreinsrelaxrelayrelicremitrendsrenewrentsrepayrepelreplyresetresinrestsrevelrevuerheumrhymericksriderrides"
"ridgerifleriftsrightrigidriledrillsrimesringsrinseriotsripenriperrisenriserrisesrisksriskyritesrivalrivenriverrivetroadsroamsroarsroast"
"robedrobesrobinrocksrockyroguerolesrollsromanroofsrooksroomsroomyroostrootsropedropesrosesrosinrougeroughroundrouserouteroutsrovedrover"
"rowdyrowedroyalruderruffsruinsruledrulerrulesrunesrungsrupeeruralrusessablesabresackssadlysafersagassagessahibsailssaintsaithsaladsales"
"sallysalonsalsasaltssaltysalvesalvosandssandysanersatedsatinsatyrsaucesaucysavedsavessawedscaldscalescalpscalyscampscansscantscarescarf"
"scarsscenescentscionscoffscoldscoopscopescorescornscourscoutscowlscrapscrewscripscrubscullsealsseamsseamyseatssectssedansedgeseedsseedy"
"seeksseemsseersseizesellssemensendssenseserfssergeserumservesevenseversewedsewersexesshackshadeshadyshaftshakeshakyshaleshallshaltshame"
"shamsshankshapesharesharksharpshaveshawlsheafshearshedssheensheepsheersheetsheikshelfshellshiedshiftshineshinsshinyshipsshireshirkshirt"
"shoalshockshoesshoneshookshoonshootshopsshoreshornshortshotsshoutshoveshownshowsshowyshredshrewshrubshrugshunsshutsshylysibylsidedsides"
"siegesievesighssightsigmasignssilkssilkysillssillysincesinewsingesingssinkssirensiressitessixessixthsixtysizedsizesskateskeinskiesskiff"
"skillskimsskinsskipsskirtskulkskullskunkslabsslackslagsslainslakeslangslantslapsslashslateslatsslaveslayssledssleeksleepsleetsleptslice"
"slickslideslilyslimeslimyslingslinkslipsslitssloopslopeslopsslothslugsslumpslumsslungslunkslushslylysmacksmallsmartsmashsmearsmellsmelt"
"smilesmirksmitesmithsmocksmokesmokysmotesnacksnagssnailsnakesnakysnapssnaresnarlsneaksneersniffsnipesnobssnoresnortsnoutsnowssnowysnuff"
"soapysoarssobersockssofassoggysoilssolarsolessolidsolossolvesongssonnysoothsootysoressorrysortssoughsoulssoundsoupssousesouthsowedsower"
"spacespadespakespankspanssparesparksparsspasmspawnspeakspearspeckspeedspellspeltspendspentspermspicespicyspiedspiesspikespillspiltspine"
"spinsspinyspirespitespitssplitspoilspokespookspoolspoonspoorsporesportspotsspoutsprayspreesprigspunkspurnspursspurtsquadsquatsquawstabs"
"stackstaffstagestagsstaidstainstairstakestalestalkstallstampstandstankstarestarkstarsstartstatestavestayssteadsteakstealsteamsteedsteel"
"steepsteerstemsstepssternstewsstickstiffstilestillstingstinkstintstirsstockstoicstolestonestonystoodstoolstoopstopsstorestorkstormstory"
"stoutstovestrapstrawstraystrewstripstrutstuckstudsstudystuffstumpstungstuntstylesuavesuckssugarsuingsuitesuitssulkssulkysullysunnysuper"
"surersurgesurlyswainswampswansswardswarmswaysswearsweatsweepsweetswellsweptswiftswillswimsswineswingswirlswishswoonswoopswordsworesworn"
"swungsynodsyruptabbytabletabootacittackstailstainttakentakestalestalkstallytalontamedtamertankstapertapestardytarestarrytartstaskstaste"
"tastytaunttawnytaxedtaxesteachteamstearsteaseteemsteensteethtellstempitempotempstendstenettenortensetenthtentstepeetepidtermstersetests"
"testytextsthankthefttheirthemetherethesethickthiefthighthinethingthinkthirdthongthornthosethreethrewthrobthroethrowthumbthumpthymetiara"
"tibiatickstidaltidestierstigertighttildetiledtilestillstiltstimedtimestimidtingetintstipsytiredtirestithetitletoadstoasttodaytoddytoils"
"tokentollstombstomestonedtonestongstonictoolstoothtopaztopictoquetorchtorsotortstotaltotemtouchtoughtourstowedtoweltowertownstoxictoyed"
"tracetracktracttradetrailtraintraittramptramstrapstrashtraystreadtreattreedtreestrendtresstriadtrialtribetricetricktriedtriestrilltripe"
"tripstritetrolltrooptrothtrotstrouttrucetrucktruertrulytrumptrunktrusstrusttruthtrysttubestuftstuliptulletunedtunestunicturnstuskstutor"
"twaintwangtweedtwicetwigstwinetwinstwirltwisttyingtypedtypesudderulcerultrauncleuncutunderundidundueunfitunionuniteunitsunityunsayuntie"
"untilupperupseturbanurgedurgesurineusageusersusherusingusualusurpusuryuttervaguevalesvaletvalidvaluevalvevanesvapidvasesvaultvauntveils"
"veinsveldtvenalvenomventsvenueverbsvergeversevervevestsvexedvexesvialsvicarvicesvideoviewsvigilvilervillavinesviolavipervirusvisitvisor"
"vistavitalvividvixenvizorvocalvodkavoguevoicevoilevoltsvomitvotedvotervotesvouchvowedvowelvyingwadedwaferwaftswagedwagerwageswagonwaifs"
"wailswaistwaitswaivewakedwakenwakeswalkswallswaltzwandswanedwaneswantswardswareswarmswarnswartswaspswastewatchwaterwavedwaverwaveswaxed"
"waxenwaxeswearswearyweavewedgeweedsweedyweeksweepsweighweirdwelchwellswenchwhackwhalewharfwheatwheelwhelpwherewhichwhiffwhilewhimswhine"
"whipswhirlwhirrwhiskwhistwhitewholewhoopwhorewhosewickswidenwiderwidowwidthwieldwightwildswileswillswincewinchwindswindywineswingswinks"
"wipedwipeswiredwireswiserwispswitchwittywiveswomanwomenwoodswoodywooedwooerwordswordyworksworldwormsworryworseworstworthwouldwoundwrack"
"wrapswraptwrathwreakwreckwrestwringwristwritewritswrongwrotewrothyachtyardsyarnsyawnsyearnyearsyeastyellsyelpsyieldyokedyokesyolksyoung"
"yoursyouthzebrazones";
int iWordCount;

const char cKeyboardR1[] = "QWERTYUIOP <";
const char cKeyboardR2[] = "ASDFGHJKL >";
const char cKeyboardR3[] = "ZXCVBNM";
uint8_t iKeyboardRow = 0;
uint8_t iKeyboardCol = 0;

char cCurWord[6];

char cCurGuess[6];
uint8_t iCurGuessPos = 0;

char cGuess1[6];
char cGuess2[6];
char cGuess3[6];
char cGuess4[6];
char cGuess5[6];
char cGuess6[6];
uint8_t iGuessCnt = 0;

boolean bStartGame = true;
boolean bEndGame = false;
boolean bUnknownWord = false;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(60);
  arduboy.initRandomSeed();
  
  iWordCount = (sizeof(cWords) - 1) / 5;
 
  //Serial.begin(9600); 
  // Optional: Pause execution until the Serial Monitor is connected
  //while (!Serial); 
  //Serial.println(F("System Initialized..."));
} 

void loop() {
  if (!arduboy.nextFrame()) return;

  arduboy.pollButtons();

  if (arduboy.justPressed(UP_BUTTON)) {
    if(iKeyboardRow > 0) iKeyboardRow -= 1;
    else iKeyboardRow = 2;
    if(iKeyboardRow == 1 && iKeyboardCol > 9) iKeyboardCol = 9;
    if(iKeyboardRow == 2 && iKeyboardCol > 6) iKeyboardCol = 6;
  }
  if (arduboy.justPressed(DOWN_BUTTON)) {
    if(iKeyboardRow < 2) iKeyboardRow += 1;
    else iKeyboardRow = 0;
    if(iKeyboardRow == 1 && iKeyboardCol > 9) iKeyboardCol = 9;
    if(iKeyboardRow == 2 && iKeyboardCol > 6) iKeyboardCol = 6;
  }
  if (arduboy.justPressed(RIGHT_BUTTON)) {
    iKeyboardCol += 1;
    if(iKeyboardRow == 0) {
      if(iKeyboardCol > 10) iKeyboardCol = 0;
    } 
    else if(iKeyboardRow == 1) {
      if(iKeyboardCol > 9) iKeyboardCol = 0;
    }   
    else if(iKeyboardRow == 2) {
      if(iKeyboardCol > 6) iKeyboardCol = 0;
    }   
  }
  if (arduboy.justPressed(LEFT_BUTTON)) {
    if(iKeyboardRow == 0) {
      if(iKeyboardCol == 0) iKeyboardCol = 10;
      else iKeyboardCol -= 1;
    }
    else if(iKeyboardRow == 1) {
      if(iKeyboardCol == 0) iKeyboardCol = 9;
      else iKeyboardCol -= 1;
    }
    else if(iKeyboardRow == 2) {
      if(iKeyboardCol == 0) iKeyboardCol = 6;
      else iKeyboardCol -= 1;
    }
  }
  if (arduboy.justPressed(A_BUTTON)) {
    if(bStartGame || bEndGame) {
      //init keyboard
      strncpy(cKeyboardR1, "QWERTYUIOP <", 12);
      strncpy(cKeyboardR2, "ASDFGHJKL >", 11);
      strncpy(cKeyboardR3, "ZXCVBNM", 7);
      arduboy.initRandomSeed();
      uint16_t iRand = random(0, iWordCount - 1);
      strncpy_P(cCurWord, cWords + iRand * 5, 5);
      for (uint8_t i = 0; i < 5; i++) {
        cCurWord[i] = toupper(cCurWord[i]);
      }
      bStartGame = false;
      bEndGame = false;
      iCurGuessPos = 0;
      iGuessCnt = 0;
      for(uint8_t i = 0; i < 5; i++) {
        cCurGuess[i] = '\0';
        cGuess1[i] = '\0';
        cGuess2[i] = '\0';
        cGuess3[i] = '\0';
        cGuess4[i] = '\0';
        cGuess5[i] = '\0';
        cGuess6[i] = '\0';
      }
    }
    bUnknownWord = false;
  }
  if (arduboy.justPressed(B_BUTTON)) {
    //delete key
    if(iKeyboardRow == 0 && iKeyboardCol == 10) {
      if(iCurGuessPos > 0) iCurGuessPos--;
      cCurGuess[iCurGuessPos] = '\0';
    }
    //enter key
    else if(iKeyboardRow == 1 && iKeyboardCol == 9) {
      if(strlen(cCurGuess) == 5) {
        if(FindWord()) {
          if(strcmp(cCurGuess, cCurWord) == 0) {
            bEndGame = true;
          }
          else {
            if(iGuessCnt < 5) {
              switch(iGuessCnt) {
                case 0:
                  strcpy(cGuess1, cCurGuess);
                  break;
                case 1:
                  strcpy(cGuess2, cCurGuess);
                  break;
                case 2:
                  strcpy(cGuess3, cCurGuess);
                  break;
                case 3:
                  strcpy(cGuess4, cCurGuess);
                  break;
                case 4:
                  strcpy(cGuess5, cCurGuess);
                  break;
                case 5:
                  strcpy(cGuess6, cCurGuess);
                  break;
              }
              for(uint8_t i = 0; i < 5; i++) {
                cCurGuess[i] = '\0';
              }
              iCurGuessPos = 0;
              iGuessCnt++;
            }
            else {
              bEndGame = true;
            }
          }
        }
        else {
          bUnknownWord = true;
        }
      }
    }
    //keyboard alpha character
    else {
      char cKeyboardRow[13];
      switch(iKeyboardRow) {
        case 0:
          strncpy(cKeyboardRow, cKeyboardR1, 12);
          cKeyboardRow[12] = '\0';
          break;
        case 1:
          strncpy(cKeyboardRow, cKeyboardR2, 11);
          cKeyboardRow[11] = '\0';
          break;
        case 2:
          strncpy(cKeyboardRow, cKeyboardR3, 7);
          cKeyboardRow[7] = '\0';
          break;
      }
      if(iCurGuessPos < 5) {
        cCurGuess[iCurGuessPos] = cKeyboardRow[iKeyboardCol];
        iCurGuessPos++;
      }
    }
  }
  //update display
  if(bStartGame) update_start_display();
  else if(bEndGame) update_end_display();
  else if(bUnknownWord) update_unknown_display();
  else update_game_display();
}

void update_start_display() {
  arduboy.clear();
  //title
  arduboy.setTextSize(2);
  arduboy.setCursor(28, 8);
  arduboy.print("WORDLE");
  //by
  arduboy.setTextSize(1);
  arduboy.setCursor(25, 30);
  arduboy.print("by Bill West");
  //start
  arduboy.setCursor(15, 40);
  arduboy.print("press A to start");
  //display
  arduboy.display();
}

void update_end_display() {
  arduboy.clear();
  //title
  arduboy.setTextSize(1);
  arduboy.setCursor(34, 8);
  arduboy.print("word was");
  //by
  arduboy.setTextSize(2);
  arduboy.setCursor(30, 20);
  arduboy.print(cCurWord);
  //start
  arduboy.setTextSize(1);
  arduboy.setCursor(15, 40);
  arduboy.print("press A to start");
  //display
  arduboy.display();
}

void update_unknown_display() {
  arduboy.clear();
  //unknown word
  arduboy.setTextSize(2);
  arduboy.setCursor(23, 5);
  arduboy.print("UNKNOWN");
  arduboy.setCursor(3, 25);
  arduboy.print("WORD");
  //continue
  arduboy.setTextSize(1);
  arduboy.setCursor(8, 50);
  arduboy.print("press A to continue");
  //display
  arduboy.display();
}

void update_game_display() {
  arduboy.clear();
  //draw keyboard
  arduboy.setTextSize(1);
  arduboy.setCursor(2, 30);
  arduboy.print(cKeyboardR1);
  arduboy.setCursor(8, 40);
  arduboy.print(cKeyboardR2);
  arduboy.setCursor(14, 50);
  arduboy.print(cKeyboardR3);
  //draw guess history
  uint8_t iX, iY = 4;
  for(uint8_t i = 0; i < 6; i++) {
    iX = 78;
    char cGuess[6];
    switch(i) {
      case 0:
        strncpy(cGuess, cGuess1, 5);
        break;
      case 1:
        strncpy(cGuess, cGuess2, 5);
        break;
      case 2:
        strncpy(cGuess, cGuess3, 5);
        break;
      case 3:
        strncpy(cGuess, cGuess4, 5);
        break;
      case 4:
        strncpy(cGuess, cGuess5, 5);
        break;
      case 5:
        strncpy(cGuess, cGuess6, 5);
        break;
    }
    for(uint8_t j = 0; j < 5; j++) {
      if(cGuess[0] == '\0') break;
      arduboy.setCursor(iX, iY);
      arduboy.print(cGuess[j]);
      if(cGuess[j] == cCurWord[j]) { //current letter matches
        arduboy.drawLine(iX-2, iY-2, iX+6, iY-2, WHITE); //top
        arduboy.drawLine(iX-2, iY+8, iX+6, iY+8, WHITE); //bottom
        arduboy.drawLine(iX-2, iY-2, iX-2, iY+8, WHITE); //left
        arduboy.drawLine(iX+6, iY-2, iX+6, iY+8, WHITE); //right
      }
      else {
        boolean bFound = false;
        for(uint8_t k = 0; k < 5; k++) {
          if(cGuess[j] == cCurWord[k]) {
            bFound = true;
            break;
          }
        }
        if(bFound) { //current letter somewhere in word
          arduboy.drawLine(iX-2, iY+8, iX+6, iY+8, WHITE); //bottom
        }
        else {
          for(uint8_t iRow = 0; iRow < 3; iRow++) {
            char* cKeyboardRow;
            uint8_t iNumCols;
            switch(iRow) {
              case 0:
                cKeyboardRow = cKeyboardR1;
                iNumCols = 10;
                break;
              case 1:
                cKeyboardRow = cKeyboardR2;
                iNumCols = 9;
                break;
              case 2:
                cKeyboardRow = cKeyboardR3;
                iNumCols = 7;
                break;
            }
            for(uint8_t iCol = 0; iCol < iNumCols; iCol++) {
              if(cKeyboardRow[iCol] == cGuess[j]) {
                cKeyboardRow[iCol] = tolower(cKeyboardRow[iCol]);
              }
            }
          }
        }
      }
      iX+=10;
    }
    iY+=10;
  }
  //draw current gueass
  arduboy.setTextSize(2);
  arduboy.setCursor(10, 8);
  arduboy.print(cCurGuess);
  //draw keyboard character selection underline
  uint8_t x1, x2, y;
  if (iKeyboardRow == 0) {
    y = 38;
    if(iKeyboardCol == 10) {
      x1 = 68;
      x2 = 74;
    }
    else {
      x1 = 2 + iKeyboardCol * 6;
      x2 = 6 + iKeyboardCol * 6;
    }
  }
  else if (iKeyboardRow == 1) {
    y = 48;
    if(iKeyboardCol == 9) {
      x1 = 68;
      x2 = 74;
    }
    else {
      x1 = 8 + iKeyboardCol * 6;
      x2 = 12 + iKeyboardCol * 6;
    }
  }
  else if (iKeyboardRow == 2) {
    y = 58;
    x1 = 14 + iKeyboardCol * 6;
    x2 = 18 + iKeyboardCol * 6;
  }
  arduboy.drawLine(x1, y, x2, y, WHITE);

  arduboy.display();
}

bool FindWord() {
  char cWord[6];
  for(uint16_t i=0; i < iWordCount; i++) { //iWordCount
    strncpy_P(cWord, cWords + i * 5, 5);
    cWord[5] = '\0';
    for (uint8_t j = 0; j < 5; j++) {
      cWord[j] = toupper(cWord[j]);
      cCurGuess[j] = toupper(cCurGuess[j]);
    }
    if (strcmp(cWord, cCurGuess) == 0) {
      return true;
    }
  }
  return false;
}

