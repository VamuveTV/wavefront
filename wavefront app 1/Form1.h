#pragma once
//#include <chrono>


#include <windows.h>// to use windows for timer

//#include <string>

#include "wavefront.h";

namespace wavefrontapp1 {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
//	using namespace std::chrono;

	//globals


	bool button_001_Selected = true;
	bool button_002_Selected = true;
	bool button_003_Selected = true;
	bool button_004_Selected = true;
	bool button_005_Selected = true;
	bool button_006_Selected = true;
	bool button_007_Selected = true;
	bool button_008_Selected = true;
	bool button_009_Selected = true;
	bool button_010_Selected = true;
	bool button_011_Selected = true;
	bool button_012_Selected = true;
	bool button_013_Selected = true;
	bool button_014_Selected = true;
	bool button_015_Selected = true;
	bool button_016_Selected = true;
	bool button_017_Selected = true;
	bool button_018_Selected = true;
	bool button_019_Selected = true;
	bool button_020_Selected = true;
	bool button_021_Selected = true;
	bool button_022_Selected = true;
	bool button_023_Selected = true;
	bool button_024_Selected = true;
	bool button_025_Selected = true;
	bool button_026_Selected = true;
	bool button_027_Selected = true;
	bool button_028_Selected = true;
	bool button_029_Selected = true;
	bool button_030_Selected = true;
	bool button_031_Selected = true;
	bool button_032_Selected = true;
	bool button_033_Selected = true;
	bool button_034_Selected = true;
	bool button_035_Selected = true;
	bool button_036_Selected = true;
	bool button_037_Selected = true;
	bool button_038_Selected = true;
	bool button_039_Selected = true;
	bool button_040_Selected = true;
	bool button_041_Selected = true;
	bool button_042_Selected = true;
	bool button_043_Selected = true;
	bool button_044_Selected = true;
	bool button_045_Selected = true;
	bool button_046_Selected = true;
	bool button_047_Selected = true;
	bool button_048_Selected = true;
	bool button_049_Selected = true;
	bool button_050_Selected = true;
	bool button_051_Selected = true;
	bool button_052_Selected = true;
	bool button_053_Selected = true;
	bool button_054_Selected = true;
	bool button_055_Selected = true;
	bool button_056_Selected = true;
	bool button_057_Selected = true;
	bool button_058_Selected = true;
	bool button_059_Selected = true;
	bool button_060_Selected = true;
	bool button_061_Selected = true;
	bool button_062_Selected = true;
	bool button_063_Selected = true;
	bool button_064_Selected = true;
	bool button_065_Selected = true;
	bool button_066_Selected = true;
	bool button_067_Selected = true;
	bool button_068_Selected = true;
	bool button_069_Selected = true;
	bool button_070_Selected = true;
	bool button_071_Selected = true;
	bool button_072_Selected = true;
	bool button_073_Selected = true;
	bool button_074_Selected = true;
	bool button_075_Selected = true;
	bool button_076_Selected = true;
	bool button_077_Selected = true;
	bool button_078_Selected = true;
	bool button_079_Selected = true;
	bool button_080_Selected = true;
	bool button_081_Selected = true;
	bool button_082_Selected = true;
	bool button_083_Selected = true;
	bool button_084_Selected = true;
	bool button_085_Selected = true;
	bool button_086_Selected = true;
	bool button_087_Selected = true;
	bool button_088_Selected = true;
	bool button_089_Selected = true;
	bool button_090_Selected = true;
	bool button_091_Selected = true;
	bool button_092_Selected = true;
	bool button_093_Selected = true;
	bool button_094_Selected = true;
	bool button_095_Selected = true;
	bool button_096_Selected = true;
	bool button_097_Selected = true;
	bool button_098_Selected = true;
	bool button_099_Selected = true;
	bool button_100_Selected = true;
	bool button_101_Selected = true;
	bool button_102_Selected = true;
	bool button_103_Selected = true;
	bool button_104_Selected = true;
	bool button_105_Selected = true;
	bool button_106_Selected = true;
	bool button_107_Selected = true;
	bool button_108_Selected = true;
	bool button_109_Selected = true;
	bool button_110_Selected = true;
	bool button_111_Selected = true;
	bool button_112_Selected = true;
	bool button_113_Selected = true;
	bool button_114_Selected = true;
	bool button_115_Selected = true;
	bool button_116_Selected = true;
	bool button_117_Selected = true;
	bool button_118_Selected = true;
	bool button_119_Selected = true;
	bool button_120_Selected = true;
	bool button_121_Selected = true;
	bool button_122_Selected = true;
	bool button_123_Selected = true;
	bool button_124_Selected = true;
	bool button_125_Selected = true;
	bool button_126_Selected = true;
	bool button_127_Selected = true;
	bool button_128_Selected = true;
	bool button_129_Selected = true;
	bool button_130_Selected = true;
	bool button_131_Selected = true;
	bool button_132_Selected = true;
	bool button_133_Selected = true;
	bool button_134_Selected = true;
	bool button_135_Selected = true;
	bool button_136_Selected = true;
	bool button_137_Selected = true;
	bool button_138_Selected = true;
	bool button_139_Selected = true;
	bool button_140_Selected = true;
	bool button_141_Selected = true;
	bool button_142_Selected = true;
	bool button_143_Selected = true;
	bool button_144_Selected = true;
	bool button_145_Selected = true;
	bool button_146_Selected = true;
	bool button_147_Selected = true;
	bool button_148_Selected = true;
	bool button_149_Selected = true;
	bool button_150_Selected = true;

	// values in the buttons
	unsigned char button001Value = 0;
	unsigned char button002Value = 0;
	unsigned char button003Value = 0;
	unsigned char button004Value = 0;
	unsigned char button005Value = 0;
	unsigned char button006Value = 0;
	unsigned char button007Value = 0;
	unsigned char button008Value = 0;
	unsigned char button009Value = 0;
	unsigned char button010Value = 0;
	unsigned char button011Value = 0;
	unsigned char button012Value = 0;
	unsigned char button013Value = 0;
	unsigned char button014Value = 0;
	unsigned char button015Value = 0;
	unsigned char button016Value = 0;
	unsigned char button017Value = 0;
	unsigned char button018Value = 0;
	unsigned char button019Value = 0;
	unsigned char button020Value = 0;
	unsigned char button021Value = 0;
	unsigned char button022Value = 0;
	unsigned char button023Value = 0;
	unsigned char button024Value = 0;
	unsigned char button025Value = 0;
	unsigned char button026Value = 0;
	unsigned char button027Value = 0;
	unsigned char button028Value = 0;
	unsigned char button029Value = 0;
	unsigned char button030Value = 0;
	unsigned char button031Value = 0;
	unsigned char button032Value = 0;
	unsigned char button033Value = 0;
	unsigned char button034Value = 0;
	unsigned char button035Value = 0;
	unsigned char button036Value = 0;
	unsigned char button037Value = 0;
	unsigned char button038Value = 0;
	unsigned char button039Value = 0;
	unsigned char button040Value = 0;
	unsigned char button041Value = 0;
	unsigned char button042Value = 0;
	unsigned char button043Value = 0;
	unsigned char button044Value = 0;
	unsigned char button045Value = 0;
	unsigned char button046Value = 0;
	unsigned char button047Value = 0;
	unsigned char button048Value = 0;
	unsigned char button049Value = 0;
	unsigned char button050Value = 0;
	unsigned char button051Value = 0;
	unsigned char button052Value = 0;
	unsigned char button053Value = 0;
	unsigned char button054Value = 0;
	unsigned char button055Value = 0;
	unsigned char button056Value = 0;
	unsigned char button057Value = 0;
	unsigned char button058Value = 0;
	unsigned char button059Value = 0;
	unsigned char button060Value = 0;
	unsigned char button061Value = 0;
	unsigned char button062Value = 0;
	unsigned char button063Value = 0;
	unsigned char button064Value = 0;
	unsigned char button065Value = 0;
	unsigned char button066Value = 0;
	unsigned char button067Value = 0;
	unsigned char button068Value = 0;
	unsigned char button069Value = 0;
	unsigned char button070Value = 0;
	unsigned char button071Value = 0;
	unsigned char button072Value = 0;
	unsigned char button073Value = 0;
	unsigned char button074Value = 0;
	unsigned char button075Value = 0;
	unsigned char button076Value = 0;
	unsigned char button077Value = 0;
	unsigned char button078Value = 0;
	unsigned char button079Value = 0;
	unsigned char button080Value = 0;
	unsigned char button081Value = 0;
	unsigned char button082Value = 0;
	unsigned char button083Value = 0;
	unsigned char button084Value = 0;
	unsigned char button085Value = 0;
	unsigned char button086Value = 0;
	unsigned char button087Value = 0;
	unsigned char button088Value = 0;
	unsigned char button089Value = 0;
	unsigned char button090Value = 0;
	unsigned char button091Value = 0;
	unsigned char button092Value = 0;
	unsigned char button093Value = 0;
	unsigned char button094Value = 0;
	unsigned char button095Value = 0;
	unsigned char button096Value = 0;
	unsigned char button097Value = 0;
	unsigned char button098Value = 0;
	unsigned char button099Value = 0;
	unsigned char button100Value = 0;
	unsigned char button101Value = 0;
	unsigned char button102Value = 0;
	unsigned char button103Value = 0;
	unsigned char button104Value = 0;
	unsigned char button105Value = 0;
	unsigned char button106Value = 0;
	unsigned char button107Value = 0;
	unsigned char button108Value = 0;
	unsigned char button109Value = 0;
	unsigned char button110Value = 0;
	unsigned char button111Value = 0;
	unsigned char button112Value = 0;
	unsigned char button113Value = 0;
	unsigned char button114Value = 0;
	unsigned char button115Value = 0;
	unsigned char button116Value = 0;
	unsigned char button117Value = 0;
	unsigned char button118Value = 0;
	unsigned char button119Value = 0;
	unsigned char button120Value = 0;
	unsigned char button121Value = 0;
	unsigned char button122Value = 0;
	unsigned char button123Value = 0;
	unsigned char button124Value = 0;
	unsigned char button125Value = 0;
	unsigned char button126Value = 0;
	unsigned char button127Value = 0;
	unsigned char button128Value = 0;
	unsigned char button129Value = 0;
	unsigned char button130Value = 0;
	unsigned char button131Value = 0;
	unsigned char button132Value = 0;
	unsigned char button133Value = 0;
	unsigned char button134Value = 0;
	unsigned char button135Value = 0;
	unsigned char button136Value = 0;
	unsigned char button137Value = 0;
	unsigned char button138Value = 0;
	unsigned char button139Value = 0;
	unsigned char button140Value = 0;
	unsigned char button141Value = 0;
	unsigned char button142Value = 0;
	unsigned char button143Value = 0;
	unsigned char button144Value = 0;
	unsigned char button145Value = 0;
	unsigned char button146Value = 0;
	unsigned char button147Value = 0;
	unsigned char button148Value = 0;
	unsigned char button149Value = 0;
	unsigned char button150Value = 0;

	bool wall = true;
	bool destination = false;
	bool clearCell = false;

	char destination001 = 0;
	unsigned char algorithm = 0;	

	unsigned char algorithmType = 1;

	unsigned char array1[15][10];
	unsigned char array2[150];
	int x_size = 15;
	int y_size = 10;

	int count_destinations = 0;

	int goal_x = 0;
	int goal_y = 0;

