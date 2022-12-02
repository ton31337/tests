/* ospf6_area_nssa => "area <A.B.C.D|(0-4294967295)>$area_str nssa        [{	  default-information-originate$dflt_originate [{metric (0-16777214)$mval|metric-type (1-2)$mtype}]	  |no-summary$no_summary	 }]" */
DEFUN_CMD_FUNC_DECL(ospf6_area_nssa)
#define funcdecl_ospf6_area_nssa static int ospf6_area_nssa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area_str,\
	const char * dflt_originate,\
	long mval,\
	const char * mval_str __attribute__ ((unused)),\
	long mtype,\
	const char * mtype_str __attribute__ ((unused)),\
	const char * no_summary)
funcdecl_ospf6_area_nssa;
DEFUN_CMD_FUNC_TEXT(ospf6_area_nssa)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area_str = NULL;
	const char *dflt_originate = NULL;
	long mval = 0;
	const char *mval_str = NULL;
	long mtype = 0;
	const char *mtype_str = NULL;
	const char *no_summary = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area_str")) {
			area_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "dflt_originate")) {
			dflt_originate = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mval")) {
			mval_str = argv[_i]->arg;
			char *_end;
			mval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "mtype")) {
			mtype_str = argv[_i]->arg;
			char *_end;
			mtype = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "no_summary")) {
			no_summary = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!area_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "area_str");
		return CMD_WARNING;
	}

	return ospf6_area_nssa_magic(self, vty, argc, argv, area_str, dflt_originate, mval, mval_str, mtype, mtype_str, no_summary);
}

/* no_ospf6_area_nssa => "no area <A.B.C.D|(0-4294967295)>$area_str nssa        [{	  default-information-originate [{metric (0-16777214)|metric-type (1-2)}]	  |no-summary	 }]" */
DEFUN_CMD_FUNC_DECL(no_ospf6_area_nssa)
#define funcdecl_no_ospf6_area_nssa static int no_ospf6_area_nssa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area_str,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	long metric_type,\
	const char * metric_type_str __attribute__ ((unused)))
funcdecl_no_ospf6_area_nssa;
DEFUN_CMD_FUNC_TEXT(no_ospf6_area_nssa)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area_str = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	long metric_type = 0;
	const char *metric_type_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area_str")) {
			area_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric_type")) {
			metric_type_str = argv[_i]->arg;
			char *_end;
			metric_type = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!area_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "area_str");
		return CMD_WARNING;
	}

	return no_ospf6_area_nssa_magic(self, vty, argc, argv, area_str, metric, metric_str, metric_type, metric_type_str);
}

