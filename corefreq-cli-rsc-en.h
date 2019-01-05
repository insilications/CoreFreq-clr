/*
 * CoreFreq
 * Copyright (C) 2015-2018 CYRIL INGENIERIE
 * Licenses: GPL2
 */

#define RSC_LAYOUT_HEADER_PROC_CODE_EN					\
{									\
	' ','P','r','o','c','e','s','s','o','r',' ','[' 		\
}

#define RSC_LAYOUT_HEADER_BCLK_CODE_EN					\
{									\
	' ','B','a','s','e',' ','C','l','o','c','k',' ',		\
	'~',' ','0','0','0',' ','0','0','0',' ','0','0','0',' ','H','z' \
}

#define RSC_LAYOUT_RULLER_FREQUENCY_AVG_CODE_EN 			\
{									\
	'-','-','-','-','-','-',' ','%',' ','A','v','e','r','a','g','e',\
	's',' ','[',' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,\
	' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,\
	' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,\
	' ',' ',0x0,' ',']','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULLER_PACKAGE_CODE_EN				\
	"------------ Cycles ---- State -------------------- TSC Rati"	\
	"o ----------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULLER_TASKS_CODE_EN 				\
	"--- Freq(MHz) --- Tasks                    -----------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_TASKS_STATE_SORTED_CODE_EN				\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','S','t','a','t','e',')',' ', '-','-','-'			\
}

#define RSC_LAYOUT_TASKS_RUNTIME_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','R','u','n','T','i','m','e', ')',' ','-'			\
}

#define RSC_LAYOUT_TASKS_USRTIME_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','U','s','e','r','T','i','m', 'e',')',' '			\
}

#define RSC_LAYOUT_TASKS_SYSTIME_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','S','y','s','T','i','m','e', ')',' ','-'			\
}

#define RSC_LAYOUT_TASKS_PROCESS_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','P','I','D',')',' ','-','-', '-','-','-'			\
}

#define RSC_LAYOUT_TASKS_COMMAND_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','C','o','m','m','a','n','d', ')',' ','-'			\
}

#define RSC_LAYOUT_TASKS_REVERSE_SORT_OFF_CODE_EN			\
{									\
	' ', 'I','n','v','e','r','s','e',' ','[','O','F','F',']',' '	\
}

#define RSC_LAYOUT_TASKS_REVERSE_SORT_ON_CODE_EN			\
{									\
	' ', 'I','n','v','e','r','s','e',' ','[',' ','O','N',']',' '	\
}

#define RSC_LAYOUT_TASKS_VALUE_SWITCH_CODE_EN				\
{									\
	' ', 'V','a','l','u','e',' ','[',' ',' ',' ',']',' '		\
}

#define RSC_LAYOUT_TASKS_TRACKING_CODE_EN				\
{									\
	' ','T','r','a','c','k','i', 'n','g',' ','P','I','D',' ','[',' ',\
	'O','F','F',' ',']',' '						\
}

#define RSC_LAYOUT_RULLER_VOLTAGE_CODE_EN				\
	"--- Freq(MHz) - VID - Vcore ------------------ Energy(J) ---"	\
	"-- Power(W) ------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_FOOTER_SYSTEM_CODE_EN				\
{									\
	'T','a','s','k','s',' ','[',' ',' ',' ',' ',' ',' ',']',	\
	' ','M','e','m',' ','[',' ',' ',' ',' ',' ',' ',' ',' ',	\
	' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ','K','B',']' 	\
}

#define RSC_CREATE_HOTPLUG_CPU_ENABLE_CODE_EN	(ASCII*) "[   ENABLE ]"
#define RSC_CREATE_HOTPLUG_CPU_DISABLE_CODE_EN	(ASCII*) "[  DISABLE ]"