	int target_x = 0;
	int target_y = 0;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:		

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button001;
	private: System::Windows::Forms::Button^  button002;
	private: System::Windows::Forms::Button^  button003;
	private: System::Windows::Forms::Button^  button004;
	private: System::Windows::Forms::Button^  button005;
	private: System::Windows::Forms::Button^  button006;
	private: System::Windows::Forms::Button^  button007;
	private: System::Windows::Forms::Button^  button008;
	private: System::Windows::Forms::Button^  button009;
	private: System::Windows::Forms::Button^  button010;
	private: System::Windows::Forms::Button^  button011;
	private: System::Windows::Forms::Button^  button012;
	private: System::Windows::Forms::Button^  button013;
	private: System::Windows::Forms::Button^  button014;
	private: System::Windows::Forms::Button^  button015;
	private: System::Windows::Forms::Button^  button016;
	private: System::Windows::Forms::Button^  button017;
	private: System::Windows::Forms::Button^  button018;
	private: System::Windows::Forms::Button^  button019;
	private: System::Windows::Forms::Button^  button020;
	private: System::Windows::Forms::Button^  button021;
	private: System::Windows::Forms::Button^  button022;
	private: System::Windows::Forms::Button^  button023;
	private: System::Windows::Forms::Button^  button024;
	private: System::Windows::Forms::Button^  button025;
	private: System::Windows::Forms::Button^  button026;
	private: System::Windows::Forms::Button^  button027;
	private: System::Windows::Forms::Button^  button028;
	private: System::Windows::Forms::Button^  button029;
	private: System::Windows::Forms::Button^  button030;
	private: System::Windows::Forms::Button^  button031;
	private: System::Windows::Forms::Button^  button032;
	private: System::Windows::Forms::Button^  button033;
	private: System::Windows::Forms::Button^  button034;
	private: System::Windows::Forms::Button^  button035;
	private: System::Windows::Forms::Button^  button036;
	private: System::Windows::Forms::Button^  button037;
	private: System::Windows::Forms::Button^  button038;
	private: System::Windows::Forms::Button^  button039;
	private: System::Windows::Forms::Button^  button040;
	private: System::Windows::Forms::Button^  button041;
	private: System::Windows::Forms::Button^  button042;
	private: System::Windows::Forms::Button^  button043;
	private: System::Windows::Forms::Button^  button044;
	private: System::Windows::Forms::Button^  button045;
	private: System::Windows::Forms::Button^  button046;
	private: System::Windows::Forms::Button^  button047;
	private: System::Windows::Forms::Button^  button048;
	private: System::Windows::Forms::Button^  button049;
	private: System::Windows::Forms::Button^  button050;
	private: System::Windows::Forms::Button^  button051;
	private: System::Windows::Forms::Button^  button052;
	private: System::Windows::Forms::Button^  button053;
	private: System::Windows::Forms::Button^  button054;
	private: System::Windows::Forms::Button^  button055;
	private: System::Windows::Forms::Button^  button056;
	private: System::Windows::Forms::Button^  button057;
	private: System::Windows::Forms::Button^  button058;
	private: System::Windows::Forms::Button^  button059;
	private: System::Windows::Forms::Button^  button060;
	private: System::Windows::Forms::Button^  button061;
	private: System::Windows::Forms::Button^  button062;
	private: System::Windows::Forms::Button^  button063;
	private: System::Windows::Forms::Button^  button064;
	private: System::Windows::Forms::Button^  button065;
	private: System::Windows::Forms::Button^  button066;
	private: System::Windows::Forms::Button^  button067;
	private: System::Windows::Forms::Button^  button068;
	private: System::Windows::Forms::Button^  button069;
	private: System::Windows::Forms::Button^  button070;
	private: System::Windows::Forms::Button^  button071;
	private: System::Windows::Forms::Button^  button072;
	private: System::Windows::Forms::Button^  button073;
	private: System::Windows::Forms::Button^  button074;
	private: System::Windows::Forms::Button^  button075;
	private: System::Windows::Forms::Button^  button076;
	private: System::Windows::Forms::Button^  button077;
	private: System::Windows::Forms::Button^  button078;
	private: System::Windows::Forms::Button^  button079;
	private: System::Windows::Forms::Button^  button080;
	private: System::Windows::Forms::Button^  button081;
	private: System::Windows::Forms::Button^  button082;
	private: System::Windows::Forms::Button^  button083;
	private: System::Windows::Forms::Button^  button084;
	private: System::Windows::Forms::Button^  button085;
	private: System::Windows::Forms::Button^  button086;
	private: System::Windows::Forms::Button^  button087;
	private: System::Windows::Forms::Button^  button088;
	private: System::Windows::Forms::Button^  button089;
	private: System::Windows::Forms::Button^  button090;
	private: System::Windows::Forms::Button^  button091;
	private: System::Windows::Forms::Button^  button092;
	private: System::Windows::Forms::Button^  button093;
	private: System::Windows::Forms::Button^  button094;
	private: System::Windows::Forms::Button^  button095;
	private: System::Windows::Forms::Button^  button096;
	private: System::Windows::Forms::Button^  button097;
	private: System::Windows::Forms::Button^  button098;
	private: System::Windows::Forms::Button^  button099;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  button100;
	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::Button^  button105;
	private: System::Windows::Forms::Button^  button106;
	private: System::Windows::Forms::Button^  button107;
	private: System::Windows::Forms::Button^  button108;
	private: System::Windows::Forms::Button^  button109;
	private: System::Windows::Forms::Button^  button110;
	private: System::Windows::Forms::Button^  button111;
	private: System::Windows::Forms::Button^  button112;
	private: System::Windows::Forms::Button^  button113;
	private: System::Windows::Forms::Button^  button114;
	private: System::Windows::Forms::Button^  button115;
	private: System::Windows::Forms::Button^  button116;
	private: System::Windows::Forms::Button^  button117;
	private: System::Windows::Forms::Button^  button118;
	private: System::Windows::Forms::Button^  button119;
	private: System::Windows::Forms::Button^  button120;
	private: System::Windows::Forms::Button^  button121;
	private: System::Windows::Forms::Button^  button122;
	private: System::Windows::Forms::Button^  button123;
	private: System::Windows::Forms::Button^  button124;
	private: System::Windows::Forms::Button^  button125;
	private: System::Windows::Forms::Button^  button126;
	private: System::Windows::Forms::Button^  button127;
	private: System::Windows::Forms::Button^  button128;
	private: System::Windows::Forms::Button^  button129;
	private: System::Windows::Forms::Button^  button130;
	private: System::Windows::Forms::Button^  button131;
	private: System::Windows::Forms::Button^  button132;
	private: System::Windows::Forms::Button^  button133;
	private: System::Windows::Forms::Button^  button134;
	private: System::Windows::Forms::Button^  button135;
	private: System::Windows::Forms::Button^  button136;
	private: System::Windows::Forms::Button^  button137;
	private: System::Windows::Forms::Button^  button138;
	private: System::Windows::Forms::Button^  button139;
	private: System::Windows::Forms::Button^  button140;
	private: System::Windows::Forms::Button^  button141;
	private: System::Windows::Forms::Button^  button142;
	private: System::Windows::Forms::Button^  button143;
	private: System::Windows::Forms::Button^  button144;
	private: System::Windows::Forms::Button^  button145;
	private: System::Windows::Forms::Button^  button146;
	private: System::Windows::Forms::Button^  button147;
	private: System::Windows::Forms::Button^  button148;
	private: System::Windows::Forms::Button^  button149;
	private: System::Windows::Forms::Button^  button150;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  buttonTest;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButtontest1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::RadioButton^  radioButtontest2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Button^  clear_array_button;
private: System::Windows::Forms::RadioButton^  radioButtontest3;
private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::RadioButton^  radioButton5;
private: System::Windows::Forms::RadioButton^  radioButton6;
private: System::Windows::Forms::RadioButton^  radioButton7;


private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button001 = (gcnew System::Windows::Forms::Button());
			this->button002 = (gcnew System::Windows::Forms::Button());
			this->button003 = (gcnew System::Windows::Forms::Button());
			this->button004 = (gcnew System::Windows::Forms::Button());
			this->button005 = (gcnew System::Windows::Forms::Button());
			this->button006 = (gcnew System::Windows::Forms::Button());
			this->button007 = (gcnew System::Windows::Forms::Button());
			this->button008 = (gcnew System::Windows::Forms::Button());
			this->button009 = (gcnew System::Windows::Forms::Button());
			this->button010 = (gcnew System::Windows::Forms::Button());
			this->button011 = (gcnew System::Windows::Forms::Button());
			this->button012 = (gcnew System::Windows::Forms::Button());
			this->button013 = (gcnew System::Windows::Forms::Button());
			this->button014 = (gcnew System::Windows::Forms::Button());
			this->button015 = (gcnew System::Windows::Forms::Button());
			this->button016 = (gcnew System::Windows::Forms::Button());
			this->button017 = (gcnew System::Windows::Forms::Button());
			this->button018 = (gcnew System::Windows::Forms::Button());
			this->button019 = (gcnew System::Windows::Forms::Button());
			this->button020 = (gcnew System::Windows::Forms::Button());
			this->button021 = (gcnew System::Windows::Forms::Button());
			this->button022 = (gcnew System::Windows::Forms::Button());
			this->button023 = (gcnew System::Windows::Forms::Button());
			this->button024 = (gcnew System::Windows::Forms::Button());
			this->button025 = (gcnew System::Windows::Forms::Button());
			this->button026 = (gcnew System::Windows::Forms::Button());
			this->button027 = (gcnew System::Windows::Forms::Button());
			this->button028 = (gcnew System::Windows::Forms::Button());
			this->button029 = (gcnew System::Windows::Forms::Button());
			this->button030 = (gcnew System::Windows::Forms::Button());
			this->button031 = (gcnew System::Windows::Forms::Button());
			this->button032 = (gcnew System::Windows::Forms::Button());
			this->button033 = (gcnew System::Windows::Forms::Button());
			this->button034 = (gcnew System::Windows::Forms::Button());
			this->button035 = (gcnew System::Windows::Forms::Button());
			this->button036 = (gcnew System::Windows::Forms::Button());
			this->button037 = (gcnew System::Windows::Forms::Button());
			this->button038 = (gcnew System::Windows::Forms::Button());
			this->button039 = (gcnew System::Windows::Forms::Button());
			this->button040 = (gcnew System::Windows::Forms::Button());
			this->button041 = (gcnew System::Windows::Forms::Button());
			this->button042 = (gcnew System::Windows::Forms::Button());
			this->button043 = (gcnew System::Windows::Forms::Button());
			this->button044 = (gcnew System::Windows::Forms::Button());
			this->button045 = (gcnew System::Windows::Forms::Button());
			this->button046 = (gcnew System::Windows::Forms::Button());
			this->button047 = (gcnew System::Windows::Forms::Button());
			this->button048 = (gcnew System::Windows::Forms::Button());
			this->button049 = (gcnew System::Windows::Forms::Button());
			this->button050 = (gcnew System::Windows::Forms::Button());
			this->button051 = (gcnew System::Windows::Forms::Button());
			this->button052 = (gcnew System::Windows::Forms::Button());
			this->button053 = (gcnew System::Windows::Forms::Button());
			this->button054 = (gcnew System::Windows::Forms::Button());
			this->button055 = (gcnew System::Windows::Forms::Button());
			this->button056 = (gcnew System::Windows::Forms::Button());
			this->button057 = (gcnew System::Windows::Forms::Button());
			this->button058 = (gcnew System::Windows::Forms::Button());
			this->button059 = (gcnew System::Windows::Forms::Button());
			this->button060 = (gcnew System::Windows::Forms::Button());
			this->button061 = (gcnew System::Windows::Forms::Button());
			this->button062 = (gcnew System::Windows::Forms::Button());
			this->button063 = (gcnew System::Windows::Forms::Button());
			this->button064 = (gcnew System::Windows::Forms::Button());
			this->button065 = (gcnew System::Windows::Forms::Button());
			this->button066 = (gcnew System::Windows::Forms::Button());
			this->button067 = (gcnew System::Windows::Forms::Button());
			this->button068 = (gcnew System::Windows::Forms::Button());
			this->button069 = (gcnew System::Windows::Forms::Button());
			this->button070 = (gcnew System::Windows::Forms::Button());
			this->button071 = (gcnew System::Windows::Forms::Button());
			this->button072 = (gcnew System::Windows::Forms::Button());
			this->button073 = (gcnew System::Windows::Forms::Button());
			this->button074 = (gcnew System::Windows::Forms::Button());
			this->button075 = (gcnew System::Windows::Forms::Button());
			this->button076 = (gcnew System::Windows::Forms::Button());
			this->button077 = (gcnew System::Windows::Forms::Button());
			this->button078 = (gcnew System::Windows::Forms::Button());
			this->button079 = (gcnew System::Windows::Forms::Button());
			this->button080 = (gcnew System::Windows::Forms::Button());
			this->button081 = (gcnew System::Windows::Forms::Button());
			this->button082 = (gcnew System::Windows::Forms::Button());
			this->button083 = (gcnew System::Windows::Forms::Button());
			this->button084 = (gcnew System::Windows::Forms::Button());
			this->button085 = (gcnew System::Windows::Forms::Button());
			this->button086 = (gcnew System::Windows::Forms::Button());
			this->button087 = (gcnew System::Windows::Forms::Button());
			this->button088 = (gcnew System::Windows::Forms::Button());
			this->button089 = (gcnew System::Windows::Forms::Button());
			this->button090 = (gcnew System::Windows::Forms::Button());
			this->button091 = (gcnew System::Windows::Forms::Button());
			this->button092 = (gcnew System::Windows::Forms::Button());
			this->button093 = (gcnew System::Windows::Forms::Button());
			this->button094 = (gcnew System::Windows::Forms::Button());
			this->button095 = (gcnew System::Windows::Forms::Button());
			this->button096 = (gcnew System::Windows::Forms::Button());
			this->button097 = (gcnew System::Windows::Forms::Button());
			this->button098 = (gcnew System::Windows::Forms::Button());
			this->button099 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->button121 = (gcnew System::Windows::Forms::Button());
			this->button122 = (gcnew System::Windows::Forms::Button());
			this->button123 = (gcnew System::Windows::Forms::Button());
			this->button124 = (gcnew System::Windows::Forms::Button());
			this->button125 = (gcnew System::Windows::Forms::Button());
			this->button126 = (gcnew System::Windows::Forms::Button());
			this->button127 = (gcnew System::Windows::Forms::Button());
			this->button128 = (gcnew System::Windows::Forms::Button());
			this->button129 = (gcnew System::Windows::Forms::Button());
			this->button130 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button136 = (gcnew System::Windows::Forms::Button());
			this->button137 = (gcnew System::Windows::Forms::Button());
			this->button138 = (gcnew System::Windows::Forms::Button());
			this->button139 = (gcnew System::Windows::Forms::Button());
			this->button140 = (gcnew System::Windows::Forms::Button());
			this->button141 = (gcnew System::Windows::Forms::Button());
			this->button142 = (gcnew System::Windows::Forms::Button());
			this->button143 = (gcnew System::Windows::Forms::Button());
			this->button144 = (gcnew System::Windows::Forms::Button());
			this->button145 = (gcnew System::Windows::Forms::Button());
			this->button146 = (gcnew System::Windows::Forms::Button());
			this->button147 = (gcnew System::Windows::Forms::Button());
			this->button148 = (gcnew System::Windows::Forms::Button());
			this->button149 = (gcnew System::Windows::Forms::Button());
			this->button150 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtontest3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtontest2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtontest1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->clear_array_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button001
			// 
			this->button001->Location = System::Drawing::Point(80, 39);
			this->button001->Name = L"button001";
			this->button001->Size = System::Drawing::Size(34, 30);
			this->button001->TabIndex = 0;
			this->button001->Text = L"0";
			this->button001->UseVisualStyleBackColor = true;
			this->button001->Click += gcnew System::EventHandler(this, &Form1::button001_Click);
			// 
			// button002
			// 
			this->button002->Location = System::Drawing::Point(114, 39);
			this->button002->Name = L"button002";
			this->button002->Size = System::Drawing::Size(34, 30);
			this->button002->TabIndex = 1;
			this->button002->Text = L"0";
			this->button002->UseVisualStyleBackColor = true;
			this->button002->Click += gcnew System::EventHandler(this, &Form1::button002_Click);
			// 
			// button003
			// 
			this->button003->Location = System::Drawing::Point(148, 39);
			this->button003->Name = L"button003";
			this->button003->Size = System::Drawing::Size(34, 30);
			this->button003->TabIndex = 2;
			this->button003->Text = L"0";
			this->button003->UseVisualStyleBackColor = true;
			this->button003->Click += gcnew System::EventHandler(this, &Form1::button003_Click);
			// 
			// button004
			// 
			this->button004->Location = System::Drawing::Point(182, 39);
			this->button004->Name = L"button004";
			this->button004->Size = System::Drawing::Size(34, 30);
			this->button004->TabIndex = 3;
			this->button004->Text = L"0";
			this->button004->UseVisualStyleBackColor = true;
			this->button004->Click += gcnew System::EventHandler(this, &Form1::button004_Click);
			// 
			// button005
			// 
			this->button005->Location = System::Drawing::Point(216, 39);
			this->button005->Name = L"button005";
			this->button005->Size = System::Drawing::Size(34, 30);
			this->button005->TabIndex = 4;
			this->button005->Text = L"0";
			this->button005->UseVisualStyleBackColor = true;
			this->button005->Click += gcnew System::EventHandler(this, &Form1::button005_Click);
			// 
			// button006
			// 
			this->button006->Location = System::Drawing::Point(250, 39);
			this->button006->Name = L"button006";
			this->button006->Size = System::Drawing::Size(34, 30);
			this->button006->TabIndex = 5;
			this->button006->Text = L"0";
			this->button006->UseVisualStyleBackColor = true;
			this->button006->Click += gcnew System::EventHandler(this, &Form1::button006_Click);
			// 
			// button007
			// 
			this->button007->Location = System::Drawing::Point(284, 39);
			this->button007->Name = L"button007";
			this->button007->Size = System::Drawing::Size(34, 30);
			this->button007->TabIndex = 6;
			this->button007->Text = L"0";
			this->button007->UseVisualStyleBackColor = true;
			this->button007->Click += gcnew System::EventHandler(this, &Form1::button007_Click);
			// 
			// button008
			// 
			this->button008->Location = System::Drawing::Point(318, 39);
			this->button008->Name = L"button008";
			this->button008->Size = System::Drawing::Size(34, 30);
			this->button008->TabIndex = 7;
			this->button008->Text = L"0";
			this->button008->UseVisualStyleBackColor = true;
			this->button008->Click += gcnew System::EventHandler(this, &Form1::button008_Click);
			// 
			// button009
			// 
			this->button009->Location = System::Drawing::Point(352, 39);
			this->button009->Name = L"button009";
			this->button009->Size = System::Drawing::Size(34, 30);
			this->button009->TabIndex = 8;
			this->button009->Text = L"0";
			this->button009->UseVisualStyleBackColor = true;
			this->button009->Click += gcnew System::EventHandler(this, &Form1::button009_Click);
			// 
			// button010
			// 
			this->button010->Location = System::Drawing::Point(386, 39);
			this->button010->Name = L"button010";
			this->button010->Size = System::Drawing::Size(34, 30);
			this->button010->TabIndex = 9;
			this->button010->Text = L"0";
			this->button010->UseVisualStyleBackColor = true;
			this->button010->Click += gcnew System::EventHandler(this, &Form1::button010_Click);
			// 
			// button011
			// 
			this->button011->Location = System::Drawing::Point(420, 39);
			this->button011->Name = L"button011";
			this->button011->Size = System::Drawing::Size(34, 30);
			this->button011->TabIndex = 10;
			this->button011->Text = L"0";
			this->button011->UseVisualStyleBackColor = true;
			this->button011->Click += gcnew System::EventHandler(this, &Form1::button011_Click);
			// 
			// button012
			// 
			this->button012->Location = System::Drawing::Point(454, 39);
			this->button012->Name = L"button012";
			this->button012->Size = System::Drawing::Size(34, 30);
			this->button012->TabIndex = 11;
			this->button012->Text = L"0";
			this->button012->UseVisualStyleBackColor = true;
			this->button012->Click += gcnew System::EventHandler(this, &Form1::button012_Click);
			// 
			// button013
			// 
			this->button013->Location = System::Drawing::Point(488, 39);
			this->button013->Name = L"button013";
			this->button013->Size = System::Drawing::Size(34, 30);
			this->button013->TabIndex = 12;
			this->button013->Text = L"0";
			this->button013->UseVisualStyleBackColor = true;
			this->button013->Click += gcnew System::EventHandler(this, &Form1::button013_Click);
			// 
			// button014
			// 
			this->button014->Location = System::Drawing::Point(522, 39);
			this->button014->Name = L"button014";
			this->button014->Size = System::Drawing::Size(34, 30);
			this->button014->TabIndex = 13;
			this->button014->Text = L"0";
			this->button014->UseVisualStyleBackColor = true;
			this->button014->Click += gcnew System::EventHandler(this, &Form1::button014_Click);
			// 
			// button015
			// 
			this->button015->Location = System::Drawing::Point(556, 39);
			this->button015->Name = L"button015";
			this->button015->Size = System::Drawing::Size(34, 30);
			this->button015->TabIndex = 14;
			this->button015->Text = L"0";
			this->button015->UseVisualStyleBackColor = true;
			this->button015->Click += gcnew System::EventHandler(this, &Form1::button015_Click);
			// 
			// button016
			// 
			this->button016->Location = System::Drawing::Point(80, 68);
			this->button016->Name = L"button016";
			this->button016->Size = System::Drawing::Size(34, 30);
			this->button016->TabIndex = 29;
			this->button016->Text = L"0";
			this->button016->UseVisualStyleBackColor = true;
			this->button016->Click += gcnew System::EventHandler(this, &Form1::button016_Click);
			// 
			// button017
			// 
			this->button017->Location = System::Drawing::Point(114, 68);
			this->button017->Name = L"button017";
			this->button017->Size = System::Drawing::Size(34, 30);
			this->button017->TabIndex = 28;
			this->button017->Text = L"0";
			this->button017->UseVisualStyleBackColor = true;
			this->button017->Click += gcnew System::EventHandler(this, &Form1::button017_Click);
			// 
			// button018
			// 
			this->button018->Location = System::Drawing::Point(148, 68);
			this->button018->Name = L"button018";
			this->button018->Size = System::Drawing::Size(34, 30);
			this->button018->TabIndex = 27;
			this->button018->Text = L"0";
			this->button018->UseVisualStyleBackColor = true;
			this->button018->Click += gcnew System::EventHandler(this, &Form1::button018_Click);
			// 
			// button019
			// 
			this->button019->Location = System::Drawing::Point(182, 68);
			this->button019->Name = L"button019";
			this->button019->Size = System::Drawing::Size(34, 30);
			this->button019->TabIndex = 26;
			this->button019->Text = L"0";
			this->button019->UseVisualStyleBackColor = true;
			this->button019->Click += gcnew System::EventHandler(this, &Form1::button019_Click);
			// 
			// button020
			// 
			this->button020->Location = System::Drawing::Point(216, 68);
			this->button020->Name = L"button020";
			this->button020->Size = System::Drawing::Size(34, 30);
			this->button020->TabIndex = 25;
			this->button020->Text = L"0";
			this->button020->UseVisualStyleBackColor = true;
			this->button020->Click += gcnew System::EventHandler(this, &Form1::button020_Click);
			// 
			// button021
			// 
			this->button021->Location = System::Drawing::Point(250, 68);
			this->button021->Name = L"button021";
			this->button021->Size = System::Drawing::Size(34, 30);
			this->button021->TabIndex = 24;
			this->button021->Text = L"0";
			this->button021->UseVisualStyleBackColor = true;
			this->button021->Click += gcnew System::EventHandler(this, &Form1::button021_Click);
			// 
			// button022
			// 
			this->button022->Location = System::Drawing::Point(284, 68);
			this->button022->Name = L"button022";
			this->button022->Size = System::Drawing::Size(34, 30);
			this->button022->TabIndex = 23;
			this->button022->Text = L"0";
			this->button022->UseVisualStyleBackColor = true;
			this->button022->Click += gcnew System::EventHandler(this, &Form1::button022_Click);
			// 
			// button023
			// 
			this->button023->Location = System::Drawing::Point(318, 68);
			this->button023->Name = L"button023";
			this->button023->Size = System::Drawing::Size(34, 30);
			this->button023->TabIndex = 22;
			this->button023->Text = L"0";
			this->button023->UseVisualStyleBackColor = true;
			this->button023->Click += gcnew System::EventHandler(this, &Form1::button023_Click);
			// 
			// button024
			// 
			this->button024->Location = System::Drawing::Point(352, 68);
			this->button024->Name = L"button024";
			this->button024->Size = System::Drawing::Size(34, 30);
			this->button024->TabIndex = 21;
			this->button024->Text = L"0";
			this->button024->UseVisualStyleBackColor = true;
			this->button024->Click += gcnew System::EventHandler(this, &Form1::button024_Click);
			// 
			// button025
			// 
			this->button025->Location = System::Drawing::Point(386, 68);
			this->button025->Name = L"button025";
			this->button025->Size = System::Drawing::Size(34, 30);
			this->button025->TabIndex = 20;
			this->button025->Text = L"0";
			this->button025->UseVisualStyleBackColor = true;
			this->button025->Click += gcnew System::EventHandler(this, &Form1::button025_Click);
			// 
			// button026
			// 
			this->button026->Location = System::Drawing::Point(420, 68);
			this->button026->Name = L"button026";
			this->button026->Size = System::Drawing::Size(34, 30);
			this->button026->TabIndex = 19;
			this->button026->Text = L"0";
			this->button026->UseVisualStyleBackColor = true;
			this->button026->Click += gcnew System::EventHandler(this, &Form1::button026_Click);
			// 
			// button027
			// 
			this->button027->Location = System::Drawing::Point(454, 68);
			this->button027->Name = L"button027";
			this->button027->Size = System::Drawing::Size(34, 30);
			this->button027->TabIndex = 18;
			this->button027->Text = L"0";
			this->button027->UseVisualStyleBackColor = true;
			this->button027->Click += gcnew System::EventHandler(this, &Form1::button027_Click);
			// 
			// button028
			// 
			this->button028->Location = System::Drawing::Point(488, 68);
			this->button028->Name = L"button028";
			this->button028->Size = System::Drawing::Size(34, 30);
			this->button028->TabIndex = 17;
			this->button028->Text = L"0";
			this->button028->UseVisualStyleBackColor = true;
			this->button028->Click += gcnew System::EventHandler(this, &Form1::button028_Click);
			// 
			// button029
			// 
			this->button029->Location = System::Drawing::Point(522, 68);
			this->button029->Name = L"button029";
			this->button029->Size = System::Drawing::Size(34, 30);
			this->button029->TabIndex = 16;
			this->button029->Text = L"0";
			this->button029->UseVisualStyleBackColor = true;
			this->button029->Click += gcnew System::EventHandler(this, &Form1::button029_Click);
			// 
			// button030
			// 
			this->button030->Location = System::Drawing::Point(556, 68);
			this->button030->Name = L"button030";
			this->button030->Size = System::Drawing::Size(34, 30);
			this->button030->TabIndex = 15;
			this->button030->Text = L"0";
			this->button030->UseVisualStyleBackColor = true;
			this->button030->Click += gcnew System::EventHandler(this, &Form1::button030_Click);
			// 
			// button031
			// 
			this->button031->Location = System::Drawing::Point(80, 97);
			this->button031->Name = L"button031";
			this->button031->Size = System::Drawing::Size(34, 30);
			this->button031->TabIndex = 59;
			this->button031->Text = L"0";
			this->button031->UseVisualStyleBackColor = true;
			this->button031->Click += gcnew System::EventHandler(this, &Form1::button031_Click);
			// 
			// button032
			// 
			this->button032->Location = System::Drawing::Point(114, 97);
			this->button032->Name = L"button032";
			this->button032->Size = System::Drawing::Size(34, 30);
			this->button032->TabIndex = 58;
			this->button032->Text = L"0";
			this->button032->UseVisualStyleBackColor = true;
			this->button032->Click += gcnew System::EventHandler(this, &Form1::button032_Click);
			// 
			// button033
			// 
			this->button033->Location = System::Drawing::Point(148, 97);
			this->button033->Name = L"button033";
			this->button033->Size = System::Drawing::Size(34, 30);
			this->button033->TabIndex = 57;
			this->button033->Text = L"0";
			this->button033->UseVisualStyleBackColor = true;
			this->button033->Click += gcnew System::EventHandler(this, &Form1::button033_Click);
			// 
			// button034
			// 
			this->button034->Location = System::Drawing::Point(182, 97);
			this->button034->Name = L"button034";
			this->button034->Size = System::Drawing::Size(34, 30);
			this->button034->TabIndex = 56;
			this->button034->Text = L"0";
			this->button034->UseVisualStyleBackColor = true;
			this->button034->Click += gcnew System::EventHandler(this, &Form1::button034_Click);
			// 
			// button035
			// 
			this->button035->Location = System::Drawing::Point(216, 97);
			this->button035->Name = L"button035";
			this->button035->Size = System::Drawing::Size(34, 30);
			this->button035->TabIndex = 55;
			this->button035->Text = L"0";
			this->button035->UseVisualStyleBackColor = true;
			this->button035->Click += gcnew System::EventHandler(this, &Form1::button035_Click);
			// 
			// button036
			// 
			this->button036->Location = System::Drawing::Point(250, 97);
			this->button036->Name = L"button036";
			this->button036->Size = System::Drawing::Size(34, 30);
			this->button036->TabIndex = 54;
			this->button036->Text = L"0";
			this->button036->UseVisualStyleBackColor = true;
			this->button036->Click += gcnew System::EventHandler(this, &Form1::button036_Click);
			// 
			// button037
			// 
			this->button037->Location = System::Drawing::Point(284, 97);
			this->button037->Name = L"button037";
			this->button037->Size = System::Drawing::Size(34, 30);
			this->button037->TabIndex = 53;
			this->button037->Text = L"0";
			this->button037->UseVisualStyleBackColor = true;
			this->button037->Click += gcnew System::EventHandler(this, &Form1::button037_Click);
			// 
			// button038
			// 
			this->button038->Location = System::Drawing::Point(318, 97);
			this->button038->Name = L"button038";
			this->button038->Size = System::Drawing::Size(34, 30);
			this->button038->TabIndex = 52;
			this->button038->Text = L"0";
			this->button038->UseVisualStyleBackColor = true;
			this->button038->Click += gcnew System::EventHandler(this, &Form1::button038_Click);
			// 
			// button039
			// 
			this->button039->Location = System::Drawing::Point(352, 97);
			this->button039->Name = L"button039";
			this->button039->Size = System::Drawing::Size(34, 30);
			this->button039->TabIndex = 51;
			this->button039->Text = L"0";
			this->button039->UseVisualStyleBackColor = true;
			this->button039->Click += gcnew System::EventHandler(this, &Form1::button039_Click);
			// 
			// button040
			// 
			this->button040->Location = System::Drawing::Point(386, 97);
			this->button040->Name = L"button040";
			this->button040->Size = System::Drawing::Size(34, 30);
			this->button040->TabIndex = 50;
			this->button040->Text = L"0";
			this->button040->UseVisualStyleBackColor = true;
			this->button040->Click += gcnew System::EventHandler(this, &Form1::button040_Click);
			// 
			// button041
			// 
			this->button041->Location = System::Drawing::Point(420, 97);
			this->button041->Name = L"button041";
			this->button041->Size = System::Drawing::Size(34, 30);
			this->button041->TabIndex = 49;
			this->button041->Text = L"0";
			this->button041->UseVisualStyleBackColor = true;
			this->button041->Click += gcnew System::EventHandler(this, &Form1::button041_Click);
			// 
			// button042
			// 
			this->button042->Location = System::Drawing::Point(454, 97);
			this->button042->Name = L"button042";
			this->button042->Size = System::Drawing::Size(34, 30);
			this->button042->TabIndex = 48;
			this->button042->Text = L"0";
			this->button042->UseVisualStyleBackColor = true;
			this->button042->Click += gcnew System::EventHandler(this, &Form1::button042_Click);
			// 
			// button043
			// 
			this->button043->Location = System::Drawing::Point(488, 97);
			this->button043->Name = L"button043";
			this->button043->Size = System::Drawing::Size(34, 30);
			this->button043->TabIndex = 47;
			this->button043->Text = L"0";
			this->button043->UseVisualStyleBackColor = true;
			this->button043->Click += gcnew System::EventHandler(this, &Form1::button043_Click);
			// 
			// button044
			// 
			this->button044->Location = System::Drawing::Point(522, 97);
			this->button044->Name = L"button044";
			this->button044->Size = System::Drawing::Size(34, 30);
			this->button044->TabIndex = 46;
			this->button044->Text = L"0";
			this->button044->UseVisualStyleBackColor = true;
			this->button044->Click += gcnew System::EventHandler(this, &Form1::button044_Click);
			// 
			// button045
			// 
			this->button045->Location = System::Drawing::Point(556, 97);
			this->button045->Name = L"button045";
			this->button045->Size = System::Drawing::Size(34, 30);
			this->button045->TabIndex = 45;
			this->button045->Text = L"0";
			this->button045->UseVisualStyleBackColor = true;
			this->button045->Click += gcnew System::EventHandler(this, &Form1::button045_Click);
			// 
			// button046
			// 
			this->button046->Location = System::Drawing::Point(80, 126);
			this->button046->Name = L"button046";
			this->button046->Size = System::Drawing::Size(34, 30);
			this->button046->TabIndex = 44;
			this->button046->Text = L"0";
			this->button046->UseVisualStyleBackColor = true;
			this->button046->Click += gcnew System::EventHandler(this, &Form1::button046_Click);
			// 
			// button047
			// 
			this->button047->Location = System::Drawing::Point(114, 126);
			this->button047->Name = L"button047";
			this->button047->Size = System::Drawing::Size(34, 30);
			this->button047->TabIndex = 43;
			this->button047->Text = L"0";
			this->button047->UseVisualStyleBackColor = true;
			this->button047->Click += gcnew System::EventHandler(this, &Form1::button047_Click);
			// 
			// button048
			// 
			this->button048->Location = System::Drawing::Point(148, 126);
			this->button048->Name = L"button048";
			this->button048->Size = System::Drawing::Size(34, 30);
			this->button048->TabIndex = 42;
			this->button048->Text = L"0";
			this->button048->UseVisualStyleBackColor = true;
			this->button048->Click += gcnew System::EventHandler(this, &Form1::button048_Click);
			// 
			// button049
			// 
			this->button049->Location = System::Drawing::Point(182, 126);
			this->button049->Name = L"button049";
			this->button049->Size = System::Drawing::Size(34, 30);
			this->button049->TabIndex = 41;
			this->button049->Text = L"0";
			this->button049->UseVisualStyleBackColor = true;
			this->button049->Click += gcnew System::EventHandler(this, &Form1::button049_Click);
			// 
			// button050
			// 
			this->button050->Location = System::Drawing::Point(216, 126);
			this->button050->Name = L"button050";
			this->button050->Size = System::Drawing::Size(34, 30);
			this->button050->TabIndex = 40;
			this->button050->Text = L"0";
			this->button050->UseVisualStyleBackColor = true;
			this->button050->Click += gcnew System::EventHandler(this, &Form1::button050_Click);
			// 
			// button051
			// 
			this->button051->Location = System::Drawing::Point(250, 126);
			this->button051->Name = L"button051";
			this->button051->Size = System::Drawing::Size(34, 30);
			this->button051->TabIndex = 39;
			this->button051->Text = L"0";
			this->button051->UseVisualStyleBackColor = true;
			this->button051->Click += gcnew System::EventHandler(this, &Form1::button051_Click);
			// 
			// button052
			// 
			this->button052->Location = System::Drawing::Point(284, 126);
			this->button052->Name = L"button052";
			this->button052->Size = System::Drawing::Size(34, 30);
			this->button052->TabIndex = 38;
			this->button052->Text = L"0";
			this->button052->UseVisualStyleBackColor = true;
			this->button052->Click += gcnew System::EventHandler(this, &Form1::button052_Click);
			// 
			// button053
			// 
			this->button053->Location = System::Drawing::Point(318, 126);
			this->button053->Name = L"button053";
			this->button053->Size = System::Drawing::Size(34, 30);
			this->button053->TabIndex = 37;
			this->button053->Text = L"0";
			this->button053->UseVisualStyleBackColor = true;
			this->button053->Click += gcnew System::EventHandler(this, &Form1::button053_Click);
			// 
			// button054
			// 
			this->button054->Location = System::Drawing::Point(352, 126);
			this->button054->Name = L"button054";
			this->button054->Size = System::Drawing::Size(34, 30);
			this->button054->TabIndex = 36;
			this->button054->Text = L"0";
			this->button054->UseVisualStyleBackColor = true;
			this->button054->Click += gcnew System::EventHandler(this, &Form1::button054_Click);
			// 
			// button055
			// 
			this->button055->Location = System::Drawing::Point(386, 126);
			this->button055->Name = L"button055";
			this->button055->Size = System::Drawing::Size(34, 30);
			this->button055->TabIndex = 35;
			this->button055->Text = L"0";
			this->button055->UseVisualStyleBackColor = true;
			this->button055->Click += gcnew System::EventHandler(this, &Form1::button055_Click);
			// 
			// button056
			// 
			this->button056->Location = System::Drawing::Point(420, 126);
			this->button056->Name = L"button056";
			this->button056->Size = System::Drawing::Size(34, 30);
			this->button056->TabIndex = 34;
			this->button056->Text = L"0";
			this->button056->UseVisualStyleBackColor = true;
			this->button056->Click += gcnew System::EventHandler(this, &Form1::button056_Click);
			// 
			// button057
			// 
			this->button057->Location = System::Drawing::Point(454, 126);
			this->button057->Name = L"button057";
			this->button057->Size = System::Drawing::Size(34, 30);
			this->button057->TabIndex = 33;
			this->button057->Text = L"0";
			this->button057->UseVisualStyleBackColor = true;
			this->button057->Click += gcnew System::EventHandler(this, &Form1::button057_Click);
			// 
			// button058
			// 
			this->button058->Location = System::Drawing::Point(488, 126);
			this->button058->Name = L"button058";
			this->button058->Size = System::Drawing::Size(34, 30);
			this->button058->TabIndex = 32;
			this->button058->Text = L"0";
			this->button058->UseVisualStyleBackColor = true;
			this->button058->Click += gcnew System::EventHandler(this, &Form1::button058_Click);
			// 
			// button059
			// 
			this->button059->Location = System::Drawing::Point(522, 126);
			this->button059->Name = L"button059";
			this->button059->Size = System::Drawing::Size(34, 30);
			this->button059->TabIndex = 31;
			this->button059->Text = L"0";
			this->button059->UseVisualStyleBackColor = true;
			this->button059->Click += gcnew System::EventHandler(this, &Form1::button059_Click);
			// 
			// button060
			// 
			this->button060->Location = System::Drawing::Point(556, 126);
			this->button060->Name = L"button060";
			this->button060->Size = System::Drawing::Size(34, 30);
			this->button060->TabIndex = 30;
			this->button060->Text = L"0";
			this->button060->UseVisualStyleBackColor = true;
			this->button060->Click += gcnew System::EventHandler(this, &Form1::button060_Click);
			// 
			// button061
			// 
			this->button061->Location = System::Drawing::Point(80, 155);
			this->button061->Name = L"button061";
			this->button061->Size = System::Drawing::Size(34, 30);
			this->button061->TabIndex = 119;
			this->button061->Text = L"0";
			this->button061->UseVisualStyleBackColor = true;
			this->button061->Click += gcnew System::EventHandler(this, &Form1::button061_Click);
			// 
			// button062
			// 
			this->button062->Location = System::Drawing::Point(114, 155);
			this->button062->Name = L"button062";
			this->button062->Size = System::Drawing::Size(34, 30);
			this->button062->TabIndex = 118;
			this->button062->Text = L"0";
			this->button062->UseVisualStyleBackColor = true;
			this->button062->Click += gcnew System::EventHandler(this, &Form1::button062_Click);
			// 
			// button063
			// 
			this->button063->Location = System::Drawing::Point(148, 155);
			this->button063->Name = L"button063";
			this->button063->Size = System::Drawing::Size(34, 30);
			this->button063->TabIndex = 117;
			this->button063->Text = L"0";
			this->button063->UseVisualStyleBackColor = true;
			this->button063->Click += gcnew System::EventHandler(this, &Form1::button063_Click);
			// 
			// button064
			// 
			this->button064->Location = System::Drawing::Point(182, 155);
			this->button064->Name = L"button064";
			this->button064->Size = System::Drawing::Size(34, 30);
			this->button064->TabIndex = 116;
			this->button064->Text = L"0";
			this->button064->UseVisualStyleBackColor = true;
			this->button064->Click += gcnew System::EventHandler(this, &Form1::button064_Click);
			// 
			// button065
			// 
			this->button065->Location = System::Drawing::Point(216, 155);
			this->button065->Name = L"button065";
			this->button065->Size = System::Drawing::Size(34, 30);
			this->button065->TabIndex = 115;
			this->button065->Text = L"0";
			this->button065->UseVisualStyleBackColor = true;
			this->button065->Click += gcnew System::EventHandler(this, &Form1::button065_Click);
			// 
			// button066
			// 
			this->button066->Location = System::Drawing::Point(250, 155);
			this->button066->Name = L"button066";
			this->button066->Size = System::Drawing::Size(34, 30);
			this->button066->TabIndex = 114;
			this->button066->Text = L"0";
			this->button066->UseVisualStyleBackColor = true;
			this->button066->Click += gcnew System::EventHandler(this, &Form1::button066_Click);
			// 
			// button067
			// 
			this->button067->Location = System::Drawing::Point(284, 155);
			this->button067->Name = L"button067";
			this->button067->Size = System::Drawing::Size(34, 30);
			this->button067->TabIndex = 113;
			this->button067->Text = L"0";
			this->button067->UseVisualStyleBackColor = true;
			this->button067->Click += gcnew System::EventHandler(this, &Form1::button067_Click);
			// 
			// button068
			// 
			this->button068->Location = System::Drawing::Point(318, 155);
			this->button068->Name = L"button068";
			this->button068->Size = System::Drawing::Size(34, 30);
			this->button068->TabIndex = 112;
			this->button068->Text = L"0";
			this->button068->UseVisualStyleBackColor = true;
			this->button068->Click += gcnew System::EventHandler(this, &Form1::button068_Click);
			// 
			// button069
			// 
			this->button069->Location = System::Drawing::Point(352, 155);
			this->button069->Name = L"button069";
			this->button069->Size = System::Drawing::Size(34, 30);
			this->button069->TabIndex = 111;
			this->button069->Text = L"0";
			this->button069->UseVisualStyleBackColor = true;
			this->button069->Click += gcnew System::EventHandler(this, &Form1::button069_Click);
			// 
			// button070
			// 
			this->button070->Location = System::Drawing::Point(386, 155);
			this->button070->Name = L"button070";
			this->button070->Size = System::Drawing::Size(34, 30);
			this->button070->TabIndex = 110;
			this->button070->Text = L"0";
			this->button070->UseVisualStyleBackColor = true;
			this->button070->Click += gcnew System::EventHandler(this, &Form1::button070_Click);
			// 
			// button071
			// 
			this->button071->Location = System::Drawing::Point(420, 155);
			this->button071->Name = L"button071";
			this->button071->Size = System::Drawing::Size(34, 30);
			this->button071->TabIndex = 109;
			this->button071->Text = L"0";
			this->button071->UseVisualStyleBackColor = true;
			this->button071->Click += gcnew System::EventHandler(this, &Form1::button071_Click);
			// 
			// button072
			// 
			this->button072->Location = System::Drawing::Point(454, 155);
			this->button072->Name = L"button072";
			this->button072->Size = System::Drawing::Size(34, 30);
			this->button072->TabIndex = 108;
			this->button072->Text = L"0";
			this->button072->UseVisualStyleBackColor = true;
			this->button072->Click += gcnew System::EventHandler(this, &Form1::button072_Click);
			// 
			// button073
			// 
			this->button073->Location = System::Drawing::Point(488, 155);
			this->button073->Name = L"button073";
			this->button073->Size = System::Drawing::Size(34, 30);
			this->button073->TabIndex = 107;
			this->button073->Text = L"0";
			this->button073->UseVisualStyleBackColor = true;
			this->button073->Click += gcnew System::EventHandler(this, &Form1::button073_Click);
			// 
			// button074
			// 
			this->button074->Location = System::Drawing::Point(522, 155);
			this->button074->Name = L"button074";
			this->button074->Size = System::Drawing::Size(34, 30);
			this->button074->TabIndex = 106;
			this->button074->Text = L"0";
			this->button074->UseVisualStyleBackColor = true;
			this->button074->Click += gcnew System::EventHandler(this, &Form1::button074_Click);
			// 
			// button075
			// 
			this->button075->Location = System::Drawing::Point(556, 155);
			this->button075->Name = L"button075";
			this->button075->Size = System::Drawing::Size(34, 30);
			this->button075->TabIndex = 105;
			this->button075->Text = L"0";
			this->button075->UseVisualStyleBackColor = true;
			this->button075->Click += gcnew System::EventHandler(this, &Form1::button075_Click);
			// 
			// button076
			// 
			this->button076->Location = System::Drawing::Point(80, 184);
			this->button076->Name = L"button076";
			this->button076->Size = System::Drawing::Size(34, 30);
			this->button076->TabIndex = 104;
			this->button076->Text = L"0";
			this->button076->UseVisualStyleBackColor = true;
			this->button076->Click += gcnew System::EventHandler(this, &Form1::button076_Click);
			// 
			// button077
			// 
			this->button077->Location = System::Drawing::Point(114, 184);
			this->button077->Name = L"button077";
			this->button077->Size = System::Drawing::Size(34, 30);
			this->button077->TabIndex = 103;
			this->button077->Text = L"0";
			this->button077->UseVisualStyleBackColor = true;
			this->button077->Click += gcnew System::EventHandler(this, &Form1::button077_Click);
			// 
			// button078
			// 
			this->button078->Location = System::Drawing::Point(148, 184);
			this->button078->Name = L"button078";
			this->button078->Size = System::Drawing::Size(34, 30);
			this->button078->TabIndex = 102;
			this->button078->Text = L"0";
			this->button078->UseVisualStyleBackColor = true;
			this->button078->Click += gcnew System::EventHandler(this, &Form1::button078_Click);
			// 
			// button079
			// 
			this->button079->Location = System::Drawing::Point(182, 184);
			this->button079->Name = L"button079";
			this->button079->Size = System::Drawing::Size(34, 30);
			this->button079->TabIndex = 101;
			this->button079->Text = L"0";
			this->button079->UseVisualStyleBackColor = true;
			this->button079->Click += gcnew System::EventHandler(this, &Form1::button079_Click);
			// 
			// button080
			// 
			this->button080->Location = System::Drawing::Point(216, 184);
			this->button080->Name = L"button080";
			this->button080->Size = System::Drawing::Size(34, 30);
			this->button080->TabIndex = 100;
			this->button080->Text = L"0";
			this->button080->UseVisualStyleBackColor = true;
			this->button080->Click += gcnew System::EventHandler(this, &Form1::button080_Click);
			// 
			// button081
			// 
			this->button081->Location = System::Drawing::Point(250, 184);
			this->button081->Name = L"button081";
			this->button081->Size = System::Drawing::Size(34, 30);
			this->button081->TabIndex = 255;
			this->button081->Text = L"0";
			this->button081->UseVisualStyleBackColor = true;
			this->button081->Click += gcnew System::EventHandler(this, &Form1::button081_Click);
			// 
			// button082
			// 
			this->button082->Location = System::Drawing::Point(284, 184);
			this->button082->Name = L"button082";
			this->button082->Size = System::Drawing::Size(34, 30);
			this->button082->TabIndex = 98;
			this->button082->Text = L"0";
			this->button082->UseVisualStyleBackColor = true;
			this->button082->Click += gcnew System::EventHandler(this, &Form1::button082_Click);
			// 
			// button083
			// 
			this->button083->Location = System::Drawing::Point(318, 184);
			this->button083->Name = L"button083";
			this->button083->Size = System::Drawing::Size(34, 30);
			this->button083->TabIndex = 97;
			this->button083->Text = L"0";
			this->button083->UseVisualStyleBackColor = true;
			this->button083->Click += gcnew System::EventHandler(this, &Form1::button083_Click);
			// 
			// button084
			// 
			this->button084->Location = System::Drawing::Point(352, 184);
			this->button084->Name = L"button084";
			this->button084->Size = System::Drawing::Size(34, 30);
			this->button084->TabIndex = 96;
			this->button084->Text = L"0";
			this->button084->UseVisualStyleBackColor = true;
			this->button084->Click += gcnew System::EventHandler(this, &Form1::button084_Click);
			// 
			// button085
			// 
			this->button085->Location = System::Drawing::Point(386, 184);
			this->button085->Name = L"button085";
			this->button085->Size = System::Drawing::Size(34, 30);
			this->button085->TabIndex = 95;
			this->button085->Text = L"0";
			this->button085->UseVisualStyleBackColor = true;
			this->button085->Click += gcnew System::EventHandler(this, &Form1::button085_Click);
			// 
			// button086
			// 
			this->button086->Location = System::Drawing::Point(420, 184);
			this->button086->Name = L"button086";
			this->button086->Size = System::Drawing::Size(34, 30);
			this->button086->TabIndex = 94;
			this->button086->Text = L"0";
			this->button086->UseVisualStyleBackColor = true;
			this->button086->Click += gcnew System::EventHandler(this, &Form1::button086_Click);
			// 
			// button087
			// 
			this->button087->Location = System::Drawing::Point(454, 184);
			this->button087->Name = L"button087";
			this->button087->Size = System::Drawing::Size(34, 30);
			this->button087->TabIndex = 93;
			this->button087->Text = L"0";
			this->button087->UseVisualStyleBackColor = true;
			this->button087->Click += gcnew System::EventHandler(this, &Form1::button087_Click);
			// 
			// button088
			// 
			this->button088->Location = System::Drawing::Point(488, 184);
			this->button088->Name = L"button088";
			this->button088->Size = System::Drawing::Size(34, 30);
			this->button088->TabIndex = 92;
			this->button088->Text = L"0";
			this->button088->UseVisualStyleBackColor = true;
			this->button088->Click += gcnew System::EventHandler(this, &Form1::button088_Click);
			// 
			// button089
			// 
			this->button089->Location = System::Drawing::Point(522, 184);
			this->button089->Name = L"button089";
			this->button089->Size = System::Drawing::Size(34, 30);
			this->button089->TabIndex = 91;
			this->button089->Text = L"0";
			this->button089->UseVisualStyleBackColor = true;
			this->button089->Click += gcnew System::EventHandler(this, &Form1::button089_Click);
			// 
			// button090
			// 
			this->button090->Location = System::Drawing::Point(556, 184);
			this->button090->Name = L"button090";
			this->button090->Size = System::Drawing::Size(34, 30);
			this->button090->TabIndex = 90;
			this->button090->Text = L"0";
			this->button090->UseVisualStyleBackColor = true;
			this->button090->Click += gcnew System::EventHandler(this, &Form1::button090_Click);
			// 
			// button091
			// 
			this->button091->Location = System::Drawing::Point(80, 213);
			this->button091->Name = L"button091";
			this->button091->Size = System::Drawing::Size(34, 30);
			this->button091->TabIndex = 89;
			this->button091->Text = L"0";
			this->button091->UseVisualStyleBackColor = true;
			this->button091->Click += gcnew System::EventHandler(this, &Form1::button091_Click);
			// 
			// button092
			// 
			this->button092->Location = System::Drawing::Point(114, 213);
			this->button092->Name = L"button092";
			this->button092->Size = System::Drawing::Size(34, 30);
			this->button092->TabIndex = 88;
			this->button092->Text = L"0";
			this->button092->UseVisualStyleBackColor = true;
			this->button092->Click += gcnew System::EventHandler(this, &Form1::button092_Click);
			// 
			// button093
			// 
			this->button093->Location = System::Drawing::Point(148, 213);
			this->button093->Name = L"button093";
			this->button093->Size = System::Drawing::Size(34, 30);
			this->button093->TabIndex = 87;
			this->button093->Text = L"0";
			this->button093->UseVisualStyleBackColor = true;
			this->button093->Click += gcnew System::EventHandler(this, &Form1::button093_Click);
			// 
			// button094
			// 
			this->button094->Location = System::Drawing::Point(182, 213);
			this->button094->Name = L"button094";
			this->button094->Size = System::Drawing::Size(34, 30);
			this->button094->TabIndex = 86;
			this->button094->Text = L"0";
			this->button094->UseVisualStyleBackColor = true;
			this->button094->Click += gcnew System::EventHandler(this, &Form1::button094_Click);
			// 
			// button095
			// 
			this->button095->Location = System::Drawing::Point(216, 213);
			this->button095->Name = L"button095";
			this->button095->Size = System::Drawing::Size(34, 30);
			this->button095->TabIndex = 85;
			this->button095->Text = L"0";
			this->button095->UseVisualStyleBackColor = true;
			this->button095->Click += gcnew System::EventHandler(this, &Form1::button095_Click);
			// 
			// button096
			// 
			this->button096->Location = System::Drawing::Point(250, 213);
			this->button096->Name = L"button096";
			this->button096->Size = System::Drawing::Size(34, 30);
			this->button096->TabIndex = 84;
			this->button096->Text = L"0";
			this->button096->UseVisualStyleBackColor = true;
			this->button096->Click += gcnew System::EventHandler(this, &Form1::button096_Click);
			// 
			// button097
			// 
			this->button097->Location = System::Drawing::Point(284, 213);
			this->button097->Name = L"button097";
			this->button097->Size = System::Drawing::Size(34, 30);
			this->button097->TabIndex = 83;
			this->button097->Text = L"0";
			this->button097->UseVisualStyleBackColor = true;
			this->button097->Click += gcnew System::EventHandler(this, &Form1::button097_Click);
			// 
			// button098
			// 
			this->button098->Location = System::Drawing::Point(318, 213);
			this->button098->Name = L"button098";
			this->button098->Size = System::Drawing::Size(34, 30);
			this->button098->TabIndex = 82;
			this->button098->Text = L"0";
			this->button098->UseVisualStyleBackColor = true;
			this->button098->Click += gcnew System::EventHandler(this, &Form1::button098_Click);
			// 
			// button099
			// 
			this->button099->Location = System::Drawing::Point(352, 213);
			this->button099->Name = L"button099";
			this->button099->Size = System::Drawing::Size(34, 30);
			this->button099->TabIndex = 81;
			this->button099->Text = L"0";
			this->button099->UseVisualStyleBackColor = true;
			this->button099->Click += gcnew System::EventHandler(this, &Form1::button099_Click);
			// 
			// button100
			// 
			this->button100->Location = System::Drawing::Point(386, 213);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(34, 30);
			this->button100->TabIndex = 80;
			this->button100->Text = L"0";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &Form1::button100_Click);
			// 
			// button101
			// 
			this->button101->Location = System::Drawing::Point(420, 213);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(34, 30);
			this->button101->TabIndex = 79;
			this->button101->Text = L"0";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &Form1::button101_Click);
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(454, 213);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(34, 30);
			this->button102->TabIndex = 78;
			this->button102->Text = L"0";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &Form1::button102_Click);
			// 
			// button103
			// 
			this->button103->Location = System::Drawing::Point(488, 213);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(34, 30);
			this->button103->TabIndex = 77;
			this->button103->Text = L"0";
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &Form1::button103_Click);
			// 
			// button104
			// 
			this->button104->Location = System::Drawing::Point(522, 213);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(34, 30);
			this->button104->TabIndex = 76;
			this->button104->Text = L"0";
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &Form1::button104_Click);
			// 
			// button105
			// 
			this->button105->Location = System::Drawing::Point(556, 213);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(34, 30);
			this->button105->TabIndex = 75;
			this->button105->Text = L"0";
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &Form1::button105_Click);
			// 
			// button106
			// 
			this->button106->Location = System::Drawing::Point(80, 242);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(34, 30);
			this->button106->TabIndex = 194;
			this->button106->Text = L"0";
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &Form1::button106_Click);
			// 
			// button107
			// 
			this->button107->Location = System::Drawing::Point(114, 242);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(34, 30);
			this->button107->TabIndex = 193;
			this->button107->Text = L"0";
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &Form1::button107_Click);
			// 
			// button108
			// 
			this->button108->Location = System::Drawing::Point(148, 242);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(34, 30);
			this->button108->TabIndex = 192;
			this->button108->Text = L"0";
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Click += gcnew System::EventHandler(this, &Form1::button108_Click);
			// 
			// button109
			// 
			this->button109->Location = System::Drawing::Point(182, 242);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(34, 30);
			this->button109->TabIndex = 191;
			this->button109->Text = L"0";
			this->button109->UseVisualStyleBackColor = true;
			this->button109->Click += gcnew System::EventHandler(this, &Form1::button109_Click);
			// 
			// button110
			// 
			this->button110->Location = System::Drawing::Point(216, 242);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(34, 30);
			this->button110->TabIndex = 190;
			this->button110->Text = L"0";
			this->button110->UseVisualStyleBackColor = true;
			this->button110->Click += gcnew System::EventHandler(this, &Form1::button110_Click);
			// 
			// button111
			// 
			this->button111->Location = System::Drawing::Point(250, 242);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(34, 30);
			this->button111->TabIndex = 189;
			this->button111->Text = L"0";
			this->button111->UseVisualStyleBackColor = true;
			this->button111->Click += gcnew System::EventHandler(this, &Form1::button111_Click);
			// 
			// button112
			// 
			this->button112->Location = System::Drawing::Point(284, 242);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(34, 30);
			this->button112->TabIndex = 188;
			this->button112->Text = L"0";
			this->button112->UseVisualStyleBackColor = true;
			this->button112->Click += gcnew System::EventHandler(this, &Form1::button112_Click);
			// 
			// button113
			// 
			this->button113->Location = System::Drawing::Point(318, 242);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(34, 30);
			this->button113->TabIndex = 187;
			this->button113->Text = L"0";
			this->button113->UseVisualStyleBackColor = true;
			this->button113->Click += gcnew System::EventHandler(this, &Form1::button113_Click);
			// 
			// button114
			// 
			this->button114->Location = System::Drawing::Point(352, 242);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(34, 30);
			this->button114->TabIndex = 186;
			this->button114->Text = L"0";
			this->button114->UseVisualStyleBackColor = true;
			this->button114->Click += gcnew System::EventHandler(this, &Form1::button114_Click);
			// 
			// button115
			// 
			this->button115->Location = System::Drawing::Point(386, 242);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(34, 30);
			this->button115->TabIndex = 185;
			this->button115->Text = L"0";
			this->button115->UseVisualStyleBackColor = true;
			this->button115->Click += gcnew System::EventHandler(this, &Form1::button115_Click);
			// 
			// button116
			// 
			this->button116->Location = System::Drawing::Point(420, 242);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(34, 30);
			this->button116->TabIndex = 184;
			this->button116->Text = L"0";
			this->button116->UseVisualStyleBackColor = true;
			this->button116->Click += gcnew System::EventHandler(this, &Form1::button116_Click);
			// 
			// button117
			// 
			this->button117->Location = System::Drawing::Point(454, 242);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(34, 30);
			this->button117->TabIndex = 183;
			this->button117->Text = L"0";
			this->button117->UseVisualStyleBackColor = true;
			this->button117->Click += gcnew System::EventHandler(this, &Form1::button117_Click);
			// 
			// button118
			// 
			this->button118->Location = System::Drawing::Point(488, 242);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(34, 30);
			this->button118->TabIndex = 182;
			this->button118->Text = L"0";
			this->button118->UseVisualStyleBackColor = true;
			this->button118->Click += gcnew System::EventHandler(this, &Form1::button118_Click);
			// 
			// button119
			// 
			this->button119->Location = System::Drawing::Point(522, 242);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(34, 30);
			this->button119->TabIndex = 181;
			this->button119->Text = L"0";
			this->button119->UseVisualStyleBackColor = true;
			this->button119->Click += gcnew System::EventHandler(this, &Form1::button119_Click);
			// 
			// button120
			// 
			this->button120->Location = System::Drawing::Point(556, 242);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(34, 30);
			this->button120->TabIndex = 180;
			this->button120->Text = L"0";
			this->button120->UseVisualStyleBackColor = true;
			this->button120->Click += gcnew System::EventHandler(this, &Form1::button120_Click);
			// 
			// button121
			// 
			this->button121->Location = System::Drawing::Point(80, 271);
			this->button121->Name = L"button121";
			this->button121->Size = System::Drawing::Size(34, 30);
			this->button121->TabIndex = 179;
			this->button121->Text = L"0";
			this->button121->UseVisualStyleBackColor = true;
			this->button121->Click += gcnew System::EventHandler(this, &Form1::button121_Click);
			// 
			// button122
			// 
			this->button122->Location = System::Drawing::Point(114, 271);
			this->button122->Name = L"button122";
			this->button122->Size = System::Drawing::Size(34, 30);
			this->button122->TabIndex = 178;
			this->button122->Text = L"0";
			this->button122->UseVisualStyleBackColor = true;
			this->button122->Click += gcnew System::EventHandler(this, &Form1::button122_Click);
			// 
			// button123
			// 
			this->button123->Location = System::Drawing::Point(148, 271);
			this->button123->Name = L"button123";
			this->button123->Size = System::Drawing::Size(34, 30);
			this->button123->TabIndex = 177;
			this->button123->Text = L"0";
			this->button123->UseVisualStyleBackColor = true;
			this->button123->Click += gcnew System::EventHandler(this, &Form1::button123_Click);
			// 
			// button124
			// 
			this->button124->Location = System::Drawing::Point(182, 271);
			this->button124->Name = L"button124";
			this->button124->Size = System::Drawing::Size(34, 30);
			this->button124->TabIndex = 176;
			this->button124->Text = L"0";
			this->button124->UseVisualStyleBackColor = true;
			this->button124->Click += gcnew System::EventHandler(this, &Form1::button124_Click);
			// 
			// button125
			// 
			this->button125->Location = System::Drawing::Point(216, 271);
			this->button125->Name = L"button125";
			this->button125->Size = System::Drawing::Size(34, 30);
			this->button125->TabIndex = 175;
			this->button125->Text = L"0";
			this->button125->UseVisualStyleBackColor = true;
			this->button125->Click += gcnew System::EventHandler(this, &Form1::button125_Click);
			// 
			// button126
			// 
			this->button126->Location = System::Drawing::Point(250, 271);
			this->button126->Name = L"button126";
			this->button126->Size = System::Drawing::Size(34, 30);
			this->button126->TabIndex = 174;
			this->button126->Text = L"0";
			this->button126->UseVisualStyleBackColor = true;
			this->button126->Click += gcnew System::EventHandler(this, &Form1::button126_Click);
			// 
			// button127
			// 
			this->button127->Location = System::Drawing::Point(284, 271);
			this->button127->Name = L"button127";
			this->button127->Size = System::Drawing::Size(34, 30);
			this->button127->TabIndex = 173;
			this->button127->Text = L"0";
			this->button127->UseVisualStyleBackColor = true;
			this->button127->Click += gcnew System::EventHandler(this, &Form1::button127_Click);
			// 
			// button128
			// 
			this->button128->Location = System::Drawing::Point(318, 271);
			this->button128->Name = L"button128";
			this->button128->Size = System::Drawing::Size(34, 30);
			this->button128->TabIndex = 172;
			this->button128->Text = L"0";
			this->button128->UseVisualStyleBackColor = true;
			this->button128->Click += gcnew System::EventHandler(this, &Form1::button128_Click);
			// 
			// button129
			// 
			this->button129->Location = System::Drawing::Point(352, 271);
			this->button129->Name = L"button129";
			this->button129->Size = System::Drawing::Size(34, 30);
			this->button129->TabIndex = 171;
			this->button129->Text = L"0";
			this->button129->UseVisualStyleBackColor = true;
			this->button129->Click += gcnew System::EventHandler(this, &Form1::button129_Click);
			// 
			// button130
			// 
			this->button130->Location = System::Drawing::Point(386, 271);
			this->button130->Name = L"button130";
			this->button130->Size = System::Drawing::Size(34, 30);
			this->button130->TabIndex = 170;
			this->button130->Text = L"0";
			this->button130->UseVisualStyleBackColor = true;
			this->button130->Click += gcnew System::EventHandler(this, &Form1::button130_Click);
			// 
			// button131
			// 
			this->button131->Location = System::Drawing::Point(420, 271);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(34, 30);
			this->button131->TabIndex = 169;
			this->button131->Text = L"0";
			this->button131->UseVisualStyleBackColor = true;
			this->button131->Click += gcnew System::EventHandler(this, &Form1::button131_Click);
			// 
			// button132
			// 
			this->button132->Location = System::Drawing::Point(454, 271);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(34, 30);
			this->button132->TabIndex = 168;
			this->button132->Text = L"0";
			this->button132->UseVisualStyleBackColor = true;
			this->button132->Click += gcnew System::EventHandler(this, &Form1::button132_Click);
			// 
			// button133
			// 
			this->button133->Location = System::Drawing::Point(488, 271);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(34, 30);
			this->button133->TabIndex = 167;
			this->button133->Text = L"0";
			this->button133->UseVisualStyleBackColor = true;
			this->button133->Click += gcnew System::EventHandler(this, &Form1::button133_Click);
			// 
			// button134
			// 
			this->button134->Location = System::Drawing::Point(522, 271);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(34, 30);
			this->button134->TabIndex = 166;
			this->button134->Text = L"0";
			this->button134->UseVisualStyleBackColor = true;
			this->button134->Click += gcnew System::EventHandler(this, &Form1::button134_Click);
			// 
			// button135
			// 
			this->button135->Location = System::Drawing::Point(556, 271);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(34, 30);
			this->button135->TabIndex = 165;
			this->button135->Text = L"0";
			this->button135->UseVisualStyleBackColor = true;
			this->button135->Click += gcnew System::EventHandler(this, &Form1::button135_Click);
			// 
			// button136
			// 
			this->button136->Location = System::Drawing::Point(80, 300);
			this->button136->Name = L"button136";
			this->button136->Size = System::Drawing::Size(34, 30);
			this->button136->TabIndex = 164;
			this->button136->Text = L"0";
			this->button136->UseVisualStyleBackColor = true;
			this->button136->Click += gcnew System::EventHandler(this, &Form1::button136_Click);
			// 
			// button137
			// 
			this->button137->Location = System::Drawing::Point(114, 300);
			this->button137->Name = L"button137";
			this->button137->Size = System::Drawing::Size(34, 30);
			this->button137->TabIndex = 163;
			this->button137->Text = L"0";
			this->button137->UseVisualStyleBackColor = true;
			this->button137->Click += gcnew System::EventHandler(this, &Form1::button137_Click);
			// 
			// button138
			// 
			this->button138->Location = System::Drawing::Point(148, 300);
			this->button138->Name = L"button138";
			this->button138->Size = System::Drawing::Size(34, 30);
			this->button138->TabIndex = 162;
			this->button138->Text = L"0";
			this->button138->UseVisualStyleBackColor = true;
			this->button138->Click += gcnew System::EventHandler(this, &Form1::button138_Click);
			// 
			// button139
			// 
			this->button139->Location = System::Drawing::Point(182, 300);
			this->button139->Name = L"button139";
			this->button139->Size = System::Drawing::Size(34, 30);
			this->button139->TabIndex = 161;
			this->button139->Text = L"0";
			this->button139->UseVisualStyleBackColor = true;
			this->button139->Click += gcnew System::EventHandler(this, &Form1::button139_Click);
			// 
			// button140
			// 
			this->button140->Location = System::Drawing::Point(216, 300);
			this->button140->Name = L"button140";
			this->button140->Size = System::Drawing::Size(34, 30);
			this->button140->TabIndex = 160;
			this->button140->Text = L"0";
			this->button140->UseVisualStyleBackColor = true;
			this->button140->Click += gcnew System::EventHandler(this, &Form1::button140_Click);
			// 
			// button141
			// 
			this->button141->Location = System::Drawing::Point(250, 300);
			this->button141->Name = L"button141";
			this->button141->Size = System::Drawing::Size(34, 30);
			this->button141->TabIndex = 159;
			this->button141->Text = L"0";
			this->button141->UseVisualStyleBackColor = true;
			this->button141->Click += gcnew System::EventHandler(this, &Form1::button141_Click);
			// 
			// button142
			// 
			this->button142->Location = System::Drawing::Point(284, 300);
			this->button142->Name = L"button142";
			this->button142->Size = System::Drawing::Size(34, 30);
			this->button142->TabIndex = 158;
			this->button142->Text = L"0";
			this->button142->UseVisualStyleBackColor = true;
			this->button142->Click += gcnew System::EventHandler(this, &Form1::button142_Click);
			// 
			// button143
			// 
			this->button143->Location = System::Drawing::Point(318, 300);
			this->button143->Name = L"button143";
			this->button143->Size = System::Drawing::Size(34, 30);
			this->button143->TabIndex = 157;
			this->button143->Text = L"0";
			this->button143->UseVisualStyleBackColor = true;
			this->button143->Click += gcnew System::EventHandler(this, &Form1::button143_Click);
			// 
			// button144
			// 
			this->button144->Location = System::Drawing::Point(352, 300);
			this->button144->Name = L"button144";
			this->button144->Size = System::Drawing::Size(34, 30);
			this->button144->TabIndex = 156;
			this->button144->Text = L"0";
			this->button144->UseVisualStyleBackColor = true;
			this->button144->Click += gcnew System::EventHandler(this, &Form1::button144_Click);
			// 
			// button145
			// 
			this->button145->Location = System::Drawing::Point(386, 300);
			this->button145->Name = L"button145";
			this->button145->Size = System::Drawing::Size(34, 30);
			this->button145->TabIndex = 155;
			this->button145->Text = L"0";
			this->button145->UseVisualStyleBackColor = true;
			this->button145->Click += gcnew System::EventHandler(this, &Form1::button145_Click);
			// 
			// button146
			// 
			this->button146->Location = System::Drawing::Point(420, 300);
			this->button146->Name = L"button146";
			this->button146->Size = System::Drawing::Size(34, 30);
			this->button146->TabIndex = 154;
			this->button146->Text = L"0";
			this->button146->UseVisualStyleBackColor = true;
			this->button146->Click += gcnew System::EventHandler(this, &Form1::button146_Click);
			// 
			// button147
			// 
			this->button147->Location = System::Drawing::Point(454, 300);
			this->button147->Name = L"button147";
			this->button147->Size = System::Drawing::Size(34, 30);
			this->button147->TabIndex = 153;
			this->button147->Text = L"0";
			this->button147->UseVisualStyleBackColor = true;
			this->button147->Click += gcnew System::EventHandler(this, &Form1::button147_Click);
			// 
			// button148
			// 
			this->button148->Location = System::Drawing::Point(488, 300);
			this->button148->Name = L"button148";
			this->button148->Size = System::Drawing::Size(34, 30);
			this->button148->TabIndex = 152;
			this->button148->Text = L"0";
			this->button148->UseVisualStyleBackColor = true;
			this->button148->Click += gcnew System::EventHandler(this, &Form1::button148_Click);
			// 
			// button149
			// 
			this->button149->Location = System::Drawing::Point(522, 300);
			this->button149->Name = L"button149";
			this->button149->Size = System::Drawing::Size(34, 30);
			this->button149->TabIndex = 151;
			this->button149->Text = L"0";
			this->button149->UseVisualStyleBackColor = true;
			this->button149->Click += gcnew System::EventHandler(this, &Form1::button149_Click);
			// 
			// button150
			// 
			this->button150->Location = System::Drawing::Point(556, 300);
			this->button150->Name = L"button150";
			this->button150->Size = System::Drawing::Size(34, 30);
			this->button150->TabIndex = 150;
			this->button150->Text = L"0";
			this->button150->UseVisualStyleBackColor = true;
			this->button150->Click += gcnew System::EventHandler(this, &Form1::button150_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(46, 17);
			this->radioButton1->TabIndex = 197;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Wall";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(78, 17);
			this->radioButton2->TabIndex = 198;
			this->radioButton2->Text = L"Destination";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(663, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(128, 95);
			this->groupBox1->TabIndex = 199;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(49, 17);
			this->radioButton3->TabIndex = 199;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Clear";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// buttonTest
			// 
			this->buttonTest->Location = System::Drawing::Point(612, 358);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(78, 23);
			this->buttonTest->TabIndex = 200;
			this->buttonTest->Text = L"Test";
			this->buttonTest->UseVisualStyleBackColor = true;
			this->buttonTest->Click += gcnew System::EventHandler(this, &Form1::buttonTest_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButtontest3);
			this->groupBox2->Controls->Add(this->radioButtontest2);
			this->groupBox2->Controls->Add(this->radioButtontest1);
			this->groupBox2->Location = System::Drawing::Point(663, 124);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(128, 224);
			this->groupBox2->TabIndex = 201;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 159);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(121, 17);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->Text = L"1D array WF7 FASE";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 136);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(91, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->Text = L"1D array WF6";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 113);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(91, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"1D array WF5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 90);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(91, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"1D array WF4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButtontest3
			// 
			this->radioButtontest3->AutoSize = true;
			this->radioButtontest3->Location = System::Drawing::Point(6, 67);
			this->radioButtontest3->Name = L"radioButtontest3";
			this->radioButtontest3->Size = System::Drawing::Size(91, 17);
			this->radioButtontest3->TabIndex = 2;
			this->radioButtontest3->Text = L"1D array WF3";
			this->radioButtontest3->UseVisualStyleBackColor = true;
			this->radioButtontest3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtontest3_CheckedChanged);
			// 
			// radioButtontest2
			// 
			this->radioButtontest2->AutoSize = true;
			this->radioButtontest2->Location = System::Drawing::Point(7, 44);
			this->radioButtontest2->Name = L"radioButtontest2";
			this->radioButtontest2->Size = System::Drawing::Size(91, 17);
			this->radioButtontest2->TabIndex = 1;
			this->radioButtontest2->Text = L"2D array WF2";
			this->radioButtontest2->UseVisualStyleBackColor = true;
			this->radioButtontest2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtontest2_CheckedChanged);
			// 
			// radioButtontest1
			// 
			this->radioButtontest1->AutoSize = true;
			this->radioButtontest1->Checked = true;
			this->radioButtontest1->Location = System::Drawing::Point(7, 20);
			this->radioButtontest1->Name = L"radioButtontest1";
			this->radioButtontest1->Size = System::Drawing::Size(60, 17);
			this->radioButtontest1->TabIndex = 0;
			this->radioButtontest1->TabStop = true;
			this->radioButtontest1->Text = L"Original";
			this->radioButtontest1->UseVisualStyleBackColor = true;
			this->radioButtontest1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtontest1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(454, 340);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 41);
			this->label1->TabIndex = 202;
			this->label1->Text = L"Place a single \r\ndestination before\r\nyou Select Test";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(278, -2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 203;
			this->label2->Text = L"X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 204;
			this->label3->Text = L"Y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 205;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(61, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 206;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 207;
			this->label6->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(61, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 208;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(154, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 209;
			this->label8->Text = L"2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(61, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 210;
			this->label9->Text = L"2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(188, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 211;
			this->label10->Text = L"3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(61, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 212;
			this->label11->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(222, 23);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 213;
			this->label12->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(61, 160);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 214;
			this->label13->Text = L"4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(256, 23);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 215;
			this->label14->Text = L"5";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(61, 189);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 216;
			this->label15->Text = L"5";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(290, 23);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 217;
			this->label16->Text = L"6";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(61, 218);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 218;
			this->label17->Text = L"6";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(324, 23);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 219;
			this->label18->Text = L"7";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(61, 247);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 220;
			this->label19->Text = L"7";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(358, 23);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 221;
			this->label20->Text = L"8";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(61, 276);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 222;
			this->label21->Text = L"8";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(392, 23);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(13, 13);
			this->label22->TabIndex = 223;
			this->label22->Text = L"9";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(61, 305);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 224;
			this->label23->Text = L"9";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(429, 23);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(19, 13);
			this->label24->TabIndex = 225;
			this->label24->Text = L"10";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(460, 23);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(19, 13);
			this->label25->TabIndex = 226;
			this->label25->Text = L"11";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(528, 23);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(19, 13);
			this->label26->TabIndex = 228;
			this->label26->Text = L"13";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(497, 23);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(19, 13);
			this->label27->TabIndex = 227;
			this->label27->Text = L"12";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(565, 23);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(19, 13);
			this->label28->TabIndex = 229;
			this->label28->Text = L"14";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(80, 339);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(73, 13);
			this->label29->TabIndex = 230;
			this->label29->Text = L"Routine Time:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(157, 339);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(63, 13);
			this->label30->TabIndex = 231;
			this->label30->Text = L"milliseconds";
			// 
			// clear_array_button
			// 
			this->clear_array_button->Location = System::Drawing::Point(612, 392);
			this->clear_array_button->Name = L"clear_array_button";
			this->clear_array_button->Size = System::Drawing::Size(75, 23);
			this->clear_array_button->TabIndex = 232;
			this->clear_array_button->Text = L"Clear Array";
			this->clear_array_button->UseVisualStyleBackColor = true;
			this->clear_array_button->Click += gcnew System::EventHandler(this, &Form1::clear_array_button_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(814, 459);
			this->Controls->Add(this->clear_array_button);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->buttonTest);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button106);
			this->Controls->Add(this->button107);
			this->Controls->Add(this->button108);
			this->Controls->Add(this->button109);
			this->Controls->Add(this->button110);
			this->Controls->Add(this->button111);
			this->Controls->Add(this->button112);
			this->Controls->Add(this->button113);
			this->Controls->Add(this->button114);
			this->Controls->Add(this->button115);
			this->Controls->Add(this->button116);
			this->Controls->Add(this->button117);
			this->Controls->Add(this->button118);
			this->Controls->Add(this->button119);
			this->Controls->Add(this->button120);
			this->Controls->Add(this->button121);
			this->Controls->Add(this->button122);
			this->Controls->Add(this->button123);
			this->Controls->Add(this->button124);
			this->Controls->Add(this->button125);
			this->Controls->Add(this->button126);
			this->Controls->Add(this->button127);
			this->Controls->Add(this->button128);
			this->Controls->Add(this->button129);
			this->Controls->Add(this->button130);
			this->Controls->Add(this->button131);
			this->Controls->Add(this->button132);
			this->Controls->Add(this->button133);
			this->Controls->Add(this->button134);
			this->Controls->Add(this->button135);
			this->Controls->Add(this->button136);
			this->Controls->Add(this->button137);
			this->Controls->Add(this->button138);
			this->Controls->Add(this->button139);
			this->Controls->Add(this->button140);
			this->Controls->Add(this->button141);
			this->Controls->Add(this->button142);
			this->Controls->Add(this->button143);
			this->Controls->Add(this->button144);
			this->Controls->Add(this->button145);
			this->Controls->Add(this->button146);
			this->Controls->Add(this->button147);
			this->Controls->Add(this->button148);
			this->Controls->Add(this->button149);
			this->Controls->Add(this->button150);
			this->Controls->Add(this->button061);
			this->Controls->Add(this->button062);
			this->Controls->Add(this->button063);
			this->Controls->Add(this->button064);
			this->Controls->Add(this->button065);
			this->Controls->Add(this->button066);
			this->Controls->Add(this->button067);
			this->Controls->Add(this->button068);
			this->Controls->Add(this->button069);
			this->Controls->Add(this->button070);
			this->Controls->Add(this->button071);
			this->Controls->Add(this->button072);
			this->Controls->Add(this->button073);
			this->Controls->Add(this->button074);
			this->Controls->Add(this->button075);
			this->Controls->Add(this->button076);
			this->Controls->Add(this->button077);
			this->Controls->Add(this->button078);
			this->Controls->Add(this->button079);
			this->Controls->Add(this->button080);
			this->Controls->Add(this->button081);
			this->Controls->Add(this->button082);
			this->Controls->Add(this->button083);
			this->Controls->Add(this->button084);
			this->Controls->Add(this->button085);
			this->Controls->Add(this->button086);
			this->Controls->Add(this->button087);
			this->Controls->Add(this->button088);
			this->Controls->Add(this->button089);
			this->Controls->Add(this->button090);
			this->Controls->Add(this->button091);
			this->Controls->Add(this->button092);
			this->Controls->Add(this->button093);
			this->Controls->Add(this->button094);
			this->Controls->Add(this->button095);
			this->Controls->Add(this->button096);
			this->Controls->Add(this->button097);
			this->Controls->Add(this->button098);
			this->Controls->Add(this->button099);
			this->Controls->Add(this->button100);
			this->Controls->Add(this->button101);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->button103);
			this->Controls->Add(this->button104);
			this->Controls->Add(this->button105);
			this->Controls->Add(this->button031);
			this->Controls->Add(this->button032);
			this->Controls->Add(this->button033);
			this->Controls->Add(this->button034);
			this->Controls->Add(this->button035);
			this->Controls->Add(this->button036);
			this->Controls->Add(this->button037);
			this->Controls->Add(this->button038);
			this->Controls->Add(this->button039);
			this->Controls->Add(this->button040);
			this->Controls->Add(this->button041);
			this->Controls->Add(this->button042);
			this->Controls->Add(this->button043);
			this->Controls->Add(this->button044);
			this->Controls->Add(this->button045);
			this->Controls->Add(this->button046);
			this->Controls->Add(this->button047);
			this->Controls->Add(this->button048);
			this->Controls->Add(this->button049);
			this->Controls->Add(this->button050);
			this->Controls->Add(this->button051);
			this->Controls->Add(this->button052);
			this->Controls->Add(this->button053);
			this->Controls->Add(this->button054);
			this->Controls->Add(this->button055);
			this->Controls->Add(this->button056);
			this->Controls->Add(this->button057);
			this->Controls->Add(this->button058);
			this->Controls->Add(this->button059);
			this->Controls->Add(this->button060);
			this->Controls->Add(this->button016);
			this->Controls->Add(this->button017);
			this->Controls->Add(this->button018);
			this->Controls->Add(this->button019);
			this->Controls->Add(this->button020);
			this->Controls->Add(this->button021);
			this->Controls->Add(this->button022);
			this->Controls->Add(this->button023);
			this->Controls->Add(this->button024);
			this->Controls->Add(this->button025);
			this->Controls->Add(this->button026);
			this->Controls->Add(this->button027);
			this->Controls->Add(this->button028);
			this->Controls->Add(this->button029);
			this->Controls->Add(this->button030);
			this->Controls->Add(this->button015);
			this->Controls->Add(this->button014);
			this->Controls->Add(this->button013);
			this->Controls->Add(this->button012);
			this->Controls->Add(this->button011);
			this->Controls->Add(this->button010);
			this->Controls->Add(this->button009);
			this->Controls->Add(this->button008);
			this->Controls->Add(this->button007);
			this->Controls->Add(this->button006);
			this->Controls->Add(this->button005);
			this->Controls->Add(this->button004);
			this->Controls->Add(this->button003);
			this->Controls->Add(this->button002);
			this->Controls->Add(this->button001);
			this->Name = L"Form1";
			this->Text = L"Wavefront Algorithm Tester";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



		 ////////////////////
/*
	bool wall = true;
	bool destination = false;
	bool clearCell = false;

	char destination001 = 0;
	unsigned char algorithm = 0;
*/


private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//to place a wall
	if (radioButton1->Checked == true)
	{
		wall = true;
		destination = false;
		clearCell = false;
	}
}


