#include "tools.h"


	ref class CLcad
	{
	private:
		System::String^ sSql;  // fr : requ�te SQL
		System::String^ sCnx;  // fr : cha�ne de connexion
		System::Data::SqlClient::SqlConnection^ oCnx; // 
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CLcad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