#define RSC_LAYOUT_CARD_LOAD_CODE_EN					\
{									\
	'[',' ',' ','%','L','O','A','D',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_IDLE_CODE_EN					\
{									\
	'[',' ',' ','%','I','D','L','E',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_TASK_CODE_EN					\
{									\
	'[','T','a','s','k','s',' ',' ',' ',' ',' ',']' 		\
}

#define RSC_PROCESSOR_TITLE_CODE_EN	(ASCII*) " Processor "
#define RSC_PROCESSOR_CODE_EN		(ASCII*) "Processor"
#define RSC_ARCHITECTURE_CODE_EN	(ASCII*) "Architecture"
#define RSC_VENDOR_ID_CODE_EN		(ASCII*) "Vendor ID"
#define RSC_MICROCODE_CODE_EN		(ASCII*) "Microcode"
#define RSC_SIGNATURE_CODE_EN		(ASCII*) "Signature"
#define RSC_STEPPING_CODE_EN		(ASCII*) "Stepping"
#define RSC_ONLINE_CPU_CODE_EN		(ASCII*) "Online CPU"
#define RSC_BASE_CLOCK_CODE_EN		(ASCII*) "Base Clock"
#define RSC_FREQUENCY_CODE_EN		(ASCII*) "Frequency"
#define RSC_RATIO_CODE_EN		(ASCII*) "Ratio"
#define RSC_FACTORY_CODE_EN		(ASCII*) "Factory"
#define RSC_LEVEL_CODE_EN		(ASCII*) "Level"
#define RSC_PROGRAMMABLE_CODE_EN	(ASCII*) "Programmable"
#define RSC_CONFIGURATION_CODE_EN	(ASCII*) "Configuration"
#define RSC_TURBO_ACTIVATION_CODE_EN	(ASCII*) "Turbo Activation"
#define RSC_NOMINAL_CODE_EN		(ASCII*) "Nominal"
#define RSC_UNLOCK_CODE_EN		(ASCII*) "UNLOCK"
#define RSC_LOCK_CODE_EN		(ASCII*) "  LOCK"

#define RSC_CPUID_TITLE_EN		\
(ASCII*) " function           EAX          EBX          ECX          EDX "

#define RSC_LARGEST_STD_FUNC_CODE_EN	(ASCII*) "Largest Standard Function"
#define RSC_LARGEST_EXT_FUNC_CODE_EN	(ASCII*) "Largest Extended Function"

#define RSC_SYS_REGS_TITLE_CODE_EN	(ASCII*) " System Registers "

#define RSC_ISA_TITLE_CODE_EN		(ASCII*) " Instruction Set Extensions "

#define RSC_FEATURES_TITLE_CODE_EN	(ASCII*) " Features "
#define RSC_MISSING_CODE_EN		(ASCII*) "Missing"
#define RSC_PRESENT_CODE_EN		(ASCII*) "Present"
#define RSC_VARIANT_CODE_EN		(ASCII*) "Variant"
#define RSC_INVARIANT_CODE_EN		(ASCII*) "Invariant"

#define RSC_TECHNOLOGIES_TITLE_CODE_EN	(ASCII*) " Technologies "

#define RSC_PERF_MON_TITLE_CODE_EN	(ASCII*) " Performance Monitoring "
#define RSC_VERSION_CODE_EN		(ASCII*) "Version"
#define RSC_COUNTERS_CODE_EN		(ASCII*) "Counters"
#define RSC_GENERAL_CTRS_CODE_EN	(ASCII*) "General"
#define RSC_FIXED_CTRS_CODE_EN		(ASCII*) "Fixed"

#define RSC_POWER_THERMAL_TITLE_CODE_EN (ASCII*) " Power & Thermal "

#define RSC_KERNEL_TITLE_CODE_EN	(ASCII*) " Kernel "
#define RSC_KERNEL_TOTAL_RAM_CODE_EN	(ASCII*) "Total RAM"
#define RSC_KERNEL_SHARED_RAM_CODE_EN	(ASCII*) "Shared RAM"
#define RSC_KERNEL_FREE_RAM_CODE_EN	(ASCII*) "Free RAM"
#define RSC_KERNEL_BUFFER_RAM_CODE_EN	(ASCII*) "Buffer RAM"
#define RSC_KERNEL_TOTAL_HIGH_CODE_EN	(ASCII*) "Total High"
#define RSC_KERNEL_FREE_HIGH_CODE_EN	(ASCII*) "Free High"
#define RSC_KERNEL_IDLE_DRIVER_CODE_EN	(ASCII*) "Idle driver"
#define RSC_KERNEL_RELEASE_CODE_EN	(ASCII*) "Release"
#define RSC_KERNEL_VERSION_CODE_EN	(ASCII*) "Version"
#define RSC_KERNEL_MACHINE_CODE_EN	(ASCII*) "Machine"
#define RSC_KERNEL_MEMORY_CODE_EN	(ASCII*) "Memory"
#define RSC_KERNEL_STATE_CODE_EN	(ASCII*) "State"
#define RSC_KERNEL_POWER_CODE_EN	(ASCII*) "Power"
#define RSC_KERNEL_LATENCY_CODE_EN	(ASCII*) "Latency"
#define RSC_KERNEL_RESIDENCY_CODE_EN	(ASCII*) "Residency"

#define RSC_TOPOLOGY_TITLE_CODE_EN	(ASCII*) " Topology "

#define RSC_MEM_CTRL_TITLE_CODE_EN	(ASCII*) " Memory Controller "

#define RSC_TASKS_SORTBY_STATE_CODE_EN	(ASCII*) " State    "
#define RSC_TASKS_SORTBY_RTIME_CODE_EN	(ASCII*) " RunTime  "
#define RSC_TASKS_SORTBY_UTIME_CODE_EN	(ASCII*) " UserTime "
#define RSC_TASKS_SORTBY_STIME_CODE_EN	(ASCII*) " SysTime  "
#define RSC_TASKS_SORTBY_PID_CODE_EN	(ASCII*) " PID      "
#define RSC_TASKS_SORTBY_COMM_CODE_EN	(ASCII*) " Command  "

#define RSC_MENU_ITEM_MENU_CODE_EN	(ASCII*) "          Menu          "
#define RSC_MENU_ITEM_VIEW_CODE_EN	(ASCII*) "          View          "
#define RSC_MENU_ITEM_WINDOW_CODE_EN	(ASCII*) "         Window         "
#define RSC_MENU_ITEM_SETTINGS_CODE_EN	(ASCII*) " Settings           [s] "
#define RSC_MENU_ITEM_KERNEL_CODE_EN	(ASCII*) " Kernel Data        [k] "
#define RSC_MENU_ITEM_HOTPLUG_CODE_EN	(ASCII*) " HotPlug CPU        [#] "
#define RSC_MENU_ITEM_TOOLS_CODE_EN	(ASCII*) " Tools             [F3] "
#define RSC_MENU_ITEM_ABOUT_CODE_EN	(ASCII*) " About              [a] "
#define RSC_MENU_ITEM_HELP_CODE_EN	(ASCII*) " Help               [h] "
#define RSC_MENU_ITEM_KEYS_CODE_EN	(ASCII*) " Shortcuts         [F1] "
#define RSC_MENU_ITEM_LANG_CODE_EN	(ASCII*) " Languages          [L] "
#define RSC_MENU_ITEM_QUIT_CODE_EN	(ASCII*) " Quit              [F4] "
#define RSC_MENU_ITEM_DASHBOARD_CODE_EN (ASCII*) " Dashboard          [d] "
#define RSC_MENU_ITEM_FREQUENCY_CODE_EN (ASCII*) " Frequency          [f] "
#define RSC_MENU_ITEM_INST_CYCLE_CODE_EN (ASCII*)" Inst cycles        [i] "
#define RSC_MENU_ITEM_CORE_CYCLE_CODE_EN (ASCII*)" Core cycles        [c] "
#define RSC_MENU_ITEM_IDLE_STATE_CODE_EN (ASCII*)" Idle C-States      [l] "
#define RSC_MENU_ITEM_PKG_CYCLE_CODE_EN (ASCII*) " Package cycles     [g] "
#define RSC_MENU_ITEM_TASKS_MON_CODE_EN (ASCII*) " Tasks Monitoring   [x] "
#define RSC_MENU_ITEM_SYS_INTER_CODE_EN (ASCII*) " System Interrupts  [q] "
#define RSC_MENU_ITEM_POW_VOLT_CODE_EN	(ASCII*) " Power & Voltage    [V] "
#define RSC_MENU_ITEM_SLICE_CTR_CODE_EN (ASCII*) " Slice counters     [T] "
#define RSC_MENU_ITEM_PROCESSOR_CODE_EN (ASCII*) " Processor          [p] "
#define RSC_MENU_ITEM_TOPOLOGY_CODE_EN	(ASCII*) " Topology           [m] "
#define RSC_MENU_ITEM_FEATURES_CODE_EN	(ASCII*) " Features           [e] "
#define RSC_MENU_ITEM_ISA_EXT_CODE_EN	(ASCII*) " ISA Extensions     [I] "
#define RSC_MENU_ITEM_TECH_CODE_EN	(ASCII*) " Technologies       [t] "
#define RSC_MENU_ITEM_PERF_MON_CODE_EN	(ASCII*) " Perf. Monitoring   [o] "
#define RSC_MENU_ITEM_POW_THERM_CODE_EN (ASCII*) " Power & Thermal    [w] "
#define RSC_MENU_ITEM_CPUID_CODE_EN	(ASCII*) " CPUID Hexa Dump    [u] "
#define RSC_MENU_ITEM_SYS_REGS_CODE_EN	(ASCII*) " System Registers   [R] "
#define RSC_MENU_ITEM_MEM_CTRL_CODE_EN	(ASCII*) " Memory Controller  [M] "

#define RSC_SETTINGS_TITLE_CODE_EN	(ASCII*) " Settings "
#define RSC_SETTINGS_DAEMON_CODE_EN					\
				(ASCII*) " Daemon gate                    "
#define RSC_SETTINGS_INTERVAL_CODE_EN					\
				(ASCII*) " Interval(ms)                   "
#define RSC_SETTINGS_AUTO_CLOCK_CODE_EN 				\
				(ASCII*) " Auto Clock                     "
#define RSC_SETTINGS_EXPERIMENTAL_CODE_EN				\
				(ASCII*) " Experimental                   "
#define RSC_SETTINGS_CPU_HOTPLUG_CODE_EN				\
				(ASCII*) " CPU Hot-Plug                   "
#define RSC_SETTINGS_PCI_ENABLED_CODE_EN				\
				(ASCII*) " PCI enablement                 "
#define RSC_SETTINGS_NMI_REGISTERED_CODE_EN				\
				(ASCII*) " NMI registered                 "

#define RSC_HELP_TITLE_CODE_EN		(ASCII*) " Help "
#define RSC_HELP_MENU_CODE_EN		(ASCII*) "             Menu "
#define RSC_HELP_CLOSE_WINDOW_CODE_EN	(ASCII*) "     Close window "
#define RSC_HELP_PREV_WINDOW_CODE_EN	(ASCII*) "  Previous window "
#define RSC_HELP_NEXT_WINDOW_CODE_EN	(ASCII*) "      Next window "
#define RSC_HELP_MOVE_WINDOW_CODE_EN	(ASCII*) "      Move window "
#define RSC_HELP_MOVE_SELECT_CODE_EN	(ASCII*) "   Move selection "
#define RSC_HELP_LAST_CELL_CODE_EN	(ASCII*) "        Last cell "
#define RSC_HELP_FIRST_CELL_CODE_EN	(ASCII*) "       First cell "
#define RSC_HELP_TRIGGER_SELECT_CODE_EN (ASCII*) "Trigger selection "
#define RSC_HELP_PREV_PAGE_CODE_EN	(ASCII*) "    Previous page "
#define RSC_HELP_NEXT_PAGE_CODE_EN	(ASCII*) "        Next page "
#define RSC_HELP_SCROLL_DOWN_CODE_EN	(ASCII*) "  Scroll CPU down "
#define RSC_HELP_SCROLL_UP_CODE_EN	(ASCII*) "    Scroll CPU up "

#define RSC_ADV_HELP_TITLE_CODE_EN	(ASCII*) " Shortcuts "
#define RSC_ADV_HELP_ITEM_1_CODE_EN					\
			(ASCII*) " Frequency view:                      "
#define RSC_ADV_HELP_ITEM_2_CODE_EN					\
			(ASCII*) " %        Averages or Package C-States"
#define RSC_ADV_HELP_ITEM_3_CODE_EN					\
			(ASCII*) " Task Monitoring view:                "
#define RSC_ADV_HELP_ITEM_4_CODE_EN					\
			(ASCII*) " b                Sorting tasks order "
#define RSC_ADV_HELP_ITEM_5_CODE_EN					\
			(ASCII*) " n               Select task tracking "
#define RSC_ADV_HELP_ITEM_6_CODE_EN					\
			(ASCII*) " r              Reverse tasks sorting "
#define RSC_ADV_HELP_ITEM_7_CODE_EN					\
			(ASCII*) " v         Show|Hide contextual value "
#define RSC_ADV_HELP_ITEM_8_CODE_EN					\
			(ASCII*) " Any view:                            "
#define RSC_ADV_HELP_ITEM_9_CODE_EN					\
			(ASCII*) " .             Top frequency or Usage "
#define RSC_ADV_HELP_ITEM_10_CODE_EN					\
			(ASCII*) " {             Start CoreFreq Machine "
#define RSC_ADV_HELP_ITEM_11_CODE_EN					\
			(ASCII*) " }              Stop CoreFreq Machine "
#define RSC_ADV_HELP_ITEM_12_CODE_EN					\
			(ASCII*) " F10            Stop tools processing "
#define RSC_ADV_HELP_ITEM_13_CODE_EN					\
			(ASCII*) "  Up  PgUp                     Scroll "
#define RSC_ADV_HELP_ITEM_14_CODE_EN					\
			(ASCII*) " Down PgDw                       CPU  "

#define RSC_BOX_DISABLE_COND0_CODE_EN					\
			(ASCII*) "               Disable              "
#define RSC_BOX_DISABLE_COND1_CODE_EN					\
			(ASCII*) "           <   Disable  >           "
#define RSC_BOX_ENABLE_COND0_CODE_EN					\
			(ASCII*) "               Enable               "
#define RSC_BOX_ENABLE_COND1_CODE_EN					\
			(ASCII*) "           <   Enable   >           "

#define RSC_BOX_INTERVAL_TITLE_CODE_EN	(ASCII*) " Interval "
#define RSC_BOX_AUTOCLOCK_TITLE_CODE_EN (ASCII*) " Auto Clock "
#define RSC_BOX_MODE_TITLE_CODE_EN	(ASCII*) " Experimental "

#define RSC_BOX_MODE_DESC_CODE_EN					\
			(ASCII*) "       CoreFreq Operation Mode       "
#define RSC_BOX_EIST_DESC_CODE_EN					\
			(ASCII*) "             SpeedStep              "
#define RSC_BOX_C1E_DESC_CODE_EN					\
			(ASCII*) "        Enhanced Halt State         "
#define RSC_BOX_TURBO_DESC_CODE_EN					\
			(ASCII*) " Turbo Boost/Core Performance Boost "
#define RSC_BOX_C1A_DESC_CODE_EN					\
			(ASCII*) "          C1 Auto Demotion          "
#define RSC_BOX_C3A_DESC_CODE_EN					\
			(ASCII*) "          C3 Auto Demotion          "
#define RSC_BOX_C1U_DESC_CODE_EN					\
			(ASCII*) "            C1 UnDemotion           "
#define RSC_BOX_C3U_DESC_CODE_EN					\
			(ASCII*) "            C3 UnDemotion           "
#define RSC_BOX_CC6_DESC_CODE_EN					\
			(ASCII*) "           Core C6 State            "
#define RSC_BOX_PC6_DESC_CODE_EN					\
			(ASCII*) "          Package C6 State          "
#define RSC_BOX_BLANK_DESC_CODE_EN					\
			(ASCII*) "                                    "

#define RSC_BOX_NOMINAL_MODE_COND0_CODE_EN				\
			(ASCII*) "       Nominal operating mode       "
#define RSC_BOX_NOMINAL_MODE_COND1_CODE_EN				\
			(ASCII*) "     < Nominal operating mode >     "
#define RSC_BOX_EXPERIMENT_MODE_COND0_CODE_EN				\
			(ASCII*) "     Experimental operating mode    "
#define RSC_BOX_EXPERIMENT_MODE_COND1_CODE_EN				\
			(ASCII*) "   < Experimental operating mode >  "

#define RSC_BOX_INTERRUPT_TITLE_CODE_EN (ASCII*) " NMI Interrupts "

#define RSC_BOX_INT_REGISTER_COND0_CODE_EN				\
			(ASCII*) "              Register              "
#define RSC_BOX_INT_REGISTER_COND1_CODE_EN				\
			(ASCII*) "            < Register >            "
#define RSC_BOX_INT_UNREGISTER_COND0_CODE_EN				\
			(ASCII*) "             Unregister             "
#define RSC_BOX_INT_UNREGISTER_COND1_CODE_EN				\
			(ASCII*) "           < Unregister >           "

#define RSC_BOX_EVENT_TITLE_CODE_EN	(ASCII*) " Clear Event "

#define RSC_BOX_EVENT_THERMAL_SENSOR_CODE_EN				\
					(ASCII*) "     Thermal Sensor     "
#define RSC_BOX_EVENT_PROCHOT_AGENT_CODE_EN				\
					(ASCII*) "     PROCHOT# Agent     "
#define RSC_BOX_EVENT_CRITICAL_TEMP_CODE_EN				\
					(ASCII*) "  Critical Temperature  "
#define RSC_BOX_EVENT_THERMAL_THRESHOLD_CODE_EN 			\
					(ASCII*) "   Thermal Threshold    "
#define RSC_BOX_EVENT_POWER_LIMITATION_CODE_EN				\
					(ASCII*) "    Power Limitation    "
#define RSC_BOX_EVENT_CURRENT_LIMITATION_CODE_EN			\
					(ASCII*) "   Current Limitation   "
#define RSC_BOX_EVENT_CROSS_DOMAIN_LIMIT_CODE_EN			\
					(ASCII*) "   Cross Domain Limit.  "

#define RSC_BOX_PKG_STATE_TITLE_CODE_EN (ASCII*) " Package C-State Limit "

#define RSC_BOX_IO_MWAIT_TITLE_CODE_EN	(ASCII*) " I/O MWAIT "
#define RSC_BOX_IO_MWAIT_DESC_CODE_EN					\
			(ASCII*) "        I/O MWAIT Redirection       "

#define RSC_BOX_MWAIT_MAX_STATE_TITLE_CODE_EN (ASCII*)" I/O MWAIT Max C-State "

#define RSC_BOX_ODCM_TITLE_CODE_EN	(ASCII*) " ODCM "
#define RSC_BOX_ODCM_DESC_CODE_EN					\
			(ASCII*) "          Clock Modulation          "

#define RSC_BOX_EXT_DUTY_CYCLE_TITLE_CODE_EN	(ASCII*)" Extended Duty Cycle "
#define RSC_BOX_DUTY_CYCLE_TITLE_CODE_EN	(ASCII*) " Duty Cycle "

#define RSC_BOX_DUTY_CYCLE_RESERVED_CODE_EN				\
				(ASCII*) "          Reserved         "

#define RSC_BOX_TOOLS_TITLE_CODE_EN	(ASCII*) " Tools "
#define RSC_BOX_TOOLS_STOP_CODE_EN	(ASCII*) "            STOP           "
#define RSC_BOX_TOOLS_ATOMIC_CODE_EN	(ASCII*) "        Atomic Burn        "
#define RSC_BOX_TOOLS_CRC32_CODE_EN	(ASCII*) "       CRC32 Compute       "
#define RSC_BOX_TOOLS_CONIC_CODE_EN	(ASCII*) "       Conic Compute...    "
#define RSC_BOX_TOOLS_RAND_CPU_CODE_EN	(ASCII*) "      Turbo Random CPU     "
#define RSC_BOX_TOOLS_RR_CPU_CODE_EN	(ASCII*) "      Turbo Round Robin    "

#define RSC_BOX_CONIC_TITLE_CODE_EN	(ASCII*) " Conic variations "
#define RSC_BOX_CONIC_ITEM_1_CODE_EN	(ASCII*) "         Ellipsoid         "
#define RSC_BOX_CONIC_ITEM_2_CODE_EN	(ASCII*) " Hyperboloid of one sheet  "
#define RSC_BOX_CONIC_ITEM_3_CODE_EN	(ASCII*) " Hyperboloid of two sheets "
#define RSC_BOX_CONIC_ITEM_4_CODE_EN	(ASCII*) "    Elliptical cylinder    "
#define RSC_BOX_CONIC_ITEM_5_CODE_EN	(ASCII*) "    Hyperbolic cylinder    "
#define RSC_BOX_CONIC_ITEM_6_CODE_EN	(ASCII*) "    Two parallel planes    "