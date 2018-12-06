//1.1) Search for:
		static void RegisterTitleName(int iIndex, const char * c_szTitleName);
//1.2) Replace with:
#ifdef ENABLE_EXTENDED_ALIGNMENT_SYSTEM
		static void RegisterTitleName(const int iIndex, const char * c_szTitleNameF, const char * c_szTitleNameM);
#else
		static void RegisterTitleName(int iIndex, const char * c_szTitleName);
#endif