private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//to place a destination, should only have 1 destination
	if (radioButton2->Checked == true)
	{
		wall = false;
		destination = true;
		clearCell = false;
	}
}

private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//used to clear a block
	if (radioButton3->Checked == true)
	{
		wall = false;
		destination = false;
		clearCell = true;
	}
}

private: System::Void button001_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_001_Selected == true && wall == true)
	{
		button001->BackColor = Color::Red;
		button001->Text = "255";
		button001Value = 255;
	}

	if (button_001_Selected == true && destination == true)
	{
		button001->BackColor = Color::Aqua;
		button001->Text = "1";
		button001Value = 1;
	}

	if (button_001_Selected == true && clearCell == true)
	{
		button001->BackColor = SystemColors::Control;
		button001->Text = "0";
		button001Value = 0;
	}
}

private: System::Void button002_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_002_Selected == true && wall == true)
	{
		button002->BackColor = Color::Red;
		button002->Text = "255";
		button002Value = 255;
	}

	if (button_002_Selected == true && destination == true)
	{
		button002->BackColor = Color::Aqua;
		button002->Text = "1";
		button002Value = 1;
	}

	if (button_002_Selected == true && clearCell == true)
	{
		button002->BackColor = SystemColors::Control;
		button002->Text = "0";
		button002Value = 0;
	}
}

