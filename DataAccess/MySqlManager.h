#pragma once
#include "stdafx.h"

namespace DataAccess
{
	namespace MySql
	{
		class MySqlManager
		{
		private:
			MySqlManager() {}
			~MySqlManager() {}

		public:
			static void InitializeEnvironment();

			static void EndEnvironment();
		};
	}
}