private: System::Void button003_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_003_Selected == true && wall == true)
	{
		button003->BackColor = Color::Red;
		button003->Text = "255";
		button003Value = 255;
	}

	if (button_003_Selected == true && destination == true)
	{
		button003->BackColor = Color::Aqua;
		button003->Text = "1";
		button003Value = 1;
	}

	if (button_003_Selected == true && clearCell == true)
	{
		button003->BackColor = SystemColors::Control;
		button003->Text = "0";
		button003Value = 0;
	}
}

private: System::Void button004_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_004_Selected == true && wall == true)
	{
		button004->BackColor = Color::Red;
		button004->Text = "255";
		button004Value = 255;
	}

	if (button_004_Selected == true && destination == true)
	{
		button004->BackColor = Color::Aqua;
		button004->Text = "1";
		button004Value = 1;
	}

	if (button_004_Selected == true && clearCell == true)
	{
		button004->BackColor = SystemColors::Control;
		button004->Text = "0";
		button004Value = 0;
	}
}

private: System::Void button005_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_005_Selected == true && wall == true)
	{
		button005->BackColor = Color::Red;
		button005->Text = "255";
		button005Value = 255;
	}

	if (button_005_Selected == true && destination == true)
	{
		button005->BackColor = Color::Aqua;
		button005->Text = "1";
		button005Value = 1;
	}

	if (button_005_Selected == true && clearCell == true)
	{
		button005->BackColor = SystemColors::Control;
		button005->Text = "0";
		button005Value = 0;
	}
}

private: System::Void button006_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_006_Selected == true && wall == true)
	{
		button006->BackColor = Color::Red;
		button006->Text = "255";
		button006Value = 255;
	}

	if (button_006_Selected == true && destination == true)
	{
		button006->BackColor = Color::Aqua;
		button006->Text = "1";
		button006Value = 1;
	}

	if (button_006_Selected == true && clearCell == true)
	{
		button006->BackColor = SystemColors::Control;
		button006->Text = "0";
		button006Value = 0;
	}
}

private: System::Void button007_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_007_Selected == true && wall == true)
	{
		button007->BackColor = Color::Red;
		button007->Text = "255";
		button007Value = 255;
	}

	if (button_007_Selected == true && destination == true)
	{
		button007->BackColor = Color::Aqua;
		button007->Text = "1";
		button007Value = 1;
	}

	if (button_007_Selected == true && clearCell == true)
	{
		button007->BackColor = SystemColors::Control;
		button007->Text = "0";
		button007Value = 0;
	}

}

private: System::Void button008_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_008_Selected == true && wall == true)
	{
		button008->BackColor = Color::Red;
		button008->Text = "255";
		button008Value = 255;
	}

	if (button_008_Selected == true && destination == true)
	{
		button008->BackColor = Color::Aqua;
		button008->Text = "1";
		button008Value = 1;
	}

	if (button_008_Selected == true && clearCell == true)
	{
		button008->BackColor = SystemColors::Control;
		button008->Text = "0";
		button008Value = 0;
	}

}

private: System::Void button009_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_009_Selected == true && wall == true)
	{
		button009->BackColor = Color::Red;
		button009->Text = "255";
		button009Value = 255;
	}

	if (button_009_Selected == true && destination == true)
	{
		button009->BackColor = Color::Aqua;
		button009->Text = "1";
		button009Value = 1;
	}

	if (button_009_Selected == true && clearCell == true)
	{
		button009->BackColor = SystemColors::Control;
		button009->Text = "0";
		button009Value = 0;
	}
}

private: System::Void button010_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_010_Selected == true && wall == true)
	{
		button010->BackColor = Color::Red;
		button010->Text = "255";
		button010Value = 255;
	}

	if (button_010_Selected == true && destination == true)
	{
		button010->BackColor = Color::Aqua;
		button010->Text = "1";
		button010Value = 1;
	}

	if (button_010_Selected == true && clearCell == true)
	{
		button010->BackColor = SystemColors::Control;
		button010->Text = "0";
		button010Value = 0;
	}
}

private: System::Void button011_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_011_Selected == true && wall == true)
	{
		button011->BackColor = Color::Red;
		button011->Text = "255";
		button011Value = 255;
	}

	if (button_011_Selected == true && destination == true)
	{
		button011->BackColor = Color::Aqua;
		button011->Text = "1";
		button011Value = 1;
	}

	if (button_011_Selected == true && clearCell == true)
	{
		button011->BackColor = SystemColors::Control;
		button011->Text = "0";
		button011Value = 0;
	}
}

private: System::Void button012_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_012_Selected == true && wall == true)
	{
		button012->BackColor = Color::Red;
		button012->Text = "255";
		button012Value = 255;
	}

	if (button_012_Selected == true && destination == true)
	{
		button012->BackColor = Color::Aqua;
		button012->Text = "1";
		button012Value = 1;
	}

	if (button_012_Selected == true && clearCell == true)
	{
		button012->BackColor = SystemColors::Control;
		button012->Text = "0";
		button012Value = 0;
	}
}

private: System::Void button013_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_013_Selected == true && wall == true)
	{
		button013->BackColor = Color::Red;
		button013->Text = "255";
		button013Value = 255;
	}

	if (button_013_Selected == true && destination == true)
	{
		button013->BackColor = Color::Aqua;
		button013->Text = "1";
		button013Value = 1;
	}

	if (button_013_Selected == true && clearCell == true)
	{
		button013->BackColor = SystemColors::Control;
		button013->Text = "0";
		button013Value = 0;
	}
}

private: System::Void button014_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_014_Selected == true && wall == true)
	{
		button014->BackColor = Color::Red;
		button014->Text = "255";
		button014Value = 255;
	}

	if (button_014_Selected == true && destination == true)
	{
		button014->BackColor = Color::Aqua;
		button014->Text = "1";
		button014Value = 1;
	}

	if (button_014_Selected == true && clearCell == true)
	{
		button014->BackColor = SystemColors::Control;
		button014->Text = "0";
		button014Value = 0;
	}
}

private: System::Void button015_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_015_Selected == true && wall == true)
	{
		button015->BackColor = Color::Red;
		button015->Text = "255";
		button015Value = 255;
	}

	if (button_015_Selected == true && destination == true)
	{
		button015->BackColor = Color::Aqua;
		button015->Text = "1";
		button015Value = 1;
	}

	if (button_015_Selected == true && clearCell == true)
	{
		button015->BackColor = SystemColors::Control;
		button015->Text = "0";
		button015Value = 0;
	}
}

private: System::Void button016_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_016_Selected == true && wall == true)
	{
		button016->BackColor = Color::Red;
		button016->Text = "255";
		button016Value = 255;
	}

	if (button_016_Selected == true && destination == true)
	{
		button016->BackColor = Color::Aqua;
		button016->Text = "1";
		button016Value = 1;
	}

	if (button_016_Selected == true && clearCell == true)
	{
		button016->BackColor = SystemColors::Control;
		button016->Text = "0";
		button016Value = 0;
	}
}

private: System::Void button017_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_017_Selected == true && wall == true)
	{
		button017->BackColor = Color::Red;
		button017->Text = "255";
		button017Value = 255;
	}

	if (button_017_Selected == true && destination == true)
	{
		button017->BackColor = Color::Aqua;
		button017->Text = "1";
		button017Value = 1;
	}

	if (button_017_Selected == true && clearCell == true)
	{
		button017->BackColor = SystemColors::Control;
		button017->Text = "0";
		button017Value = 0;
	}
}

private: System::Void button018_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_018_Selected == true && wall == true)
	{
		button018->BackColor = Color::Red;
		button018->Text = "255";
		button018Value = 255;
	}

	if (button_018_Selected == true && destination == true)
	{
		button018->BackColor = Color::Aqua;
		button018->Text = "1";
		button018Value = 1;
	}

	if (button_018_Selected == true && clearCell == true)
	{
		button018->BackColor = SystemColors::Control;
		button018->Text = "0";
		button018Value = 0;
	}
}

private: System::Void button019_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_019_Selected == true && wall == true)
	{
		button019->BackColor = Color::Red;
		button019->Text = "255";
		button019Value = 255;
	}

	if (button_019_Selected == true && destination == true)
	{
		button019->BackColor = Color::Aqua;
		button019->Text = "1";
		button019Value = 1;
	}

	if (button_019_Selected == true && clearCell == true)
	{
		button019->BackColor = SystemColors::Control;
		button019->Text = "0";
		button019Value = 0;
	}
}

private: System::Void button020_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_020_Selected == true && wall == true)
	{
		button020->BackColor = Color::Red;
		button020->Text = "255";
		button020Value = 255;
	}

	if (button_020_Selected == true && destination == true)
	{
		button020->BackColor = Color::Aqua;
		button020->Text = "1";
		button020Value = 1;
	}

	if (button_020_Selected == true && clearCell == true)
	{
		button020->BackColor = SystemColors::Control;
		button020->Text = "0";
		button020Value = 0;
	}
}

private: System::Void button021_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_021_Selected == true && wall == true)
	{
		button021->BackColor = Color::Red;
		button021->Text = "255";
		button021Value = 255;
	}

	if (button_021_Selected == true && destination == true)
	{
		button021->BackColor = Color::Aqua;
		button021->Text = "1";
		button021Value = 1;
	}

	if (button_021_Selected == true && clearCell == true)
	{
		button021->BackColor = SystemColors::Control;
		button021->Text = "0";
		button021Value = 0;
	}
}

private: System::Void button022_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_022_Selected == true && wall == true)
	{
		button022->BackColor = Color::Red;
		button022->Text = "255";
		button022Value = 255;
	}

	if (button_022_Selected == true && destination == true)
	{
		button022->BackColor = Color::Aqua;
		button022->Text = "1";
		button022Value = 1;
	}

	if (button_022_Selected == true && clearCell == true)
	{
		button022->BackColor = SystemColors::Control;
		button022->Text = "0";
		button022Value = 0;
	}
}

private: System::Void button023_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_023_Selected == true && wall == true)
	{
		button023->BackColor = Color::Red;
		button023->Text = "255";
		button023Value = 255;
	}

	if (button_023_Selected == true && destination == true)
	{
		button023->BackColor = Color::Aqua;
		button023->Text = "1";
		button023Value = 1;
	}

	if (button_023_Selected == true && clearCell == true)
	{
		button023->BackColor = SystemColors::Control;
		button023->Text = "0";
		button023Value = 0;
	}
}

private: System::Void button024_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_024_Selected == true && wall == true)
	{
		button024->BackColor = Color::Red;
		button024->Text = "255";
		button024Value = 255;
	}

	if (button_024_Selected == true && destination == true)
	{
		button024->BackColor = Color::Aqua;
		button024->Text = "1";
		button024Value = 1;
	}

	if (button_024_Selected == true && clearCell == true)
	{
		button024->BackColor = SystemColors::Control;
		button024->Text = "0";
		button024Value = 0;
	}
}

private: System::Void button025_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_025_Selected == true && wall == true)
	{
		button025->BackColor = Color::Red;
		button025->Text = "255";
		button025Value = 255;
	}

	if (button_025_Selected == true && destination == true)
	{
		button025->BackColor = Color::Aqua;
		button025->Text = "1";
		button025Value = 1;
	}

	if (button_025_Selected == true && clearCell == true)
	{
		button025->BackColor = SystemColors::Control;
		button025->Text = "0";
		button025Value = 0;
	}
}

private: System::Void button026_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_026_Selected == true && wall == true)
	{
		button026->BackColor = Color::Red;
		button026->Text = "255";
		button026Value = 255;
	}

	if (button_026_Selected == true && destination == true)
	{
		button026->BackColor = Color::Aqua;
		button026->Text = "1";
		button026Value = 1;
	}

	if (button_026_Selected == true && clearCell == true)
	{
		button026->BackColor = SystemColors::Control;
		button026->Text = "0";
		button026Value = 0;
	}
}

private: System::Void button027_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_027_Selected == true && wall == true)
	{
		button027->BackColor = Color::Red;
		button027->Text = "255";
		button027Value = 255;
	}

	if (button_027_Selected == true && destination == true)
	{
		button027->BackColor = Color::Aqua;
		button027->Text = "1";
		button027Value = 1;
	}

	if (button_027_Selected == true && clearCell == true)
	{
		button027->BackColor = SystemColors::Control;
		button027->Text = "0";
		button027Value = 0;
	}
}

private: System::Void button028_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_028_Selected == true && wall == true)
	{
		button028->BackColor = Color::Red;
		button028->Text = "255";
		button028Value = 255;
	}

	if (button_028_Selected == true && destination == true)
	{
		button028->BackColor = Color::Aqua;
		button028->Text = "1";
		button028Value = 1;
	}

	if (button_028_Selected == true && clearCell == true)
	{
		button028->BackColor = SystemColors::Control;
		button028->Text = "0";
		button028Value = 0;
	}
}

private: System::Void button029_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_029_Selected == true && wall == true)
	{
		button029->BackColor = Color::Red;
		button029->Text = "255";
		button029Value = 255;
	}

	if (button_029_Selected == true && destination == true)
	{
		button029->BackColor = Color::Aqua;
		button029->Text = "1";
		button029Value = 1;
	}

	if (button_029_Selected == true && clearCell == true)
	{
		button029->BackColor = SystemColors::Control;
		button029->Text = "0";
		button029Value = 0;
	}
}

private: System::Void button030_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_030_Selected == true && wall == true)
	{
		button030->BackColor = Color::Red;
		button030->Text = "255";
		button030Value = 255;
	}

	if (button_030_Selected == true && destination == true)
	{
		button030->BackColor = Color::Aqua;
		button030->Text = "1";
		button030Value = 1;
	}

	if (button_030_Selected == true && clearCell == true)
	{
		button030->BackColor = SystemColors::Control;
		button030->Text = "0";
		button030Value = 0;
	}
}

private: System::Void button031_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_031_Selected == true && wall == true)
	{
		button031->BackColor = Color::Red;
		button031->Text = "255";
		button031Value = 255;
	}

	if (button_031_Selected == true && destination == true)
	{
		button031->BackColor = Color::Aqua;
		button031->Text = "1";
		button031Value = 1;
	}

	if (button_031_Selected == true && clearCell == true)
	{
		button031->BackColor = SystemColors::Control;
		button031->Text = "0";
		button031Value = 0;
	}

}

private: System::Void button032_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_032_Selected == true && wall == true)
	{
		button032->BackColor = Color::Red;
		button032->Text = "255";
		button032Value = 255;
	}

	if (button_032_Selected == true && destination == true)
	{
		button032->BackColor = Color::Aqua;
		button032->Text = "1";
		button032Value = 1;
	}

	if (button_032_Selected == true && clearCell == true)
	{
		button032->BackColor = SystemColors::Control;
		button032->Text = "0";
		button032Value = 0;
	}
		 }

private: System::Void button033_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_033_Selected == true && wall == true)
	{
		button033->BackColor = Color::Red;
		button033->Text = "255";
		button033Value = 255;
	}

	if (button_033_Selected == true && destination == true)
	{
		button033->BackColor = Color::Aqua;
		button033->Text = "1";
		button033Value = 1;
	}

	if (button_033_Selected == true && clearCell == true)
	{
		button033->BackColor = SystemColors::Control;
		button033->Text = "0";
		button033Value = 0;
	}

}

private: System::Void button034_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_034_Selected == true && wall == true)
	{
		button034->BackColor = Color::Red;
		button034->Text = "255";
		button034Value = 255;
	}

	if (button_034_Selected == true && destination == true)
	{
		button034->BackColor = Color::Aqua;
		button034->Text = "1";
		button034Value = 1;
	}

	if (button_034_Selected == true && clearCell == true)
	{
		button034->BackColor = SystemColors::Control;
		button034->Text = "0";
		button034Value = 0;
	}
}

private: System::Void button035_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_035_Selected == true && wall == true)
	{
		button035->BackColor = Color::Red;
		button035->Text = "255";
		button035Value = 255;
	}

	if (button_035_Selected == true && destination == true)
	{
		button035->BackColor = Color::Aqua;
		button035->Text = "1";
		button035Value = 1;
	}

	if (button_035_Selected == true && clearCell == true)
	{
		button035->BackColor = SystemColors::Control;
		button035->Text = "0";
		button035Value = 0;
	}
}

private: System::Void button036_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_036_Selected == true && wall == true)
	{
		button036->BackColor = Color::Red;
		button036->Text = "255";
		button036Value = 255;
	}

	if (button_036_Selected == true && destination == true)
	{
		button036->BackColor = Color::Aqua;
		button036->Text = "1";
		button036Value = 1;
	}

	if (button_036_Selected == true && clearCell == true)
	{
		button036->BackColor = SystemColors::Control;
		button036->Text = "0";
		button036Value = 0;
	}
}

private: System::Void button037_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_037_Selected == true && wall == true)
	{
		button037->BackColor = Color::Red;
		button037->Text = "255";
		button037Value = 255;
	}

	if (button_037_Selected == true && destination == true)
	{
		button037->BackColor = Color::Aqua;
		button037->Text = "1";
		button037Value = 1;
	}

	if (button_037_Selected == true && clearCell == true)
	{
		button037->BackColor = SystemColors::Control;
		button037->Text = "0";
		button037Value = 0;
	}
}

private: System::Void button038_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_038_Selected == true && wall == true)
	{
		button038->BackColor = Color::Red;
		button038->Text = "255";
		button038Value = 255;
	}

	if (button_038_Selected == true && destination == true)
	{
		button038->BackColor = Color::Aqua;
		button038->Text = "1";
		button038Value = 1;
	}

	if (button_038_Selected == true && clearCell == true)
	{
		button038->BackColor = SystemColors::Control;
		button038->Text = "0";
		button038Value = 0;
	}
}

private: System::Void button039_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_039_Selected == true && wall == true)
	{
		button039->BackColor = Color::Red;
		button039->Text = "255";
		button039Value = 255;
	}

	if (button_039_Selected == true && destination == true)
	{
		button039->BackColor = Color::Aqua;
		button039->Text = "1";
		button039Value = 1;
	}

	if (button_039_Selected == true && clearCell == true)
	{
		button039->BackColor = SystemColors::Control;
		button039->Text = "0";
		button039Value = 0;
	}
}

private: System::Void button040_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_040_Selected == true && wall == true)
	{
		button040->BackColor = Color::Red;
		button040->Text = "255";
		button040Value = 255;
	}

	if (button_040_Selected == true && destination == true)
	{
		button040->BackColor = Color::Aqua;
		button040->Text = "1";
		button040Value = 1;
	}

	if (button_040_Selected == true && clearCell == true)
	{
		button040->BackColor = SystemColors::Control;
		button040->Text = "0";
		button040Value = 0;
	}
}

private: System::Void button041_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_041_Selected == true && wall == true)
	{
		button041->BackColor = Color::Red;
		button041->Text = "255";
		button041Value = 255;
	}

	if (button_041_Selected == true && destination == true)
	{
		button041->BackColor = Color::Aqua;
		button041->Text = "1";
		button041Value = 1;
	}

	if (button_041_Selected == true && clearCell == true)
	{
		button041->BackColor = SystemColors::Control;
		button041->Text = "0";
		button041Value = 0;
	}
}

private: System::Void button042_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_042_Selected == true && wall == true)
	{
		button042->BackColor = Color::Red;
		button042->Text = "255";
		button042Value = 255;
	}

	if (button_042_Selected == true && destination == true)
	{
		button042->BackColor = Color::Aqua;
		button042->Text = "1";
		button042Value = 1;
	}

	if (button_042_Selected == true && clearCell == true)
	{
		button042->BackColor = SystemColors::Control;
		button042->Text = "0";
		button042Value = 0;
	}

}

private: System::Void button043_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_043_Selected == true && wall == true)
	{
		button043->BackColor = Color::Red;
		button043->Text = "255";
		button043Value = 255;
	}

	if (button_043_Selected == true && destination == true)
	{
		button043->BackColor = Color::Aqua;
		button043->Text = "1";
		button043Value = 1;
	}

	if (button_043_Selected == true && clearCell == true)
	{
		button043->BackColor = SystemColors::Control;
		button043->Text = "0";
		button043Value = 0;
	}

}

private: System::Void button044_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_044_Selected == true && wall == true)
	{
		button044->BackColor = Color::Red;
		button044->Text = "255";
		button044Value = 255;
	}

	if (button_044_Selected == true && destination == true)
	{
		button044->BackColor = Color::Aqua;
		button044->Text = "1";
		button044Value = 1;
	}

	if (button_044_Selected == true && clearCell == true)
	{
		button044->BackColor = SystemColors::Control;
		button044->Text = "0";
		button044Value = 0;
	}

}

private: System::Void button045_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_045_Selected == true && wall == true)
	{
		button045->BackColor = Color::Red;
		button045->Text = "255";
		button045Value = 255;
	}

	if (button_045_Selected == true && destination == true)
	{
		button045->BackColor = Color::Aqua;
		button045->Text = "1";
		button045Value = 1;
	}

	if (button_045_Selected == true && clearCell == true)
	{
		button045->BackColor = SystemColors::Control;
		button045->Text = "0";
		button045Value = 0;
	}

}

private: System::Void button046_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_046_Selected == true && wall == true)
	{
		button046->BackColor = Color::Red;
		button046->Text = "255";
		button046Value = 255;
	}

	if (button_046_Selected == true && destination == true)
	{
		button046->BackColor = Color::Aqua;
		button046->Text = "1";
		button046Value = 1;
	}

	if (button_046_Selected == true && clearCell == true)
	{
		button046->BackColor = SystemColors::Control;
		button046->Text = "0";
		button046Value = 0;
	}

}

private: System::Void button047_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_047_Selected == true && wall == true)
	{
		button047->BackColor = Color::Red;
		button047->Text = "255";
		button047Value = 255;
	}

	if (button_047_Selected == true && destination == true)
	{
		button047->BackColor = Color::Aqua;
		button047->Text = "1";
		button047Value = 1;
	}

	if (button_047_Selected == true && clearCell == true)
	{
		button047->BackColor = SystemColors::Control;
		button047->Text = "0";
		button047Value = 0;
	}
}

private: System::Void button048_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_048_Selected == true && wall == true)
	{
		button048->BackColor = Color::Red;
		button048->Text = "255";
		button048Value = 255;
	}

	if (button_048_Selected == true && destination == true)
	{
		button048->BackColor = Color::Aqua;
		button048->Text = "1";
		button048Value = 1;
	}

	if (button_048_Selected == true && clearCell == true)
	{
		button048->BackColor = SystemColors::Control;
		button048->Text = "0";
		button048Value = 0;
	}
}

private: System::Void button049_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_049_Selected == true && wall == true)
	{
		button049->BackColor = Color::Red;
		button049->Text = "255";
		button049Value = 255;
	}

	if (button_049_Selected == true && destination == true)
	{
		button049->BackColor = Color::Aqua;
		button049->Text = "1";
		button049Value = 1;
	}

	if (button_049_Selected == true && clearCell == true)
	{
		button049->BackColor = SystemColors::Control;
		button049->Text = "0";
		button049Value = 0;
	}
}

private: System::Void button050_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_050_Selected == true && wall == true)
	{
		button050->BackColor = Color::Red;
		button050->Text = "255";
		button050Value = 255;
	}

	if (button_050_Selected == true && destination == true)
	{
		button050->BackColor = Color::Aqua;
		button050->Text = "1";
		button050Value = 1;
	}

	if (button_050_Selected == true && clearCell == true)
	{
		button050->BackColor = SystemColors::Control;
		button050->Text = "0";
		button050Value = 0;
	}
}

private: System::Void button051_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_051_Selected == true && wall == true)
	{
		button051->BackColor = Color::Red;
		button051->Text = "255";
		button051Value = 255;
	}

	if (button_051_Selected == true && destination == true)
	{
		button051->BackColor = Color::Aqua;
		button051->Text = "1";
		button051Value = 1;
	}

	if (button_051_Selected == true && clearCell == true)
	{
		button051->BackColor = SystemColors::Control;
		button051->Text = "0";
		button051Value = 0;
	}

}

private: System::Void button052_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_052_Selected == true && wall == true)
	{
		button052->BackColor = Color::Red;
		button052->Text = "255";
		button052Value = 255;
	}

	if (button_052_Selected == true && destination == true)
	{
		button052->BackColor = Color::Aqua;
		button052->Text = "1";
		button052Value = 1;
	}

	if (button_052_Selected == true && clearCell == true)
	{
		button052->BackColor = SystemColors::Control;
		button052->Text = "0";
		button052Value = 0;
	}

}

private: System::Void button053_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_053_Selected == true && wall == true)
	{
		button053->BackColor = Color::Red;
		button053->Text = "255";
		button053Value = 255;
	}

	if (button_053_Selected == true && destination == true)
	{
		button053->BackColor = Color::Aqua;
		button053->Text = "1";
		button053Value = 1;
	}

	if (button_053_Selected == true && clearCell == true)
	{
		button053->BackColor = SystemColors::Control;
		button053->Text = "0";
		button053Value = 0;
	}
		 }

private: System::Void button054_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_054_Selected == true && wall == true)
	{
		button054->BackColor = Color::Red;
		button054->Text = "255";
		button054Value = 255;
	}

	if (button_054_Selected == true && destination == true)
	{
		button054->BackColor = Color::Aqua;
		button054->Text = "1";
		button054Value = 1;
	}

	if (button_054_Selected == true && clearCell == true)
	{
		button054->BackColor = SystemColors::Control;
		button054->Text = "0";
		button054Value = 0;
	}

}

private: System::Void button055_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_055_Selected == true && wall == true)
	{
		button055->BackColor = Color::Red;
		button055->Text = "255";
		button055Value = 255;
	}

	if (button_055_Selected == true && destination == true)
	{
		button055->BackColor = Color::Aqua;
		button055->Text = "1";
		button055Value = 1;
	}

	if (button_055_Selected == true && clearCell == true)
	{
		button055->BackColor = SystemColors::Control;
		button055->Text = "0";
		button055Value = 0;
	}

}

private: System::Void button056_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_056_Selected == true && wall == true)
	{
		button056->BackColor = Color::Red;
		button056->Text = "255";
		button056Value = 255;
	}

	if (button_056_Selected == true && destination == true)
	{
		button056->BackColor = Color::Aqua;
		button056->Text = "1";
		button056Value = 1;
	}

	if (button_056_Selected == true && clearCell == true)
	{
		button056->BackColor = SystemColors::Control;
		button056->Text = "0";
		button056Value = 0;
	}

}

private: System::Void button057_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_057_Selected == true && wall == true)
	{
		button057->BackColor = Color::Red;
		button057->Text = "255";
		button057Value = 255;
	}

	if (button_057_Selected == true && destination == true)
	{
		button057->BackColor = Color::Aqua;
		button057->Text = "1";
		button057Value = 1;
	}

	if (button_057_Selected == true && clearCell == true)
	{
		button057->BackColor = SystemColors::Control;
		button057->Text = "0";
		button057Value = 0;
	}

}

private: System::Void button058_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_058_Selected == true && wall == true)
	{
		button058->BackColor = Color::Red;
		button058->Text = "255";
		button058Value = 255;
	}

	if (button_058_Selected == true && destination == true)
	{
		button058->BackColor = Color::Aqua;
		button058->Text = "1";
		button058Value = 1;
	}

	if (button_058_Selected == true && clearCell == true)
	{
		button058->BackColor = SystemColors::Control;
		button058->Text = "0";
		button058Value = 0;
	}

}

private: System::Void button059_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_059_Selected == true && wall == true)
	{
		button059->BackColor = Color::Red;
		button059->Text = "255";
		button059Value = 255;
	}

	if (button_059_Selected == true && destination == true)
	{
		button059->BackColor = Color::Aqua;
		button059->Text = "1";
		button059Value = 1;
	}

	if (button_059_Selected == true && clearCell == true)
	{
		button059->BackColor = SystemColors::Control;
		button059->Text = "0";
		button059Value = 0;
	}

}

private: System::Void button060_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_060_Selected == true && wall == true)
	{
		button060->BackColor = Color::Red;
		button060->Text = "255";
		button060Value = 255;
	}

	if (button_060_Selected == true && destination == true)
	{
		button060->BackColor = Color::Aqua;
		button060->Text = "1";
		button060Value = 1;
	}

	if (button_060_Selected == true && clearCell == true)
	{
		button060->BackColor = SystemColors::Control;
		button060->Text = "0";
		button060Value = 0;
	}

}

private: System::Void button061_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_061_Selected == true && wall == true)
	{
		button061->BackColor = Color::Red;
		button061->Text = "255";
		button061Value = 255;
	}

	if (button_061_Selected == true && destination == true)
	{
		button061->BackColor = Color::Aqua;
		button061->Text = "1";
		button061Value = 1;
	}

	if (button_061_Selected == true && clearCell == true)
	{
		button061->BackColor = SystemColors::Control;
		button061->Text = "0";
		button061Value = 0;
	}

}

private: System::Void button062_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_062_Selected == true && wall == true)
	{
		button062->BackColor = Color::Red;
		button062->Text = "255";
		button062Value = 255;
	}

	if (button_062_Selected == true && destination == true)
	{
		button062->BackColor = Color::Aqua;
		button062->Text = "1";
		button062Value = 1;
	}

	if (button_062_Selected == true && clearCell == true)
	{
		button062->BackColor = SystemColors::Control;
		button062->Text = "0";
		button062Value = 0;
	}

}

private: System::Void button063_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_063_Selected == true && wall == true)
	{
		button063->BackColor = Color::Red;
		button063->Text = "255";
		button063Value = 255;
	}

	if (button_063_Selected == true && destination == true)
	{
		button063->BackColor = Color::Aqua;
		button063->Text = "1";
		button063Value = 1;
	}

	if (button_063_Selected == true && clearCell == true)
	{
		button063->BackColor = SystemColors::Control;
		button063->Text = "0";
		button063Value = 0;
	}

}

private: System::Void button064_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_064_Selected == true && wall == true)
	{
		button064->BackColor = Color::Red;
		button064->Text = "255";
		button064Value = 255;
	}

	if (button_064_Selected == true && destination == true)
	{
		button064->BackColor = Color::Aqua;
		button064->Text = "1";
		button064Value = 1;
	}

	if (button_064_Selected == true && clearCell == true)
	{
		button064->BackColor = SystemColors::Control;
		button064->Text = "0";
		button064Value = 0;
	}

}

private: System::Void button065_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_065_Selected == true && wall == true)
	{
		button065->BackColor = Color::Red;
		button065->Text = "255";
		button065Value = 255;
	}

	if (button_065_Selected == true && destination == true)
	{
		button065->BackColor = Color::Aqua;
		button065->Text = "1";
		button065Value = 1;
	}

	if (button_065_Selected == true && clearCell == true)
	{
		button065->BackColor = SystemColors::Control;
		button065->Text = "0";
		button065Value = 0;
	}

}

private: System::Void button066_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_066_Selected == true && wall == true)
	{
		button066->BackColor = Color::Red;
		button066->Text = "255";
		button066Value = 255;
	}

	if (button_066_Selected == true && destination == true)
	{
		button066->BackColor = Color::Aqua;
		button066->Text = "1";
		button066Value = 1;
	}

	if (button_066_Selected == true && clearCell == true)
	{
		button066->BackColor = SystemColors::Control;
		button066->Text = "0";
		button066Value = 0;
	}

}

private: System::Void button067_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_067_Selected == true && wall == true)
	{
		button067->BackColor = Color::Red;
		button067->Text = "255";
		button067Value = 255;
	}

	if (button_067_Selected == true && destination == true)
	{
		button067->BackColor = Color::Aqua;
		button067->Text = "1";
		button067Value = 1;
	}

	if (button_067_Selected == true && clearCell == true)
	{
		button067->BackColor = SystemColors::Control;
		button067->Text = "0";
		button067Value = 0;
	}
	
}

private: System::Void button068_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_068_Selected == true && wall == true)
	{
		button068->BackColor = Color::Red;
		button068->Text = "255";
		button068Value = 255;
	}

	if (button_068_Selected == true && destination == true)
	{
		button068->BackColor = Color::Aqua;
		button068->Text = "1";
		button068Value = 1;
	}

	if (button_068_Selected == true && clearCell == true)
	{
		button068->BackColor = SystemColors::Control;
		button068->Text = "0";
		button068Value = 0;
	}

}

private: System::Void button069_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_069_Selected == true && wall == true)
	{
		button069->BackColor = Color::Red;
		button069->Text = "255";
		button069Value = 255;
	}

	if (button_069_Selected == true && destination == true)
	{
		button069->BackColor = Color::Aqua;
		button069->Text = "1";
		button069Value = 1;
	}

	if (button_069_Selected == true && clearCell == true)
	{
		button069->BackColor = SystemColors::Control;
		button069->Text = "0";
		button069Value = 0;
	}

}

private: System::Void button070_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_070_Selected == true && wall == true)
	{
		button070->BackColor = Color::Red;
		button070->Text = "255";
		button070Value = 255;
	}

	if (button_070_Selected == true && destination == true)
	{
		button070->BackColor = Color::Aqua;
		button070->Text = "1";
		button070Value = 1;
	}

	if (button_070_Selected == true && clearCell == true)
	{
		button070->BackColor = SystemColors::Control;
		button070->Text = "0";
		button070Value = 0;
	}

}

private: System::Void button071_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_071_Selected == true && wall == true)
	{
		button071->BackColor = Color::Red;
		button071->Text = "255";
		button071Value = 255;
	}

	if (button_071_Selected == true && destination == true)
	{
		button071->BackColor = Color::Aqua;
		button071->Text = "1";
		button071Value = 1;
	}

	if (button_071_Selected == true && clearCell == true)
	{
		button071->BackColor = SystemColors::Control;
		button071->Text = "0";
		button071Value = 0;
	}

}

private: System::Void button072_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_072_Selected == true && wall == true)
	{
		button072->BackColor = Color::Red;
		button072->Text = "255";
		button072Value = 255;
	}

	if (button_072_Selected == true && destination == true)
	{
		button072->BackColor = Color::Aqua;
		button072->Text = "1";
		button072Value = 1;
	}

	if (button_072_Selected == true && clearCell == true)
	{
		button072->BackColor = SystemColors::Control;
		button072->Text = "0";
		button072Value = 0;
	}

}

private: System::Void button073_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_073_Selected == true && wall == true)
	{
		button073->BackColor = Color::Red;
		button073->Text = "255";
		button073Value = 255;
	}

	if (button_073_Selected == true && destination == true)
	{
		button073->BackColor = Color::Aqua;
		button073->Text = "1";
		button073Value = 1;
	}

	if (button_073_Selected == true && clearCell == true)
	{
		button073->BackColor = SystemColors::Control;
		button073->Text = "0";
		button073Value = 0;
	}

}

private: System::Void button074_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_074_Selected == true && wall == true)
	{
		button074->BackColor = Color::Red;
		button074->Text = "255";
		button074Value = 255;
	}

	if (button_074_Selected == true && destination == true)
	{
		button074->BackColor = Color::Aqua;
		button074->Text = "1";
		button074Value = 1;
	}

	if (button_074_Selected == true && clearCell == true)
	{
		button074->BackColor = SystemColors::Control;
		button074->Text = "0";
		button074Value = 0;
	}

}

private: System::Void button075_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_075_Selected == true && wall == true)
	{
		button075->BackColor = Color::Red;
		button075->Text = "255";
		button075Value = 255;
	}

	if (button_075_Selected == true && destination == true)
	{
		button075->BackColor = Color::Aqua;
		button075->Text = "1";
		button075Value = 1;
	}

	if (button_075_Selected == true && clearCell == true)
	{
		button075->BackColor = SystemColors::Control;
		button075->Text = "0";
		button075Value = 0;
	}

}

private: System::Void button076_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_076_Selected == true && wall == true)
	{
		button076->BackColor = Color::Red;
		button076->Text = "255";
		button076Value = 255;
	}

	if (button_076_Selected == true && destination == true)
	{
		button076->BackColor = Color::Aqua;
		button076->Text = "1";
		button076Value = 1;
	}

	if (button_076_Selected == true && clearCell == true)
	{
		button076->BackColor = SystemColors::Control;
		button076->Text = "0";
		button076Value = 0;
	}

}

private: System::Void button077_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_077_Selected == true && wall == true)
	{
		button077->BackColor = Color::Red;
		button077->Text = "255";
		button077Value = 255;
	}

	if (button_077_Selected == true && destination == true)
	{
		button077->BackColor = Color::Aqua;
		button077->Text = "1";
		button077Value = 1;
	}

	if (button_077_Selected == true && clearCell == true)
	{
		button077->BackColor = SystemColors::Control;
		button077->Text = "0";
		button077Value = 0;
	}

}

private: System::Void button078_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_078_Selected == true && wall == true)
	{
		button078->BackColor = Color::Red;
		button078->Text = "255";
		button078Value = 255;
	}

	if (button_078_Selected == true && destination == true)
	{
		button078->BackColor = Color::Aqua;
		button078->Text = "1";
		button078Value = 1;
	}

	if (button_078_Selected == true && clearCell == true)
	{
		button078->BackColor = SystemColors::Control;
		button078->Text = "0";
		button078Value = 0;
	}

}

private: System::Void button079_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_079_Selected == true && wall == true)
	{
		button079->BackColor = Color::Red;
		button079->Text = "255";
		button079Value = 255;
	}

	if (button_079_Selected == true && destination == true)
	{
		button079->BackColor = Color::Aqua;
		button079->Text = "1";
		button079Value = 1;
	}

	if (button_079_Selected == true && clearCell == true)
	{
		button079->BackColor = SystemColors::Control;
		button079->Text = "0";
		button079Value = 0;
	}

}

private: System::Void button080_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_080_Selected == true && clearCell == true)
	{
		button080->BackColor = SystemColors::Control;
		button080->Text = "0";
		button080Value = 0;
	}

	if (button_080_Selected == true && wall == true)
	{
		button080->BackColor = Color::Red;
		button080->Text = "255";
		button080Value = 255;
	}

	if (button_080_Selected == true && destination == true)
	{
		button080->BackColor = Color::Aqua;
		button080->Text = "1";
		button080Value = 1;
	}

}

private: System::Void button081_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_081_Selected == true && wall == true)
	{
		button081->BackColor = Color::Red;
		button081->Text = "255";
		button081Value = 255;
	}

	if (button_081_Selected == true && destination == true)
	{
		button081->BackColor = Color::Aqua;
		button081->Text = "1";
		button081Value = 1;
	}

	if (button_081_Selected == true && clearCell == true)
	{
		button081->BackColor = SystemColors::Control;
		button081->Text = "0";
		button081Value = 0;
	}

}

private: System::Void button082_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_082_Selected == true && wall == true)
	{
		button082->BackColor = Color::Red;
		button082->Text = "255";
		button082Value = 255;
	}

	if (button_082_Selected == true && destination == true)
	{
		button082->BackColor = Color::Aqua;
		button082->Text = "1";
		button082Value = 1;
	}

	if (button_082_Selected == true && clearCell == true)
	{
		button082->BackColor = SystemColors::Control;
		button082->Text = "0";
		button082Value = 0;
	}

}

private: System::Void button083_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_083_Selected == true && wall == true)
	{
		button083->BackColor = Color::Red;
		button083->Text = "255";
		button083Value = 255;
	}

	if (button_083_Selected == true && destination == true)
	{
		button083->BackColor = Color::Aqua;
		button083->Text = "1";
		button083Value = 1;
	}

	if (button_083_Selected == true && clearCell == true)
	{
		button083->BackColor = SystemColors::Control;
		button083->Text = "0";
		button083Value = 0;
	}

}

private: System::Void button084_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_084_Selected == true && wall == true)
	{
		button084->BackColor = Color::Red;
		button084->Text = "255";
		button084Value = 255;
	}

	if (button_084_Selected == true && destination == true)
	{
		button084->BackColor = Color::Aqua;
		button084->Text = "1";
		button084Value = 1;
	}

	if (button_084_Selected == true && clearCell == true)
	{
		button084->BackColor = SystemColors::Control;
		button084->Text = "0";
		button084Value = 0;
	}

}

private: System::Void button085_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_085_Selected == true && wall == true)
	{
		button085->BackColor = Color::Red;
		button085->Text = "255";
		button085Value = 255;
	}

	if (button_085_Selected == true && destination == true)
	{
		button085->BackColor = Color::Aqua;
		button085->Text = "1";
		button085Value = 1;
	}

	if (button_085_Selected == true && clearCell == true)
	{
		button085->BackColor = SystemColors::Control;
		button085->Text = "0";
		button085Value = 0;
	}

}

private: System::Void button086_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_086_Selected == true && wall == true)
	{
		button086->BackColor = Color::Red;
		button086->Text = "255";
		button086Value = 255;
	}

	if (button_086_Selected == true && destination == true)
	{
		button086->BackColor = Color::Aqua;
		button086->Text = "1";
		button086Value = 1;
	}

	if (button_086_Selected == true && clearCell == true)
	{
		button086->BackColor = SystemColors::Control;
		button086->Text = "0";
		button086Value = 0;
	}

}

private: System::Void button087_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_087_Selected == true && wall == true)
	{
		button087->BackColor = Color::Red;
		button087->Text = "255";
		button087Value = 255;
	}

	if (button_087_Selected == true && destination == true)
	{
		button087->BackColor = Color::Aqua;
		button087->Text = "1";
		button087Value = 1;
	}

	if (button_087_Selected == true && clearCell == true)
	{
		button087->BackColor = SystemColors::Control;
		button087->Text = "0";
		button087Value = 0;
	}

}

private: System::Void button088_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_088_Selected == true && wall == true)
	{
		button088->BackColor = Color::Red;
		button088->Text = "255";
		button088Value = 255;
	}

	if (button_088_Selected == true && destination == true)
	{
		button088->BackColor = Color::Aqua;
		button088->Text = "1";
		button088Value = 1;
	}

	if (button_088_Selected == true && clearCell == true)
	{
		button088->BackColor = SystemColors::Control;
		button088->Text = "0";
		button088Value = 0;
	}

}

private: System::Void button089_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_089_Selected == true && wall == true)
	{
		button089->BackColor = Color::Red;
		button089->Text = "255";
		button089Value = 255;
	}

	if (button_089_Selected == true && destination == true)
	{
		button089->BackColor = Color::Aqua;
		button089->Text = "1";
		button089Value = 1;
	}

	if (button_089_Selected == true && clearCell == true)
	{
		button089->BackColor = SystemColors::Control;
		button089->Text = "0";
		button089Value = 0;
	}

}

private: System::Void button090_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_090_Selected == true && wall == true)
	{
		button090->BackColor = Color::Red;
		button090->Text = "255";
		button090Value = 255;
	}

	if (button_090_Selected == true && destination == true)
	{
		button090->BackColor = Color::Aqua;
		button090->Text = "1";
		button090Value = 1;
	}

	if (button_090_Selected == true && clearCell == true)
	{
		button090->BackColor = SystemColors::Control;
		button090->Text = "0";
		button090Value = 0;
	}

}

private: System::Void button091_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_091_Selected == true && wall == true)
	{
		button091->BackColor = Color::Red;
		button091->Text = "255";
		button091Value = 255;
	}

	if (button_091_Selected == true && destination == true)
	{
		button091->BackColor = Color::Aqua;
		button091->Text = "1";
		button091Value = 1;
	}

	if (button_091_Selected == true && clearCell == true)
	{
		button091->BackColor = SystemColors::Control;
		button091->Text = "0";
		button091Value = 0;
	}

}

private: System::Void button092_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_092_Selected == true && wall == true)
	{
		button092->BackColor = Color::Red;
		button092->Text = "255";
		button092Value = 255;
	}

	if (button_092_Selected == true && destination == true)
	{
		button092->BackColor = Color::Aqua;
		button092->Text = "1";
		button092Value = 1;
	}

	if (button_092_Selected == true && clearCell == true)
	{
		button092->BackColor = SystemColors::Control;
		button092->Text = "0";
		button092Value = 0;
	}

}

private: System::Void button093_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_093_Selected == true && wall == true)
	{
		button093->BackColor = Color::Red;
		button093->Text = "255";
		button093Value = 255;
	}

	if (button_093_Selected == true && destination == true)
	{
		button093->BackColor = Color::Aqua;
		button093->Text = "1";
		button093Value = 1;
	}

	if (button_093_Selected == true && clearCell == true)
	{
		button093->BackColor = SystemColors::Control;
		button093->Text = "0";
		button093Value = 0;
	}

}

private: System::Void button094_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_094_Selected == true && wall == true)
	{
		button094->BackColor = Color::Red;
		button094->Text = "255";
		button094Value = 255;
	}

	if (button_094_Selected == true && destination == true)
	{
		button094->BackColor = Color::Aqua;
		button094->Text = "1";
		button094Value = 1;
	}

	if (button_094_Selected == true && clearCell == true)
	{
		button094->BackColor = SystemColors::Control;
		button094->Text = "0";
		button094Value = 0;
	}

}

private: System::Void button095_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_095_Selected == true && wall == true)
	{
		button095->BackColor = Color::Red;
		button095->Text = "255";
		button095Value = 255;
	}

	if (button_095_Selected == true && destination == true)
	{
		button095->BackColor = Color::Aqua;
		button095->Text = "1";
		button095Value = 1;
	}

	if (button_095_Selected == true && clearCell == true)
	{
		button095->BackColor = SystemColors::Control;
		button095->Text = "0";
		button095Value = 0;
	}

}

private: System::Void button096_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_096_Selected == true && wall == true)
	{
		button096->BackColor = Color::Red;
		button096->Text = "255";
		button096Value = 255;
	}

	if (button_096_Selected == true && destination == true)
	{
		button096->BackColor = Color::Aqua;
		button096->Text = "1";
		button096Value = 1;
	}

	if (button_096_Selected == true && clearCell == true)
	{
		button096->BackColor = SystemColors::Control;
		button096->Text = "0";
		button096Value = 0;
	}

}

private: System::Void button097_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_097_Selected == true && wall == true)
	{
		button097->BackColor = Color::Red;
		button097->Text = "255";
		button097Value = 255;
	}

	if (button_097_Selected == true && destination == true)
	{
		button097->BackColor = Color::Aqua;
		button097->Text = "1";
		button097Value = 1;
	}

	if (button_097_Selected == true && clearCell == true)
	{
		button097->BackColor = SystemColors::Control;
		button097->Text = "0";
		button097Value = 0;
	}

}

private: System::Void button098_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_098_Selected == true && wall == true)
	{
		button098->BackColor = Color::Red;
		button098->Text = "255";
		button098Value = 255;
	}

	if (button_098_Selected == true && destination == true)
	{
		button098->BackColor = Color::Aqua;
		button098->Text = "1";
		button098Value = 1;
	}

	if (button_098_Selected == true && clearCell == true)
	{
		button098->BackColor = SystemColors::Control;
		button098->Text = "0";
		button098Value = 0;
	}

}

private: System::Void button099_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_099_Selected == true && wall == true)
	{
		button099->BackColor = Color::Red;
		button099->Text = "255";
		button099Value = 255;
	}

	if (button_099_Selected == true && destination == true)
	{
		button099->BackColor = Color::Aqua;
		button099->Text = "1";
		button099Value = 1;
	}

	if (button_099_Selected == true && clearCell == true)
	{
		button099->BackColor = SystemColors::Control;
		button099->Text = "0";
		button099Value = 0;
	}

}

private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_100_Selected == true && wall == true)
	{
		button100->BackColor = Color::Red;
		button100->Text = "255";
		button100Value = 255;
	}

	if (button_100_Selected == true && destination == true)
	{
		button100->BackColor = Color::Aqua;
		button100->Text = "1";
		button100Value = 1;
	}

	if (button_100_Selected == true && clearCell == true)
	{
		button100->BackColor = SystemColors::Control;
		button100->Text = "0";
		button100Value = 0;
	}

}

private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_101_Selected == true && wall == true)
	{
		button101->BackColor = Color::Red;
		button101->Text = "255";
		button101Value = 255;
	}

	if (button_101_Selected == true && destination == true)
	{
		button101->BackColor = Color::Aqua;
		button101->Text = "1";
		button101Value = 1;
	}

	if (button_101_Selected == true && clearCell == true)
	{
		button101->BackColor = SystemColors::Control;
		button101->Text = "0";
		button101Value = 0;
	}

}

private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_102_Selected == true && wall == true)
	{
		button102->BackColor = Color::Red;
		button102->Text = "255";
		button102Value = 255;
	}

	if (button_102_Selected == true && destination == true)
	{
		button102->BackColor = Color::Aqua;
		button102->Text = "1";
		button102Value = 1;
	}

	if (button_102_Selected == true && clearCell == true)
	{
		button102->BackColor = SystemColors::Control;
		button102->Text = "0";
		button102Value = 0;
	}

}

private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_103_Selected == true && wall == true)
	{
		button103->BackColor = Color::Red;
		button103->Text = "255";
		button103Value = 255;
	}

	if (button_103_Selected == true && destination == true)
	{
		button103->BackColor = Color::Aqua;
		button103->Text = "1";
		button103Value = 1;
	}

	if (button_103_Selected == true && clearCell == true)
	{
		button103->BackColor = SystemColors::Control;
		button103->Text = "0";
		button103Value = 0;
	}

}

private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_104_Selected == true && wall == true)
	{
		button104->BackColor = Color::Red;
		button104->Text = "255";
		button104Value = 255;
	}

	if (button_104_Selected == true && destination == true)
	{
		button104->BackColor = Color::Aqua;
		button104->Text = "1";
		button104Value = 1;
	}

	if (button_104_Selected == true && clearCell == true)
	{
		button104->BackColor = SystemColors::Control;
		button104->Text = "0";
		button104Value = 0;
	}

}

private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_105_Selected == true && wall == true)
	{
		button105->BackColor = Color::Red;
		button105->Text = "255";
		button105Value = 255;
	}

	if (button_105_Selected == true && destination == true)
	{
		button105->BackColor = Color::Aqua;
		button105->Text = "1";
		button105Value = 1;
	}

	if (button_105_Selected == true && clearCell == true)
	{
		button105->BackColor = SystemColors::Control;
		button105->Text = "0";
		button105Value = 0;
	}

}

private: System::Void button106_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_106_Selected == true && wall == true)
	{
		button106->BackColor = Color::Red;
		button106->Text = "255";
		button106Value = 255;
	}

	if (button_106_Selected == true && destination == true)
	{
		button106->BackColor = Color::Aqua;
		button106->Text = "1";
		button106Value = 1;
	}

	if (button_106_Selected == true && clearCell == true)
	{
		button106->BackColor = SystemColors::Control;
		button106->Text = "0";
		button106Value = 0;
	}

}

private: System::Void button107_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_107_Selected == true && wall == true)
	{
		button107->BackColor = Color::Red;
		button107->Text = "255";
		button107Value = 255;
	}

	if (button_107_Selected == true && destination == true)
	{
		button107->BackColor = Color::Aqua;
		button107->Text = "1";
		button107Value = 1;
	}

	if (button_107_Selected == true && clearCell == true)
	{
		button107->BackColor = SystemColors::Control;
		button107->Text = "0";
		button107Value = 0;
	}

}

private: System::Void button108_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_108_Selected == true && wall == true)
	{
		button108->BackColor = Color::Red;
		button108->Text = "255";
		button108Value = 255;
	}

	if (button_108_Selected == true && destination == true)
	{
		button108->BackColor = Color::Aqua;
		button108->Text = "1";
		button108Value = 1;
	}

	if (button_108_Selected == true && clearCell == true)
	{
		button108->BackColor = SystemColors::Control;
		button108->Text = "0";
		button108Value = 0;
	}

}

private: System::Void button109_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_109_Selected == true && wall == true)
	{
		button109->BackColor = Color::Red;
		button109->Text = "255";
		button109Value = 255;
	}

	if (button_109_Selected == true && destination == true)
	{
		button109->BackColor = Color::Aqua;
		button109->Text = "1";
		button109Value = 1;
	}

	if (button_109_Selected == true && clearCell == true)
	{
		button109->BackColor = SystemColors::Control;
		button109->Text = "0";
		button109Value = 0;
	}

}

private: System::Void button110_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_110_Selected == true && wall == true)
	{
		button110->BackColor = Color::Red;
		button110->Text = "255";
		button110Value = 255;
	}

	if (button_110_Selected == true && destination == true)
	{
		button110->BackColor = Color::Aqua;
		button110->Text = "1";
		button110Value = 1;
	}

	if (button_110_Selected == true && clearCell == true)
	{
		button110->BackColor = SystemColors::Control;
		button110->Text = "0";
		button110Value = 0;
	}

}

private: System::Void button111_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_111_Selected == true && wall == true)
	{
		button111->BackColor = Color::Red;
		button111->Text = "255";
		button111Value = 255;
	}

	if (button_111_Selected == true && destination == true)
	{
		button111->BackColor = Color::Aqua;
		button111->Text = "1";
		button111Value = 1;
	}

	if (button_111_Selected == true && clearCell == true)
	{
		button111->BackColor = SystemColors::Control;
		button111->Text = "0";
		button111Value = 0;
	}

}

private: System::Void button112_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_112_Selected == true && wall == true)
	{
		button112->BackColor = Color::Red;
		button112->Text = "255";
		button112Value = 255;
	}

	if (button_112_Selected == true && destination == true)
	{
		button112->BackColor = Color::Aqua;
		button112->Text = "1";
		button112Value = 1;
	}

	if (button_112_Selected == true && clearCell == true)
	{
		button112->BackColor = SystemColors::Control;
		button112->Text = "0";
		button112Value = 0;
	}

}

private: System::Void button113_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_113_Selected == true && wall == true)
	{
		button113->BackColor = Color::Red;
		button113->Text = "255";
		button113Value = 255;
	}

	if (button_113_Selected == true && destination == true)
	{
		button113->BackColor = Color::Aqua;
		button113->Text = "1";
		button113Value = 1;
	}

	if (button_113_Selected == true && clearCell == true)
	{
		button113->BackColor = SystemColors::Control;
		button113->Text = "0";
		button113Value = 0;
	}

}

private: System::Void button114_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_114_Selected == true && wall == true)
	{
		button114->BackColor = Color::Red;
		button114->Text = "255";
		button114Value = 255;
	}

	if (button_114_Selected == true && destination == true)
	{
		button114->BackColor = Color::Aqua;
		button114->Text = "1";
		button114Value = 1;
	}

	if (button_114_Selected == true && clearCell == true)
	{
		button114->BackColor = SystemColors::Control;
		button114->Text = "0";
		button114Value = 0;
	}

}

private: System::Void button115_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_115_Selected == true && wall == true)
	{
		button115->BackColor = Color::Red;
		button115->Text = "255";
		button115Value = 255;
	}

	if (button_115_Selected == true && destination == true)
	{
		button115->BackColor = Color::Aqua;
		button115->Text = "1";
		button115Value = 1;
	}

	if (button_115_Selected == true && clearCell == true)
	{
		button115->BackColor = SystemColors::Control;
		button115->Text = "0";
		button115Value = 0;
	}

}

private: System::Void button116_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_116_Selected == true && wall == true)
	{
		button116->BackColor = Color::Red;
		button116->Text = "255";
		button116Value = 255;
	}

	if (button_116_Selected == true && destination == true)
	{
		button116->BackColor = Color::Aqua;
		button116->Text = "1";
		button116Value = 1;
	}

	if (button_116_Selected == true && clearCell == true)
	{
		button116->BackColor = SystemColors::Control;
		button116->Text = "0";
		button116Value = 0;
	}

}

private: System::Void button117_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_117_Selected == true && wall == true)
	{
		button117->BackColor = Color::Red;
		button117->Text = "255";
		button117Value = 255;
	}

	if (button_117_Selected == true && destination == true)
	{
		button117->BackColor = Color::Aqua;
		button117->Text = "1";
		button117Value = 1;
	}

	if (button_117_Selected == true && clearCell == true)
	{
		button117->BackColor = SystemColors::Control;
		button117->Text = "0";
		button117Value = 0;
	}

}

private: System::Void button118_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_118_Selected == true && wall == true)
	{
		button118->BackColor = Color::Red;
		button118->Text = "255";
		button118Value = 255;
	}

	if (button_118_Selected == true && destination == true)
	{
		button118->BackColor = Color::Aqua;
		button118->Text = "1";
		button118Value = 1;
	}

	if (button_118_Selected == true && clearCell == true)
	{
		button118->BackColor = SystemColors::Control;
		button118->Text = "0";
		button118Value = 0;
	}

}

private: System::Void button119_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_119_Selected == true && wall == true)
	{
		button119->BackColor = Color::Red;
		button119->Text = "255";
		button119Value = 255;
	}

	if (button_119_Selected == true && destination == true)
	{
		button119->BackColor = Color::Aqua;
		button119->Text = "1";
		button119Value = 1;
	}

	if (button_119_Selected == true && clearCell == true)
	{
		button119->BackColor = SystemColors::Control;
		button119->Text = "0";
		button119Value = 0;
	}

}

private: System::Void button120_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_120_Selected == true && wall == true)
	{
		button120->BackColor = Color::Red;
		button120->Text = "255";
		button120Value = 255;
	}

	if (button_120_Selected == true && destination == true)
	{
		button120->BackColor = Color::Aqua;
		button120->Text = "1";
		button120Value = 1;
	}

	if (button_120_Selected == true && clearCell == true)
	{
		button120->BackColor = SystemColors::Control;
		button120->Text = "0";
		button120Value = 0;
	}

}

private: System::Void button121_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_121_Selected == true && wall == true)
	{
		button121->BackColor = Color::Red;
		button121->Text = "255";
		button121Value = 255;
	}

	if (button_121_Selected == true && destination == true)
	{
		button121->BackColor = Color::Aqua;
		button121->Text = "1";
		button121Value = 1;
	}

	if (button_121_Selected == true && clearCell == true)
	{
		button121->BackColor = SystemColors::Control;
		button121->Text = "0";
		button121Value = 0;
	}

}

private: System::Void button122_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_122_Selected == true && wall == true)
	{
		button122->BackColor = Color::Red;
		button122->Text = "255";
		button122Value = 255;
	}

	if (button_122_Selected == true && destination == true)
	{
		button122->BackColor = Color::Aqua;
		button122->Text = "1";
		button122Value = 1;
	}

	if (button_122_Selected == true && clearCell == true)
	{
		button122->BackColor = SystemColors::Control;
		button122->Text = "0";
		button122Value = 0;
	}

}

private: System::Void button123_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_123_Selected == true && wall == true)
	{
		button123->BackColor = Color::Red;
		button123->Text = "255";
		button123Value = 255;
	}

	if (button_123_Selected == true && destination == true)
	{
		button123->BackColor = Color::Aqua;
		button123->Text = "1";
		button123Value = 1;
	}

	if (button_123_Selected == true && clearCell == true)
	{
		button123->BackColor = SystemColors::Control;
		button123->Text = "0";
		button123Value = 0;
	}

}

private: System::Void button124_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_124_Selected == true && wall == true)
	{
		button124->BackColor = Color::Red;
		button124->Text = "255";
		button124Value = 255;
	}

	if (button_124_Selected == true && destination == true)
	{
		button124->BackColor = Color::Aqua;
		button124->Text = "1";
		button124Value = 1;
	}

	if (button_124_Selected == true && clearCell == true)
	{
		button124->BackColor = SystemColors::Control;
		button124->Text = "0";
		button124Value = 0;
	}

}

private: System::Void button125_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_125_Selected == true && wall == true)
	{
		button125->BackColor = Color::Red;
		button125->Text = "255";
		button125Value = 255;
	}

	if (button_125_Selected == true && destination == true)
	{
		button125->BackColor = Color::Aqua;
		button125->Text = "1";
		button125Value = 1;
	}

	if (button_125_Selected == true && clearCell == true)
	{
		button125->BackColor = SystemColors::Control;
		button125->Text = "0";
		button125Value = 0;
	}

}

private: System::Void button126_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_126_Selected == true && wall == true)
	{
		button126->BackColor = Color::Red;
		button126->Text = "255";
		button126Value = 255;
	}

	if (button_126_Selected == true && destination == true)
	{
		button126->BackColor = Color::Aqua;
		button126->Text = "1";
		button126Value = 1;
	}

	if (button_126_Selected == true && clearCell == true)
	{
		button126->BackColor = SystemColors::Control;
		button126->Text = "0";
		button126Value = 0;
	}

}

private: System::Void button127_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_127_Selected == true && wall == true)
	{
		button127->BackColor = Color::Red;
		button127->Text = "255";
		button127Value = 255;
	}

	if (button_127_Selected == true && destination == true)
	{
		button127->BackColor = Color::Aqua;
		button127->Text = "1";
		button127Value = 1;
	}

	if (button_127_Selected == true && clearCell == true)
	{
		button127->BackColor = SystemColors::Control;
		button127->Text = "0";
		button127Value = 0;
	}

}

private: System::Void button128_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_128_Selected == true && wall == true)
	{
		button128->BackColor = Color::Red;
		button128->Text = "255";
		button128Value = 255;
	}

	if (button_128_Selected == true && destination == true)
	{
		button128->BackColor = Color::Aqua;
		button128->Text = "1";
		button128Value = 1;
	}

	if (button_128_Selected == true && clearCell == true)
	{
		button128->BackColor = SystemColors::Control;
		button128->Text = "0";
		button128Value = 0;
	}

}

private: System::Void button129_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_129_Selected == true && wall == true)
	{
		button129->BackColor = Color::Red;
		button129->Text = "255";
		button129Value = 255;
	}

	if (button_129_Selected == true && destination == true)
	{
		button129->BackColor = Color::Aqua;
		button129->Text = "1";
		button129Value = 1;
	}

	if (button_129_Selected == true && clearCell == true)
	{
		button129->BackColor = SystemColors::Control;
		button129->Text = "0";
		button129Value = 0;
	}

}

private: System::Void button130_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_130_Selected == true && wall == true)
	{
		button130->BackColor = Color::Red;
		button130->Text = "255";
		button130Value = 255;
	}

	if (button_130_Selected == true && destination == true)
	{
		button130->BackColor = Color::Aqua;
		button130->Text = "1";
		button130Value = 1;
	}

	if (button_130_Selected == true && clearCell == true)
	{
		button130->BackColor = SystemColors::Control;
		button130->Text = "0";
		button130Value = 0;
	}

}

private: System::Void button131_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_131_Selected == true && wall == true)
	{
		button131->BackColor = Color::Red;
		button131->Text = "255";
		button131Value = 255;
	}

	if (button_131_Selected == true && destination == true)
	{
		button131->BackColor = Color::Aqua;
		button131->Text = "1";
		button131Value = 1;
	}

	if (button_131_Selected == true && clearCell == true)
	{
		button131->BackColor = SystemColors::Control;
		button131->Text = "0";
		button131Value = 0;
	}

}

private: System::Void button132_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_132_Selected == true && wall == true)
	{
		button132->BackColor = Color::Red;
		button132->Text = "255";
		button132Value = 255;
	}

	if (button_132_Selected == true && destination == true)
	{
		button132->BackColor = Color::Aqua;
		button132->Text = "1";
		button132Value = 1;
	}

	if (button_132_Selected == true && clearCell == true)
	{
		button132->BackColor = SystemColors::Control;
		button132->Text = "0";
		button132Value = 0;
	}

}

private: System::Void button133_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_133_Selected == true && wall == true)
	{
		button133->BackColor = Color::Red;
		button133->Text = "255";
		button133Value = 255;
	}

	if (button_133_Selected == true && destination == true)
	{
		button133->BackColor = Color::Aqua;
		button133->Text = "1";
		button133Value = 1;
	}

	if (button_133_Selected == true && clearCell == true)
	{
		button133->BackColor = SystemColors::Control;
		button133->Text = "0";
		button133Value = 0;
	}

}

private: System::Void button134_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_134_Selected == true && wall == true)
	{
		button134->BackColor = Color::Red;
		button134->Text = "255";
		button134Value = 255;
	}

	if (button_134_Selected == true && destination == true)
	{
		button134->BackColor = Color::Aqua;
		button134->Text = "1";
		button134Value = 1;
	}

	if (button_134_Selected == true && clearCell == true)
	{
		button134->BackColor = SystemColors::Control;
		button134->Text = "0";
		button134Value = 0;
	}

}

private: System::Void button135_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_135_Selected == true && wall == true)
	{
		button135->BackColor = Color::Red;
		button135->Text = "255";
		button135Value = 255;
	}

	if (button_135_Selected == true && destination == true)
	{
		button135->BackColor = Color::Aqua;
		button135->Text = "1";
		button135Value = 1;
	}

	if (button_135_Selected == true && clearCell == true)
	{
		button135->BackColor = SystemColors::Control;
		button135->Text = "0";
		button135Value = 0;
	}

}

private: System::Void button136_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_136_Selected == true && wall == true)
	{
		button136->BackColor = Color::Red;
		button136->Text = "255";
		button136Value = 255;
	}

	if (button_136_Selected == true && destination == true)
	{
		button136->BackColor = Color::Aqua;
		button136->Text = "1";
		button136Value = 1;
	}

	if (button_136_Selected == true && clearCell == true)
	{
		button136->BackColor = SystemColors::Control;
		button136->Text = "0";
		button136Value = 0;
	}

}

private: System::Void button137_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_137_Selected == true && wall == true)
	{
		button137->BackColor = Color::Red;
		button137->Text = "255";
		button137Value = 255;
	}

	if (button_137_Selected == true && destination == true)
	{
		button137->BackColor = Color::Aqua;
		button137->Text = "1";
		button137Value = 1;
	}

	if (button_137_Selected == true && clearCell == true)
	{
		button137->BackColor = SystemColors::Control;
		button137->Text = "0";
		button137Value = 0;
	}

}

private: System::Void button138_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_138_Selected == true && wall == true)
	{
		button138->BackColor = Color::Red;
		button138->Text = "255";
		button138Value = 255;
	}

	if (button_138_Selected == true && destination == true)
	{
		button138->BackColor = Color::Aqua;
		button138->Text = "1";
		button138Value = 1;
	}

	if (button_138_Selected == true && clearCell == true)
	{
		button138->BackColor = SystemColors::Control;
		button138->Text = "0";
		button138Value = 0;
	}

}

private: System::Void button139_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_139_Selected == true && wall == true)
	{
		button139->BackColor = Color::Red;
		button139->Text = "255";
		button139Value = 255;
	}

	if (button_139_Selected == true && destination == true)
	{
		button139->BackColor = Color::Aqua;
		button139->Text = "1";
		button139Value = 1;
	}

	if (button_139_Selected == true && clearCell == true)
	{
		button139->BackColor = SystemColors::Control;
		button139->Text = "0";
		button139Value = 0;
	}

}

private: System::Void button140_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_140_Selected == true && wall == true)
	{
		button140->BackColor = Color::Red;
		button140->Text = "255";
		button140Value = 255;
	}

	if (button_140_Selected == true && destination == true)
	{
		button140->BackColor = Color::Aqua;
		button140->Text = "1";
		button140Value = 1;
	}

	if (button_140_Selected == true && clearCell == true)
	{
		button140->BackColor = SystemColors::Control;
		button140->Text = "0";
		button140Value = 0;
	}

}

private: System::Void button141_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_141_Selected == true && wall == true)
	{
		button141->BackColor = Color::Red;
		button141->Text = "255";
		button141Value = 255;
	}

	if (button_141_Selected == true && destination == true)
	{
		button141->BackColor = Color::Aqua;
		button141->Text = "1";
		button141Value = 1;
	}

	if (button_141_Selected == true && clearCell == true)
	{
		button141->BackColor = SystemColors::Control;
		button141->Text = "0";
		button141Value = 0;
	}

}

private: System::Void button142_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_142_Selected == true && wall == true)
	{
		button142->BackColor = Color::Red;
		button142->Text = "255";
		button142Value = 255;
	}

	if (button_142_Selected == true && destination == true)
	{
		button142->BackColor = Color::Aqua;
		button142->Text = "1";
		button142Value = 1;
	}

	if (button_142_Selected == true && clearCell == true)
	{
		button142->BackColor = SystemColors::Control;
		button142->Text = "0";
		button142Value = 0;
	}

}

private: System::Void button143_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_143_Selected == true && wall == true)
	{
		button143->BackColor = Color::Red;
		button143->Text = "255";
		button143Value = 255;
	}

	if (button_143_Selected == true && destination == true)
	{
		button143->BackColor = Color::Aqua;
		button143->Text = "1";
		button143Value = 1;
	}

	if (button_143_Selected == true && clearCell == true)
	{
		button143->BackColor = SystemColors::Control;
		button143->Text = "0";
		button143Value = 0;
	}
}

private: System::Void button144_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_144_Selected == true && wall == true)
	{
		button144->BackColor = Color::Red;
		button144->Text = "255";
		button144Value = 255;
	}

	if (button_144_Selected == true && destination == true)
	{
		button144->BackColor = Color::Aqua;
		button144->Text = "1";
		button144Value = 1;
	}

	if (button_144_Selected == true && clearCell == true)
	{
		button144->BackColor = SystemColors::Control;
		button144->Text = "0";
		button144Value = 0;
	}

}

private: System::Void button145_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_145_Selected == true && wall == true)
	{
		button145->BackColor = Color::Red;
		button145->Text = "255";
		button145Value = 255;
	}

	if (button_145_Selected == true && destination == true)
	{
		button145->BackColor = Color::Aqua;
		button145->Text = "1";
		button145Value = 1;
	}

	if (button_145_Selected == true && clearCell == true)
	{
		button145->BackColor = SystemColors::Control;
		button145->Text = "0";
		button145Value = 0;
	}

}

private: System::Void button146_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_146_Selected == true && wall == true)
	{
		button146->BackColor = Color::Red;
		button146->Text = "255";
		button146Value = 255;
	}

	if (button_146_Selected == true && destination == true)
	{
		button146->BackColor = Color::Aqua;
		button146->Text = "1";
		button146Value = 1;
	}

	if (button_146_Selected == true && clearCell == true)
	{
		button146->BackColor = SystemColors::Control;
		button146->Text = "0";
		button146Value = 0;
	}

}

private: System::Void button147_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_147_Selected == true && wall == true)
	{
		button147->BackColor = Color::Red;
		button147->Text = "255";
		button147Value = 255;
	}

	if (button_147_Selected == true && destination == true)
	{
		button147->BackColor = Color::Aqua;
		button147->Text = "1";
		button147Value = 1;
	}

	if (button_147_Selected == true && clearCell == true)
	{
		button147->BackColor = SystemColors::Control;
		button147->Text = "0";
		button147Value = 0;
	}
}

private: System::Void button148_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_148_Selected == true && wall == true)
	{
		button148->BackColor = Color::Red;
		button148->Text = "255";
		button148Value = 255;
	}

	if (button_148_Selected == true && destination == true)
	{
		button148->BackColor = Color::Aqua;
		button148->Text = "1";
		button148Value = 1;
	}

	if (button_148_Selected == true && clearCell == true)
	{
		button148->BackColor = SystemColors::Control;
		button148->Text = "0";
		button148Value = 0;
	}

}

private: System::Void button149_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_149_Selected == true && wall == true)
	{
		button149->BackColor = Color::Red;
		button149->Text = "255";
		button149Value = 255;
	}

	if (button_149_Selected == true && destination == true)
	{
		button149->BackColor = Color::Aqua;
		button149->Text = "1";
		button149Value = 1;
	}

	if (button_149_Selected == true && clearCell == true)
	{
		button149->BackColor = SystemColors::Control;
		button149->Text = "0";
		button149Value = 0;
	}

}

private: System::Void button150_Click(System::Object^  sender, System::EventArgs^  e) {

	if (button_150_Selected == true && wall == true)
	{
		button150->BackColor = Color::Red;
		button150->Text = "255";
		button150Value = 255;
	}

	if (button_150_Selected == true && destination == true)
	{
		button150->BackColor = Color::Aqua;
		button150->Text = "1";
		button150Value = 1;
	}

	if (button_150_Selected == true && clearCell == true)
	{
		button150->BackColor = SystemColors::Control;
		button150->Text = "0";
		button150Value = 0;
	}

}


private: System::Void radioButtontest1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 1;
		 }

private: System::Void radioButtontest2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 2;
		 }

private: System::Void radioButtontest3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 3;
		 }

private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 4;
		 }

private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 5;
		 }

private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 6;
		 }

private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 algorithmType = 7;
		 }




//the purpose of this is to make sure that there is only one destination
//in a 2d array
//and to find where that destination is x and y
void lookForGoal1(unsigned char array1[15][10], int x_size, int y_size)
{
	
	count_destinations = 0;

	//nested loop 1, make sure there is only 1 destination
	for(int y=0; y < y_size; y++)
	{
		for(int x=0; x < x_size; x++)
		{
			if (array1[x][y] == 1)
			{	
				count_destinations ++;

				//finds out where the destnation is
				//int goal_x = x;
				//int goal_y = y;

			}
			/*MessageBox::Show(
				String::Format("array_x= {0} array_y= {1} info= {2}", x,y,array1[x][y] ),
				"Screening Result",
				MessageBoxButtons::OK, MessageBoxIcon::Information);*/
		}
	}

	/*MessageBox::Show(
				String::Format("number of destinations = {0}", count_destinations),
				"Screening Result",
				MessageBoxButtons::OK, MessageBoxIcon::Information);*/

	//count_destinations = number_of_destinations;
}

//the purpose of this is to make sure that there is only one destination 
//in a 1d array
//and to find where that destination is x and y
void lookForGoal2(unsigned char array2[150], int x_size, int y_size)
{	
	int counter = 0;

	//int goal_x = 0;
	//int goal_y = 0;

	count_destinations = 0;
	//nested loop 1, make sure there is only 1 destination
	for(int y=0; y < y_size; y++)
	{
		for(int x=0; x < x_size; x++)
		{
			if (array2[counter] == 1)
			{	
				count_destinations ++;
				//finds out where the destnation is				
				//goal_x = x;
				//goal_y = y;

				//messagebox here
				/*MessageBox::Show(
					String::Format("array_x = {0}\n array_y = {1}\n counter = {2}\n info = {3}", x,y,counter,array2[counter] ),
				"Screening_Result",
				MessageBoxButtons::OK, MessageBoxIcon::Information);*/
			}
			
			counter ++;

			//messagebox here
			/*MessageBox::Show(
				String::Format("array_x= {0} array_y= {1} info= {2}", x,y,array2[index] ),
				"Screening_Result",
				MessageBoxButtons::OK, MessageBoxIcon::Information);*/
		}
	}
}

//this part would happen automatically in FASE, 
// as we constantly track the players position
//but need to do it here
void findTarget(unsigned char array2[150], int x_size, int y_size)
{
	int goal_x = 0;
	int goal_y = 0;
	int arraysize = x_size * y_size;
	int x = 0;
	int y = 0;

	//loop 1, find the target
	for(int arrayCounter=0; arrayCounter < arraysize; arrayCounter++)
	{
		if(x == x_size)
		{
			x = 0;//set to first column
			y ++;//move down a row
		}
		if(y == y_size)
		{
			y = 0;//set to first row
			x = 0;//set to first column
		}

		if (array2[arrayCounter] == 1)
		{
			target_x = x;
			target_y = y;			
		}
		x++;
	}
	//messagebox here
	/*MessageBox::Show(
		String::Format("array_x = {0}\n array_y = {1}\n", goal_x,goal_y ),
		"Screening_Result",
		MessageBoxButtons::OK, MessageBoxIcon::Information);*/
}

void WavefrontSearch99(unsigned char array1[15][10], int x_size, int y_size)//int propagate_wavefront(int robot_x, int robot_y, int goal_x, int goal_y)
{
	int counter=0;//reset the counter for each run!
	int minimum_number = 1;

	while(counter < 100)//allows for recycling until robot is found
	{
		

		for(int y=0; y < y_size; y++)
		{
			for(int x=0; x < x_size; x++)
			{
				//if this location is a wall just ignore it
				if (array1[x][y] == 255)
				{
					x++;
				}
				if (array1[x][y] == minimum_number)
				{
					array1[x][y] = 1;//just leave well enough alone
					x++;
				}
				if (array1[x][y] == 0)
				{
					//check east
					if ((x < x_size) && (array1[x + 1][y] == minimum_number))
					{
						array1[x][y] = minimum_number + 1;
						/*MessageBox::Show(
						String::Format(" X = {0}\n Y = {1}\n\n array slot = {2}", x,y,array1[x][y] ),
						"EAST",
						MessageBoxButtons::OK, MessageBoxIcon::Information);*/
					}
					//check west
					if ((x > 0) && (array1[x - 1][y] == minimum_number))
					{
						array1[x][y] = minimum_number + 1;
						/*MessageBox::Show(
							String::Format(" X = {0}\n Y = {1}\n\n array slot = {2}", x,y,array1[x][y] ),
							"WEST",
							MessageBoxButtons::OK, MessageBoxIcon::Information);*/
					}
					//check north
					if ((x > 0) && (array1[x][y - 1] == minimum_number))
					{
						array1[x][y] = minimum_number + 1;
						/*MessageBox::Show(
							String::Format(" X = {0}\n Y = {1}\n\n array slot = {2}", x,y,array1[x][y] ),
							"NORTH",
							MessageBoxButtons::OK, MessageBoxIcon::Information);*/
					}

					//check south
					if ((x < y_size) && (array1[x][y + 1] == minimum_number))
					{
						array1[x][y] = minimum_number + 1;
						/*MessageBox::Show(
							String::Format(" X = {0}\n Y = {1}\n\n array slot = {2}", x,y,array1[x][y] ),
							"SOUTH",
							MessageBoxButtons::OK, MessageBoxIcon::Information);*/
					}

					/*MessageBox::Show(
						String::Format(" X = {0}\n Y = {1}\n\n array slot = {2}", x,y,array1[x][y] ),
						"X/Y",
						MessageBoxButtons::OK, MessageBoxIcon::Information);//counter*/

				}

				//else
				/*
				{

					if (array1[x][y] == 0)




					if((x < 15) || (array1[x][y] == 0) && (array1[x+1][y] == minimum_number))//not out of boundary
					{
						//if  (array1[x+1][y] == minimum_number)
						{
							array1[x][y] = minimum_number + 1;						
						}
						
					}
						if((x > 0) || (array1[x][y] == 0) && (array1[x-1][y] == minimum_number))
						{
							//if  (array1[x-1][y] == minimum_number)
							{
								array1[x][y] = minimum_number + 1;						
							}
							
						}
	
						//right
						if((y < 10) || (array1[x][y] == 0) && (array1[x][y+1] == minimum_number))
						{
							//if  (array1[x][y+1] == minimum_number)
							{
								array1[x][y] = minimum_number + 1;
							}
							
						}
            
						//left
						if((y > 0) || (array1[x][y] == 0) && (array1[x][y-1] == minimum_number))
						{
							//if  (array1[x][y-1] == minimum_number)
							{
								array1[x][y] = minimum_number + 1;
							}
							
						}

						
					}*/


			}//end x
		}//end y

		minimum_number ++;
		counter ++;
		/*MessageBox::Show(
			String::Format(" minimum_number = {0} counter = {1}", minimum_number, counter ),
			"MIN",
			MessageBoxButtons::OK, MessageBoxIcon::Information);*/		
	}//end counter
}

void WavefrontSearch98(unsigned char array1[15][10], int x_size, int y_size)
{
	#define max(x, y) (((x) > (y)) ? (x) : (y))

	int waveStart = 1;
	bool foundWave = true;
	bool eastEdge = true;
	bool westEdge = true;
	bool northEdge = true;
	bool southEdge = true;

	int center, north, south, east, west, compair1, compair2;
	center = north = south = east = west = compair1 = compair2 = 0;

	for (int iterations = 0; iterations < 15; iterations ++)
	{
		//foundWave = false;
		for(int y=0; y < y_size; y++)
		{
			for(int x=0; x < x_size; x++)
			{

				if (y - 1 < 0)
				{
					west = array1[x][y];
					//westEdge = true;
				}
				else
				{
					westEdge = false;
				}
				if (y + 1 > y_size)
				{
					east = array1[x][y];
					//eastEdge = true;
				}
				else
				{
					eastEdge = false;
				}
				if (x - 1 < 0)
				{
					north = array1[x][y];
					//northEdge = true;
				}
				else
				{
					northEdge = false;
				}
				if (x + 1 > x_size)
				{
					south = array1[x][y];
					//southEdge = true;
				}
				else
				{
					southEdge = false;
				}

				center = array1[x][y];
				north = array1[x - 1][y];
				south = array1[x + 1][y];
				east = array1[x][y + 1];
				west = array1[x][y - 1];

				//slot already filled
				if (array1[x][y] != 0)
				{ 
					x++;
				}
				//area empty
				if (center == 0)
				{
					if (array1[x + 1][y] == 0)
						if (array1[x - 1][y] == 0)
							if (array1[x][y + 1] == 0)
								if (array1[x][y - 1] == 0)
								{
									x++;
								}					
				}
				
				if (array1[x][y] == 0)
				{
					
					if (north == 255)
						north = 0;

					
					if (south == 255)
						south = 0;

					
					if (south == 255)
						south = 0;

					
					if (south == 255)
						south = 0;

					

					//compair1 = max(north, south);
					//compair2 = max(east, west);
					//center = 1 + (max(compair1, compair2));
					//array1[x][y] = center;

				}
				
				




			}
		}

	}



}



void WavefrontSearch2(unsigned char array1[15][10], int x_size, int y_size)
{
	//int goal_x, goal_y;
	bool foundWave = true;
	int currentWave = 1; //Looking for goal first

	//find target first
	for(int y=0; y < y_size; y++)
	{
		for(int x=0; x < x_size; x++)
		{
		}
	}
	

	while(foundWave == true)
	{
		foundWave = false;
		for(int y=0; y < y_size; y++)
		{
			for(int x=0; x < x_size; x++)
			{
				if(array1[x][y] == currentWave)
				{
					foundWave = true;
					int goal_x = x;
					int goal_y = y;
 
					if(goal_x > 0) //This code checks the array bounds heading WEST
						if(array1[goal_x-1][goal_y] == 0)  //This code checks the WEST direction
							array1[goal_x-1][goal_y] = currentWave + 1;
 
					if(goal_x < (x_size - 1)) //This code checks the array bounds heading EAST
						if(array1[goal_x+1][goal_y] == 0)//This code checks the EAST direction
							array1[goal_x+1][goal_y] = currentWave + 1;
 
					if(goal_y > 0)//This code checks the array bounds heading SOUTH
						if(array1[goal_x][goal_y-1] == 0) //This code checks the SOUTH direction
							array1[goal_x][goal_y-1] = currentWave + 1;
 
					if(goal_y < (y_size - 1))//This code checks the array bounds heading NORTH
						if(array1[goal_x][goal_y+1] == 0) //This code checks the NORTH direction
							array1[goal_x][goal_y+1] = currentWave + 1;
				}//end current wave
			}//end X
		}//end Y
	currentWave++;
	}//end while
}





private: System::Void buttonTest_Click(System::Object^  sender, System::EventArgs^  e) {

			 //for windows based timer
			 //LARGE_INTEGER frequency;        // ticks per second
			 //LARGE_INTEGER t1;           // ticks
			 //LARGE_INTEGER t2;
			 //double elapsedTime = 0;
			 //QueryPerformanceFrequency(&frequency);//for windows based timer
			 LARGE_INTEGER StartingTime, EndingTime, ElapsedMicroseconds;
			 LARGE_INTEGER Frequency;
			 //for windows based timer

			 label30->Text = Convert::ToString(0);//clear label

			 //let's plug some numbers into the first array
			 //150 variables
			 //alot of numbers
			 {
				 array1[0][0] = button001Value;
				 array1[1][0] = button002Value;
				 array1[2][0] = button003Value;
				 array1[3][0] = button004Value;
				 array1[4][0] = button005Value;
				 array1[5][0] = button006Value;
				 array1[6][0] = button007Value;
				 array1[7][0] = button008Value;
				 array1[8][0] = button009Value;
				 array1[9][0] = button010Value;
				 array1[10][0] = button011Value;
				 array1[11][0] = button012Value;
				 array1[12][0] = button013Value;
				 array1[13][0] = button014Value;
				 array1[14][0] = button015Value;

				 array1[0][1] = button016Value;
				 array1[1][1] = button017Value;
				 array1[2][1] = button018Value;
				 array1[3][1] = button019Value;
				 array1[4][1] = button020Value;
				 array1[5][1] = button021Value;
				 array1[6][1] = button022Value;
				 array1[7][1] = button023Value;
				 array1[8][1] = button024Value;
				 array1[9][1] = button025Value;
				 array1[10][1] = button026Value;
				 array1[11][1] = button027Value;
				 array1[12][1] = button028Value;
				 array1[13][1] = button029Value;
				 array1[14][1] = button030Value;

				 array1[0][2] = button031Value;
				 array1[1][2] = button032Value;
				 array1[2][2] = button033Value;
				 array1[3][2] = button034Value;
				 array1[4][2] = button035Value;
				 array1[5][2] = button036Value;
				 array1[6][2] = button037Value;
				 array1[7][2] = button038Value;
				 array1[8][2] = button039Value;
				 array1[9][2] = button040Value;
				 array1[10][2] = button041Value;
				 array1[11][2] = button042Value;
				 array1[12][2] = button043Value;
				 array1[13][2] = button044Value;
				 array1[14][2] = button045Value;

				 array1[0][3] = button046Value;
				 array1[1][3] = button047Value;
				 array1[2][3] = button048Value;
				 array1[3][3] = button049Value;
				 array1[4][3] = button050Value;
				 array1[5][3] = button051Value;
				 array1[6][3] = button052Value;
				 array1[7][3] = button053Value;
				 array1[8][3] = button054Value;
				 array1[9][3] = button055Value;
				 array1[10][3] = button056Value;
				 array1[11][3] = button057Value;
				 array1[12][3] = button058Value;
				 array1[13][3] = button059Value;
				 array1[14][3] = button060Value;

				 array1[0][4] = button061Value;
				 array1[1][4] = button062Value;
				 array1[2][4] = button063Value;
				 array1[3][4] = button064Value;
				 array1[4][4] = button065Value;
				 array1[5][4] = button066Value;
				 array1[6][4] = button067Value;
				 array1[7][4] = button068Value;
				 array1[8][4] = button069Value;
				 array1[9][4] = button070Value;
				 array1[10][4] = button071Value;
				 array1[11][4] = button072Value;
				 array1[12][4] = button073Value;
				 array1[13][4] = button074Value;
				 array1[14][4] = button075Value;

				 array1[0][5] = button076Value;
				 array1[1][5] = button077Value;
				 array1[2][5] = button078Value;
				 array1[3][5] = button079Value;
				 array1[4][5] = button080Value;
				 array1[5][5] = button081Value;
				 array1[6][5] = button082Value;
				 array1[7][5] = button083Value;
				 array1[8][5] = button084Value;
				 array1[9][5] = button085Value;
				 array1[10][5] = button086Value;
				 array1[11][5] = button087Value;
				 array1[12][5] = button088Value;
				 array1[13][5] = button089Value;
				 array1[14][5] = button090Value;//

				 array1[0][6] = button091Value;
				 array1[1][6] = button092Value;
				 array1[2][6] = button093Value;
				 array1[3][6] = button094Value;
				 array1[4][6] = button095Value;
				 array1[5][6] = button096Value;
				 array1[6][6] = button097Value;
				 array1[7][6] = button098Value;
				 array1[8][6] = button099Value;
				 array1[9][6] = button100Value;
				 array1[10][6] = button101Value;
				 array1[11][6] = button102Value;
				 array1[12][6] = button103Value;
				 array1[13][6] = button104Value;
				 array1[14][6] = button105Value;

				 array1[0][7] = button106Value;
				 array1[1][7] = button107Value;
				 array1[2][7] = button108Value;
				 array1[3][7] = button109Value;
				 array1[4][7] = button110Value;
				 array1[5][7] = button111Value;
				 array1[6][7] = button112Value;
				 array1[7][7] = button113Value;
				 array1[8][7] = button114Value;
				 array1[9][7] = button115Value;
				 array1[10][7] = button116Value;
				 array1[11][7] = button117Value;
				 array1[12][7] = button118Value;
				 array1[13][7] = button119Value;
				 array1[14][7] = button120Value;
				 
				 array1[0][8] = button121Value;
				 array1[1][8] = button122Value;
				 array1[2][8] = button123Value;
				 array1[3][8] = button124Value;
				 array1[4][8] = button125Value;
				 array1[5][8] = button126Value;
				 array1[6][8] = button127Value;
				 array1[7][8] = button128Value;
				 array1[8][8] = button129Value;
				 array1[9][8] = button130Value;
				 array1[10][8] = button131Value;
				 array1[11][8] = button132Value;
				 array1[12][8] = button133Value;
				 array1[13][8] = button134Value;
				 array1[14][8] = button135Value;

				 array1[0][9] = button136Value;
				 array1[1][9] = button137Value;
				 array1[2][9] = button138Value;
				 array1[3][9] = button139Value;
				 array1[4][9] = button140Value;
				 array1[5][9] = button141Value;
				 array1[6][9] = button142Value;
				 array1[7][9] = button143Value;
				 array1[8][9] = button144Value;
				 array1[9][9] = button145Value;
				 array1[10][9] = button146Value;
				 array1[11][9] = button147Value;
				 array1[12][9] = button148Value;
				 array1[13][9] = button149Value;
				 array1[14][9] = button150Value;
			 }

			 //array2 is 1d array
			 //150 variables
			 //alot of numbers
			 {
				 array2[0]= button001Value;
				 array2[1]= button002Value;
				 array2[2]= button003Value;
				 array2[3]= button004Value;
				 array2[4]= button005Value;
				 array2[5]= button006Value;
				 array2[6]= button007Value;
				 array2[7]= button008Value;
				 array2[8]= button009Value;
				 array2[9]= button010Value;
				 array2[10]= button011Value;//
				 array2[11]= button012Value;
				 array2[12]= button013Value;
				 array2[13]= button014Value;
				 array2[14]= button015Value;
				 array2[15]= button016Value;
				 array2[16]= button017Value;
				 array2[17]= button018Value;
				 array2[18]= button019Value;
				 array2[19]= button020Value;
				 array2[20]= button021Value;//
				 array2[21]= button022Value;
				 array2[22]= button023Value;
				 array2[23]= button024Value;
				 array2[24]= button025Value;
				 array2[25]= button026Value;
				 array2[26]= button027Value;
				 array2[27]= button028Value;
				 array2[28]= button029Value;
				 array2[29]= button030Value;
				 array2[30]= button031Value;//
				 array2[31]= button032Value;
				 array2[32]= button033Value;
				 array2[33]= button034Value;
				 array2[34]= button035Value;
				 array2[35]= button036Value;
				 array2[36]= button037Value;
				 array2[37]= button038Value;
				 array2[38]= button039Value;
				 array2[39]= button040Value;
				 array2[40]= button041Value;//
				 array2[41]= button042Value;
				 array2[42]= button043Value;
				 array2[43]= button044Value;
				 array2[44]= button045Value;
				 array2[45]= button046Value;
				 array2[46]= button047Value;
				 array2[47]= button048Value;
				 array2[48]= button049Value;
				 array2[49]= button050Value;
				 array2[50]= button051Value;//
				 array2[51]= button052Value;
				 array2[52]= button053Value;
				 array2[53]= button054Value;
				 array2[54]= button055Value;
				 array2[55]= button056Value;
				 array2[56]= button057Value;
				 array2[57]= button058Value;
				 array2[58]= button059Value;
				 array2[59]= button060Value;
				 array2[60]= button061Value;//
				 array2[61]= button062Value;
				 array2[62]= button063Value;
				 array2[63]= button064Value;
				 array2[64]= button065Value;
				 array2[65]= button066Value;
				 array2[66]= button067Value;
				 array2[67]= button068Value;
				 array2[68]= button069Value;
				 array2[69]= button070Value;
				 array2[70]= button071Value;//
				 array2[71]= button072Value;
				 array2[72]= button073Value;
				 array2[73]= button074Value;
				 array2[74]= button075Value;
				 array2[75]= button076Value;
				 array2[76]= button077Value;
				 array2[77]= button078Value;
				 array2[78]= button079Value;
				 array2[79]= button080Value;
				 array2[80]= button081Value;//
				 array2[81]= button082Value;
				 array2[82]= button083Value;
				 array2[83]= button084Value;
				 array2[84]= button085Value;
				 array2[85]= button086Value;
				 array2[86]= button087Value;
				 array2[87]= button088Value;
				 array2[88]= button089Value;
				 array2[89]= button090Value;
				 array2[90]= button091Value;//
				 array2[91]= button092Value;
				 array2[92]= button093Value;
				 array2[93]= button094Value;
				 array2[94]= button095Value;
				 array2[95]= button096Value;
				 array2[96]= button097Value;
				 array2[97]= button098Value;
				 array2[98]= button099Value;
				 array2[99]= button100Value;
				 array2[100]= button101Value;//
				 array2[101]= button102Value;
				 array2[102]= button103Value;
				 array2[103]= button104Value;
				 array2[104]= button105Value;
				 array2[105]= button106Value;
				 array2[106]= button107Value;
				 array2[107]= button108Value;
				 array2[108]= button109Value;
				 array2[109]= button110Value;
				 array2[110]= button111Value;//
				 array2[111]= button112Value;
				 array2[112]= button113Value;
				 array2[113]= button114Value;
				 array2[114]= button115Value;
				 array2[115]= button116Value;
				 array2[116]= button117Value;
				 array2[117]= button118Value;
				 array2[118]= button119Value;
				 array2[119]= button120Value;
				 array2[120]= button121Value;//
				 array2[121]= button122Value;
				 array2[122]= button123Value;
				 array2[123]= button124Value;
				 array2[124]= button125Value;
				 array2[125]= button126Value;
				 array2[126]= button127Value;
				 array2[127]= button128Value;
				 array2[128]= button129Value;
				 array2[129]= button130Value;
				 array2[130]= button131Value;//
				 array2[131]= button132Value;
				 array2[132]= button133Value;
				 array2[133]= button134Value;
				 array2[134]= button135Value;
				 array2[135]= button136Value;
				 array2[136]= button137Value;
				 array2[137]= button138Value;
				 array2[138]= button139Value;
				 array2[139]= button140Value;
				 array2[140]= button141Value;//
				 array2[141]= button142Value;
				 array2[142]= button143Value;
				 array2[143]= button144Value;
				 array2[144]= button145Value;
				 array2[145]= button146Value;
				 array2[146]= button147Value;
				 array2[147]= button148Value;
				 array2[148]= button149Value;
				 array2[149]= button150Value;
			 }

			 //arrays are now populated

			 count_destinations = 0;//reset counter to 0
			 //verify that there is only one goal in a 2d array		 
			 if (algorithmType == 1)
			 {				 
				 lookForGoal1(array1, x_size, y_size);
			 }

			 if (algorithmType == 2)
			 {
				 lookForGoal1(array1, x_size, y_size);
			 }
			 //verify that there is only one goal in a 1d array	
			 if (algorithmType == 3)
			 {
				 lookForGoal2(array2, x_size, y_size);
			 }

			 if (algorithmType == 4)
			 {
				 lookForGoal2(array2, x_size, y_size);
			 }

			 if (algorithmType == 5)
			 {
				 lookForGoal2(array2, x_size, y_size);
			 }

			 if (algorithmType == 6)
			 {
				 lookForGoal2(array2, x_size, y_size);
			 }

			 if (algorithmType == 7)
			 {
				 lookForGoal2(array2, x_size, y_size);
			 }
			 

			 
			 //more than one destination
			 if (count_destinations > 1)
			 {
				 MessageBox::Show("You have selected more than 1 destination\n please only use 1 destination", " Error",
					 MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }

			 //no destinations
			 if (count_destinations == 0)
			 {
				 MessageBox::Show("Please select a destination", " Error",
					 MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }		 

			 if (count_destinations == 1)
			 {				 
				 //QueryPerformanceCounter(&t1);// start timer for windows based timer

				 if (algorithmType == 1)
				 {
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch1(array1, x_size, y_size);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }
				 if (algorithmType == 2)
				 {
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch2(array1, x_size, y_size);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }
				 if (algorithmType == 3)
				 {
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch3(array2, x_size, y_size);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }
				 if (algorithmType == 4)
				 {
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch4(array2, x_size, y_size);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }				 
				 if (algorithmType == 5)
				 {
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch5(array2, x_size, y_size);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }
				 if (algorithmType == 6)
				 {
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch6(array2, x_size, y_size);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }

				 if (algorithmType == 7)
				 {
					 findTarget(array2, x_size, y_size);// we are not timing this because this info is automatic in FASE
					 QueryPerformanceFrequency(&Frequency); 
					 QueryPerformanceCounter(&StartingTime);
					 WavefrontSearch7(array2, x_size, y_size, target_x, target_y);
					 QueryPerformanceCounter(&EndingTime);
					 ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
				 }


				 //QueryPerformanceCounter(&t2);// end timer for windows based timer

				 // compute and print the elapsed time in millisec
				 //elapsedTime = ((double)((t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart));

				 ElapsedMicroseconds.QuadPart *= 1000000;
				 ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;

				 label30->Text = Convert::ToString(ElapsedMicroseconds.QuadPart);
			 }

/*			 for(int y=0; y < y_size; y++)
			 {
				 for(int x=0; x < x_size; x++)
				 {
					 //MessageBox::Show(
					 //String::Format("array_x= {0} array_y= {1} info= {2}", x,y,array1[x][y] ),
					 //"Screening Result",
					// MessageBoxButtons::OK, MessageBoxIcon::Information);
				 }
			 }
*/

			 /*MessageBox::Show(
				 String::Format("algorithmType = {0}", algorithmType ),
				 "Screening Result",
				 MessageBoxButtons::OK, MessageBoxIcon::Information);*/



			 //now print the results to the screen
			 // large number of entries
			 if ((algorithmType == 1) || algorithmType == 2)//if ((algorithmType == 1))
			 {
				 button001->Text = array1[0][0].ToString();
				 button002->Text = array1[1][0].ToString();
				 button003->Text = array1[2][0].ToString();
				 button004->Text = array1[3][0].ToString();
				 button005->Text = array1[4][0].ToString();
				 button006->Text = array1[5][0].ToString();
				 button007->Text = array1[6][0].ToString();
				 button008->Text = array1[7][0].ToString();
				 button009->Text = array1[8][0].ToString();
				 button010->Text = array1[9][0].ToString();
				 button011->Text = array1[10][0].ToString();
				 button012->Text = array1[11][0].ToString();
				 button013->Text = array1[12][0].ToString();
				 button014->Text = array1[13][0].ToString();
				 button015->Text = array1[14][0].ToString();

				 button016->Text = array1[0][1].ToString();
				 button017->Text = array1[1][1].ToString();
				 button018->Text = array1[2][1].ToString();
				 button019->Text = array1[3][1].ToString();
				 button020->Text = array1[4][1].ToString();
				 button021->Text = array1[5][1].ToString();
				 button022->Text = array1[6][1].ToString();
				 button023->Text = array1[7][1].ToString();
				 button024->Text = array1[8][1].ToString();
				 button025->Text = array1[9][1].ToString();
				 button026->Text = array1[10][1].ToString();
				 button027->Text = array1[11][1].ToString();
				 button028->Text = array1[12][1].ToString();
				 button029->Text = array1[13][1].ToString();
				 button030->Text = array1[14][1].ToString();

				 button031->Text = array1[0][2].ToString();
				 button032->Text = array1[1][2].ToString();
				 button033->Text = array1[2][2].ToString();
				 button034->Text = array1[3][2].ToString();
				 button035->Text = array1[4][2].ToString();
				 button036->Text = array1[5][2].ToString();
				 button037->Text = array1[6][2].ToString();
				 button038->Text = array1[7][2].ToString();
				 button039->Text = array1[8][2].ToString();
				 button040->Text = array1[9][2].ToString();
				 button041->Text = array1[10][2].ToString();
				 button042->Text = array1[11][2].ToString();
				 button043->Text = array1[12][2].ToString();
				 button044->Text = array1[13][2].ToString();
				 button045->Text = array1[14][2].ToString();

				 button046->Text = array1[0][3].ToString();
				 button047->Text = array1[1][3].ToString();
				 button048->Text = array1[2][3].ToString();
				 button049->Text = array1[3][3].ToString();
				 button050->Text = array1[4][3].ToString();
				 button051->Text = array1[5][3].ToString();
				 button052->Text = array1[6][3].ToString();
				 button053->Text = array1[7][3].ToString();
				 button054->Text = array1[8][3].ToString();
				 button055->Text = array1[9][3].ToString();
				 button056->Text = array1[10][3].ToString();
				 button057->Text = array1[11][3].ToString();
				 button058->Text = array1[12][3].ToString();
				 button059->Text = array1[13][3].ToString();
				 button060->Text = array1[14][3].ToString();

				 button061->Text = array1[0][4].ToString();
				 button062->Text = array1[1][4].ToString();
				 button063->Text = array1[2][4].ToString();
				 button064->Text = array1[3][4].ToString();
				 button065->Text = array1[4][4].ToString();
				 button066->Text = array1[5][4].ToString();
				 button067->Text = array1[6][4].ToString();
				 button068->Text = array1[7][4].ToString();
				 button069->Text = array1[8][4].ToString();
				 button070->Text = array1[9][4].ToString();
				 button071->Text = array1[10][4].ToString();
				 button072->Text = array1[11][4].ToString();
				 button073->Text = array1[12][4].ToString();
				 button074->Text = array1[13][4].ToString();
				 button075->Text = array1[14][4].ToString();

				 button076->Text = array1[0][5].ToString();
				 button077->Text = array1[1][5].ToString();
				 button078->Text = array1[2][3].ToString();
				 button079->Text = array1[3][5].ToString();
				 button080->Text = array1[4][5].ToString();
				 button081->Text = array1[5][5].ToString();
				 button082->Text = array1[6][5].ToString();
				 button083->Text = array1[7][5].ToString();
				 button084->Text = array1[8][5].ToString();
				 button085->Text = array1[9][5].ToString();
				 button086->Text = array1[10][5].ToString();
				 button087->Text = array1[11][5].ToString();
				 button088->Text = array1[12][5].ToString();
				 button089->Text = array1[13][5].ToString();
				 button090->Text = array1[14][5].ToString();

				 button091->Text = array1[0][6].ToString();
				 button092->Text = array1[1][6].ToString();
				 button093->Text = array1[2][6].ToString();
				 button094->Text = array1[3][6].ToString();
				 button095->Text = array1[4][6].ToString();
				 button096->Text = array1[5][6].ToString();
				 button097->Text = array1[6][6].ToString();
				 button098->Text = array1[7][6].ToString();
				 button099->Text = array1[8][6].ToString();
				 button100->Text = array1[9][6].ToString();
				 button101->Text = array1[10][6].ToString();
				 button102->Text = array1[11][6].ToString();
				 button103->Text = array1[12][6].ToString();
				 button104->Text = array1[13][6].ToString();
				 button105->Text = array1[14][6].ToString();

				 button106->Text = array1[0][7].ToString();
				 button107->Text = array1[1][7].ToString();
				 button108->Text = array1[2][7].ToString();
				 button109->Text = array1[3][7].ToString();
				 button110->Text = array1[4][7].ToString();
				 button111->Text = array1[5][7].ToString();
				 button112->Text = array1[6][7].ToString();
				 button113->Text = array1[7][7].ToString();
				 button114->Text = array1[8][7].ToString();
				 button115->Text = array1[9][7].ToString();
				 button116->Text = array1[10][7].ToString();
				 button117->Text = array1[11][7].ToString();
				 button118->Text = array1[12][7].ToString();
				 button119->Text = array1[13][7].ToString();
				 button120->Text = array1[14][7].ToString();

				 button121->Text = array1[0][8].ToString();
				 button122->Text = array1[1][8].ToString();
				 button123->Text = array1[2][8].ToString();
				 button124->Text = array1[3][8].ToString();
				 button125->Text = array1[4][8].ToString();
				 button126->Text = array1[5][8].ToString();
				 button127->Text = array1[6][8].ToString();
				 button128->Text = array1[7][8].ToString();
				 button129->Text = array1[8][8].ToString();
				 button130->Text = array1[9][8].ToString();
				 button131->Text = array1[10][8].ToString();
				 button132->Text = array1[11][8].ToString();
				 button133->Text = array1[12][8].ToString();
				 button134->Text = array1[13][8].ToString();
				 button135->Text = array1[14][8].ToString();

				 button136->Text = array1[0][9].ToString();
				 button137->Text = array1[1][9].ToString();
				 button138->Text = array1[2][9].ToString();
				 button139->Text = array1[3][9].ToString();
				 button140->Text = array1[4][9].ToString();
				 button141->Text = array1[5][9].ToString();
				 button142->Text = array1[6][9].ToString();
				 button143->Text = array1[7][9].ToString();
				 button144->Text = array1[8][9].ToString();
				 button145->Text = array1[9][9].ToString();
				 button146->Text = array1[10][9].ToString();
				 button147->Text = array1[11][9].ToString();
				 button148->Text = array1[12][9].ToString();
				 button149->Text = array1[13][9].ToString();
				 button150->Text = array1[14][9].ToString();
			 }

			 if (algorithmType > 2)
			 {
				 button001->Text = array2[0].ToString();
				 button002->Text = array2[1].ToString();
				 button003->Text = array2[2].ToString();
				 button004->Text = array2[3].ToString();
				 button005->Text = array2[4].ToString();
				 button006->Text = array2[5].ToString();
				 button007->Text = array2[6].ToString();
				 button008->Text = array2[7].ToString();
				 button009->Text = array2[8].ToString();
				 button010->Text = array2[9].ToString();
				 button011->Text = array2[10].ToString();
				 button012->Text = array2[11].ToString();
				 button013->Text = array2[12].ToString();
				 button014->Text = array2[13].ToString();
				 button015->Text = array2[14].ToString();

				 button016->Text = array2[15].ToString();
				 button017->Text = array2[16].ToString();
				 button018->Text = array2[17].ToString();
				 button019->Text = array2[18].ToString();
				 button020->Text = array2[19].ToString();
				 button021->Text = array2[20].ToString();
				 button022->Text = array2[21].ToString();
				 button023->Text = array2[22].ToString();
				 button024->Text = array2[23].ToString();
				 button025->Text = array2[24].ToString();
				 button026->Text = array2[25].ToString();
				 button027->Text = array2[26].ToString();
				 button028->Text = array2[27].ToString();
				 button029->Text = array2[28].ToString();
				 button030->Text = array2[29].ToString();

				 button031->Text = array2[30].ToString();
				 button032->Text = array2[31].ToString();
				 button033->Text = array2[32].ToString();
				 button034->Text = array2[33].ToString();
				 button035->Text = array2[34].ToString();
				 button036->Text = array2[35].ToString();
				 button037->Text = array2[36].ToString();
				 button038->Text = array2[37].ToString();
				 button039->Text = array2[38].ToString();
				 button040->Text = array2[39].ToString();
				 button041->Text = array2[40].ToString();
				 button042->Text = array2[41].ToString();
				 button043->Text = array2[42].ToString();
				 button044->Text = array2[43].ToString();
				 button045->Text = array2[44].ToString();

				 button046->Text = array2[45].ToString();
				 button047->Text = array2[46].ToString();
				 button048->Text = array2[47].ToString();
				 button049->Text = array2[48].ToString();
				 button050->Text = array2[49].ToString();
				 button051->Text = array2[50].ToString();
				 button052->Text = array2[51].ToString();
				 button053->Text = array2[52].ToString();
				 button054->Text = array2[53].ToString();
				 button055->Text = array2[54].ToString();
				 button056->Text = array2[55].ToString();
				 button057->Text = array2[56].ToString();
				 button058->Text = array2[57].ToString();
				 button059->Text = array2[58].ToString();
				 button060->Text = array2[59].ToString();

				 button061->Text = array2[60].ToString();
				 button062->Text = array2[61].ToString();
				 button063->Text = array2[62].ToString();
				 button064->Text = array2[63].ToString();
				 button065->Text = array2[64].ToString();
				 button066->Text = array2[65].ToString();
				 button067->Text = array2[66].ToString();
				 button068->Text = array2[67].ToString();
				 button069->Text = array2[68].ToString();
				 button070->Text = array2[69].ToString();
				 button071->Text = array2[70].ToString();
				 button072->Text = array2[71].ToString();
				 button073->Text = array2[72].ToString();
				 button074->Text = array2[73].ToString();
				 button075->Text = array2[74].ToString();

				 button076->Text = array2[75].ToString();
				 button077->Text = array2[76].ToString();
				 button078->Text = array2[77].ToString();
				 button079->Text = array2[78].ToString();
				 button080->Text = array2[79].ToString();
				 button081->Text = array2[80].ToString();
				 button082->Text = array2[81].ToString();
				 button083->Text = array2[82].ToString();
				 button084->Text = array2[83].ToString();
				 button085->Text = array2[84].ToString();
				 button086->Text = array2[85].ToString();
				 button087->Text = array2[86].ToString();
				 button088->Text = array2[87].ToString();
				 button089->Text = array2[88].ToString();
				 button090->Text = array2[89].ToString();

				 button091->Text = array2[90].ToString();
				 button092->Text = array2[91].ToString();
				 button093->Text = array2[92].ToString();
				 button094->Text = array2[93].ToString();
				 button095->Text = array2[94].ToString();
				 button096->Text = array2[95].ToString();
				 button097->Text = array2[96].ToString();
				 button098->Text = array2[97].ToString();
				 button099->Text = array2[98].ToString();
				 button100->Text = array2[99].ToString();
				 button101->Text = array2[100].ToString();
				 button102->Text = array2[101].ToString();
				 button103->Text = array2[102].ToString();
				 button104->Text = array2[103].ToString();
				 button105->Text = array2[104].ToString();

				 button106->Text = array2[105].ToString();
				 button107->Text = array2[106].ToString();
				 button108->Text = array2[107].ToString();
				 button109->Text = array2[108].ToString();
				 button110->Text = array2[109].ToString();
				 button111->Text = array2[110].ToString();
				 button112->Text = array2[111].ToString();
				 button113->Text = array2[112].ToString();
				 button114->Text = array2[113].ToString();
				 button115->Text = array2[114].ToString();
				 button116->Text = array2[115].ToString();
				 button117->Text = array2[116].ToString();
				 button118->Text = array2[117].ToString();
				 button119->Text = array2[118].ToString();
				 button120->Text = array2[119].ToString();

				 button121->Text = array2[120].ToString();
				 button122->Text = array2[121].ToString();
				 button123->Text = array2[122].ToString();
				 button124->Text = array2[123].ToString();
				 button125->Text = array2[124].ToString();
				 button126->Text = array2[125].ToString();
				 button127->Text = array2[126].ToString();
				 button128->Text = array2[127].ToString();
				 button129->Text = array2[128].ToString();
				 button130->Text = array2[129].ToString();
				 button131->Text = array2[130].ToString();
				 button132->Text = array2[131].ToString();
				 button133->Text = array2[132].ToString();
				 button134->Text = array2[133].ToString();
				 button135->Text = array2[134].ToString();

				 button136->Text = array2[135].ToString();
				 button137->Text = array2[136].ToString();
				 button138->Text = array2[137].ToString();
				 button139->Text = array2[138].ToString();
				 button140->Text = array2[139].ToString();
				 button141->Text = array2[140].ToString();
				 button142->Text = array2[141].ToString();
				 button143->Text = array2[142].ToString();
				 button144->Text = array2[143].ToString();
				 button145->Text = array2[144].ToString();
				 button146->Text = array2[145].ToString();
				 button147->Text = array2[146].ToString();
				 button148->Text = array2[147].ToString();
				 button149->Text = array2[148].ToString();
				 button150->Text = array2[149].ToString();
			 }




		 }



private: System::Void clear_array_button_Click(System::Object^  sender, System::EventArgs^  e) {

	//clear out 2d array
	for(int y=0; y < y_size; y++)
	{
		for(int x=0; x < x_size; x++)
		{
			array1[x][y] = 0;
			/*MessageBox::Show(
			String::Format("array_x= {0} array_y= {1} info= {2}", x,y,array1[x][y] ),
			"Screening Result",
			MessageBoxButtons::OK, MessageBoxIcon::Information);*/
		
		}
	}


		//clear out 1d array
		for (int x=0; x < 150; x++)
		{
			array2[x] = 0;
		}

		//now clear out buttons and values
		//alot of numbers
		{
			//150 variables
			//alot of numbers
			//button text
			{
				button001->Text = "0";
				button001->BackColor = SystemColors::Control;
				button002->Text = "0";
				button002->BackColor = SystemColors::Control;
				button003->Text = "0";
				button003->BackColor = SystemColors::Control;
				button004->Text = "0";
				button004->BackColor = SystemColors::Control;
				button005->Text = "0";
				button005->BackColor = SystemColors::Control;
				button006->Text = "0";
				button006->BackColor = SystemColors::Control;
				button007->Text = "0";
				button007->BackColor = SystemColors::Control;
				button008->Text = "0";
				button008->BackColor = SystemColors::Control;
				button009->Text = "0";
				button009->BackColor = SystemColors::Control;
				button010->Text = "0";
				button010->BackColor = SystemColors::Control;

				button011->Text = "0";
				button011->BackColor = SystemColors::Control;
				button012->Text = "0";
				button012->BackColor = SystemColors::Control;
				button013->Text = "0";
				button013->BackColor = SystemColors::Control;
				button014->Text = "0";
				button014->BackColor = SystemColors::Control;
				button015->Text = "0";
				button015->BackColor = SystemColors::Control;
				button016->Text = "0";
				button016->BackColor = SystemColors::Control;
				button017->Text = "0";
				button017->BackColor = SystemColors::Control;
				button018->Text = "0";
				button018->BackColor = SystemColors::Control;
				button019->Text = "0";
				button019->BackColor = SystemColors::Control;
				button020->Text = "0";
				button020->BackColor = SystemColors::Control;
				button021->Text = "0";
				button021->BackColor = SystemColors::Control;

				button022->Text = "0";
				button022->BackColor = SystemColors::Control;
				button023->Text = "0";
				button023->BackColor = SystemColors::Control;
				button024->Text = "0";
				button024->BackColor = SystemColors::Control;
				button025->Text = "0";
				button025->BackColor = SystemColors::Control;
				button026->Text = "0";
				button026->BackColor = SystemColors::Control;
				button027->Text = "0";
				button027->BackColor = SystemColors::Control;
				button028->Text = "0";
				button028->BackColor = SystemColors::Control;
				button029->Text = "0";
				button029->BackColor = SystemColors::Control;
				button030->Text = "0";
				button030->BackColor = SystemColors::Control;

				button031->Text = "0";
				button031->BackColor = SystemColors::Control;
				button032->Text = "0";
				button032->BackColor = SystemColors::Control;
				button033->Text = "0";
				button033->BackColor = SystemColors::Control;
				button034->Text = "0";
				button034->BackColor = SystemColors::Control;
				button035->Text = "0";
				button035->BackColor = SystemColors::Control;
				button036->Text = "0";
				button036->BackColor = SystemColors::Control;
				button037->Text = "0";
				button037->BackColor = SystemColors::Control;
				button038->Text = "0";
				button038->BackColor = SystemColors::Control;
				button039->Text = "0";
				button039->BackColor = SystemColors::Control;
				button040->Text = "0";
				button040->BackColor = SystemColors::Control;

				button041->Text = "0";
				button041->BackColor = SystemColors::Control;
				button042->Text = "0";
				button042->BackColor = SystemColors::Control;
				button043->Text = "0";
				button043->BackColor = SystemColors::Control;
				button044->Text = "0";
				button044->BackColor = SystemColors::Control;
				button045->Text = "0";
				button045->BackColor = SystemColors::Control;
				button046->Text = "0";
				button046->BackColor = SystemColors::Control;
				button047->Text = "0";
				button047->BackColor = SystemColors::Control;
				button048->Text = "0";
				button048->BackColor = SystemColors::Control;
				button049->Text = "0";
				button049->BackColor = SystemColors::Control;
				button050->Text = "0";
				button050->BackColor = SystemColors::Control;

				button051->Text = "0";
				button051->BackColor = SystemColors::Control;
				button052->Text = "0";
				button052->BackColor = SystemColors::Control;
				button053->Text = "0";
				button053->BackColor = SystemColors::Control;
				button054->Text = "0";
				button054->BackColor = SystemColors::Control;
				button055->Text = "0";
				button055->BackColor = SystemColors::Control;
				button056->Text = "0";
				button056->BackColor = SystemColors::Control;
				button057->Text = "0";
				button057->BackColor = SystemColors::Control;
				button058->Text = "0";
				button058->BackColor = SystemColors::Control;
				button059->Text = "0";
				button059->BackColor = SystemColors::Control;

				button060->Text = "0";
				button060->BackColor = SystemColors::Control;
				button061->Text = "0";
				button061->BackColor = SystemColors::Control;
				button062->Text = "0";
				button062->BackColor = SystemColors::Control;
				button063->Text = "0";
				button063->BackColor = SystemColors::Control;
				button064->Text = "0";
				button064->BackColor = SystemColors::Control;
				button065->Text = "0";
				button065->BackColor = SystemColors::Control;
				button066->Text = "0";
				button066->BackColor = SystemColors::Control;
				button067->Text = "0";
				button067->BackColor = SystemColors::Control;
				button068->Text = "0";
				button068->BackColor = SystemColors::Control;
				button069->Text = "0";
				button069->BackColor = SystemColors::Control;

				button070->Text = "0";
				button070->BackColor = SystemColors::Control;
				button071->Text = "0";
				button071->BackColor = SystemColors::Control;
				button072->Text = "0";
				button072->BackColor = SystemColors::Control;
				button073->Text = "0";
				button073->BackColor = SystemColors::Control;
				button074->Text = "0";
				button074->BackColor = SystemColors::Control;
				button075->Text = "0";
				button075->BackColor = SystemColors::Control;
				button076->Text = "0";
				button076->BackColor = SystemColors::Control;
				button077->Text = "0";
				button077->BackColor = SystemColors::Control;
				button078->Text = "0";
				button078->BackColor = SystemColors::Control;
				button079->Text = "0";
				button079->BackColor = SystemColors::Control;

				button080->Text = "0";
				button080->BackColor = SystemColors::Control;
				button081->Text = "0";
				button081->BackColor = SystemColors::Control;
				button082->Text = "0";
				button082->BackColor = SystemColors::Control;
				button083->Text = "0";
				button083->BackColor = SystemColors::Control;
				button084->Text = "0";
				button084->BackColor = SystemColors::Control;
				button085->Text = "0";
				button085->BackColor = SystemColors::Control;
				button086->Text = "0";
				button086->BackColor = SystemColors::Control;
				button087->Text = "0";
				button087->BackColor = SystemColors::Control;
				button088->Text = "0";
				button088->BackColor = SystemColors::Control;
				button089->Text = "0";
				button089->BackColor = SystemColors::Control;

				button090->Text = "0";
				button090->BackColor = SystemColors::Control;
				button091->Text = "0";
				button091->BackColor = SystemColors::Control;
				button092->Text = "0";
				button092->BackColor = SystemColors::Control;
				button093->Text = "0";
				button093->BackColor = SystemColors::Control;
				button094->Text = "0";
				button094->BackColor = SystemColors::Control;
				button095->Text = "0";
				button095->BackColor = SystemColors::Control;
				button096->Text = "0";
				button096->BackColor = SystemColors::Control;
				button097->Text = "0";
				button097->BackColor = SystemColors::Control;
				button098->Text = "0";
				button098->BackColor = SystemColors::Control;
				button099->Text = "0";
				button099->BackColor = SystemColors::Control;

				button100->Text = "0";
				button100->BackColor = SystemColors::Control;
				button101->Text = "0";
				button101->BackColor = SystemColors::Control;
				button102->Text = "0";
				button102->BackColor = SystemColors::Control;
				button103->Text = "0";
				button103->BackColor = SystemColors::Control;
				button104->Text = "0";
				button104->BackColor = SystemColors::Control;
				button105->Text = "0";
				button105->BackColor = SystemColors::Control;
				button106->Text = "0";
				button106->BackColor = SystemColors::Control;
				button107->Text = "0";
				button107->BackColor = SystemColors::Control;
				button108->Text = "0";
				button108->BackColor = SystemColors::Control;
				button109->Text = "0";
				button109->BackColor = SystemColors::Control;
				button110->Text = "0";
				button110->BackColor = SystemColors::Control;

				button111->Text = "0";
				button111->BackColor = SystemColors::Control;
				button112->Text = "0";
				button112->BackColor = SystemColors::Control;
				button113->Text = "0";
				button113->BackColor = SystemColors::Control;
				button114->Text = "0";
				button114->BackColor = SystemColors::Control;
				button115->Text = "0";
				button115->BackColor = SystemColors::Control;
				button116->Text = "0";
				button116->BackColor = SystemColors::Control;
				button117->Text = "0";
				button117->BackColor = SystemColors::Control;
				button118->Text = "0";
				button118->BackColor = SystemColors::Control;
				button119->Text = "0";
				button119->BackColor = SystemColors::Control;
				button120->Text = "0";
				button120->BackColor = SystemColors::Control;

				button121->Text = "0";
				button121->BackColor = SystemColors::Control;
				button122->Text = "0";
				button122->BackColor = SystemColors::Control;
				button123->Text = "0";
				button123->BackColor = SystemColors::Control;
				button124->Text = "0";
				button124->BackColor = SystemColors::Control;
				button125->Text = "0";
				button125->BackColor = SystemColors::Control;
				button126->Text = "0";
				button126->BackColor = SystemColors::Control;
				button127->Text = "0";
				button127->BackColor = SystemColors::Control;
				button128->Text = "0";
				button128->BackColor = SystemColors::Control;
				button129->Text = "0";
				button129->BackColor = SystemColors::Control;
				button130->Text = "0";
				button130->BackColor = SystemColors::Control;

				button131->Text = "0";
				button131->BackColor = SystemColors::Control;
				button132->Text = "0";
				button132->BackColor = SystemColors::Control;
				button133->Text = "0";
				button133->BackColor = SystemColors::Control;
				button134->Text = "0";
				button134->BackColor = SystemColors::Control;
				button135->Text = "0";
				button135->BackColor = SystemColors::Control;
				button136->Text = "0";
				button136->BackColor = SystemColors::Control;
				button137->Text = "0";
				button137->BackColor = SystemColors::Control;
				button138->Text = "0";
				button138->BackColor = SystemColors::Control;
				button139->Text = "0";
				button139->BackColor = SystemColors::Control;
				button140->Text = "0";
				button140->BackColor = SystemColors::Control;

				button141->Text = "0";
				button141->BackColor = SystemColors::Control;
				button142->Text = "0";
				button142->BackColor = SystemColors::Control;
				button143->Text = "0";
				button143->BackColor = SystemColors::Control;
				button144->Text = "0";
				button144->BackColor = SystemColors::Control;
				button145->Text = "0";
				button145->BackColor = SystemColors::Control;
				button146->Text = "0";
				button146->BackColor = SystemColors::Control;
				button147->Text = "0";
				button147->BackColor = SystemColors::Control;
				button148->Text = "0";
				button148->BackColor = SystemColors::Control;
				button149->Text = "0";
				button149->BackColor = SystemColors::Control;
				button150->Text = "0";
				button150->BackColor = SystemColors::Control;
			}

			//button values
			{
				 button001Value = 0;
				 button002Value = 0;
				 button003Value = 0;
				 button004Value = 0;
				 button005Value = 0;
				 button006Value = 0;
				 button007Value = 0;
				 button008Value = 0;
				 button009Value = 0;
				 button010Value = 0;
				 button011Value = 0;
				 button012Value = 0;
				 button013Value = 0;
				 button014Value = 0;
				 button015Value = 0;
				 button016Value = 0;
				 button017Value = 0;
				 button018Value = 0;
				 button019Value = 0;
				 button020Value = 0;
				 button021Value = 0;
				 button022Value = 0;
				 button023Value = 0;
				 button024Value = 0;
				 button025Value = 0;
				 button026Value = 0;
				 button027Value = 0;
				 button028Value = 0;
				 button029Value = 0;
				 button030Value = 0;
				 button031Value = 0;
				 button032Value = 0;
				 button033Value = 0;
				 button034Value = 0;
				 button035Value = 0;
				 button036Value = 0;
				 button037Value = 0;
				 button038Value = 0;
				 button039Value = 0;
				 button040Value = 0;
				 button041Value = 0;
				 button042Value = 0;
				 button043Value = 0;
				 button044Value = 0;
				 button045Value = 0;
				 button046Value = 0;
				 button047Value = 0;
				 button048Value = 0;
				 button049Value = 0;
				 button050Value = 0;
				 button051Value = 0;
				 button052Value = 0;
				 button053Value = 0;
				 button054Value = 0;
				 button055Value = 0;
				 button056Value = 0;
				 button057Value = 0;
				 button058Value = 0;
				 button059Value = 0;
				 button060Value = 0;
				 button061Value = 0;
				 button062Value = 0;
				 button063Value = 0;
				 button064Value = 0;
				 button065Value = 0;
				 button066Value = 0;
				 button067Value = 0;
				 button068Value = 0;
				 button069Value = 0;
				 button070Value = 0;
				 button071Value = 0;
				 button072Value = 0;
				 button073Value = 0;
				 button074Value = 0;
				 button075Value = 0;
				 button076Value = 0;
				 button077Value = 0;
				 button078Value = 0;
				 button079Value = 0;
				 button080Value = 0;
				 button081Value = 0;
				 button082Value = 0;
				 button083Value = 0;
				 button084Value = 0;
				 button085Value = 0;
				 button086Value = 0;
				 button087Value = 0;
				 button088Value = 0;
				 button089Value = 0;
				 button090Value = 0;
				 button091Value = 0;
				 button092Value = 0;
				 button093Value = 0;
				 button094Value = 0;
				 button095Value = 0;
				 button096Value = 0;
				 button097Value = 0;
				 button098Value = 0;
				 button099Value = 0;
				 button100Value = 0;
				 button101Value = 0;
				 button102Value = 0;
				 button103Value = 0;
				 button104Value = 0;
				 button105Value = 0;
				 button106Value = 0;
				 button107Value = 0;
				 button108Value = 0;
				 button109Value = 0;
				 button110Value = 0;
				 button111Value = 0;
				 button112Value = 0;
				 button113Value = 0;
				 button114Value = 0;
				 button115Value = 0;
				 button116Value = 0;
				 button117Value = 0;
				 button118Value = 0;
				 button119Value = 0;
				 button120Value = 0;
				 button121Value = 0;
				 button122Value = 0;
				 button123Value = 0;
				 button124Value = 0;
				 button125Value = 0;
				 button126Value = 0;
				 button127Value = 0;
				 button128Value = 0;
				 button129Value = 0;
				 button130Value = 0;
				 button131Value = 0;
				 button132Value = 0;
				 button133Value = 0;
				 button134Value = 0;
				 button135Value = 0;
				 button136Value = 0;
				 button137Value = 0;
				 button138Value = 0;
				 button139Value = 0;
				 button140Value = 0;
				 button141Value = 0;
				 button142Value = 0;
				 button143Value = 0;
				 button144Value = 0;
				 button145Value = 0;
				 button146Value = 0;
				 button147Value = 0;
				 button148Value = 0;
				 button149Value = 0;
				 button150Value = 0;
			 }


		}
	
}













};
}



/*
wall
*/