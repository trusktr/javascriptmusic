	GO4K_ENV	ATTAC(64),DECAY(64),SUSTAIN(64),RELEASE(64),GAIN(128)
	GO4K_VCO	TRANSPOSE(64),DETUNE(64),PHASE(0),GATES(85),COLOR(64),SHAPE(64),GAIN(128),FLAGS(TRISAW)
	GO4K_FST	AMOUNT(96),DEST(4*MAX_UNIT_SLOTS+4+FST_SET)
	GO4K_FOP	OP(FOP_POP)
	GO4K_VCO	TRANSPOSE(48),DETUNE(64),PHASE(0),GATES(85),COLOR(64),SHAPE(64),GAIN(128),FLAGS(TRISAW|LFO)
	GO4K_FST	AMOUNT(81),DEST(7*MAX_UNIT_SLOTS+4+FST_SET)
	GO4K_FOP	OP(FOP_POP)
	GO4K_VCO	TRANSPOSE(32),DETUNE(64),PHASE(0),GATES(85),COLOR(64),SHAPE(8),GAIN(128),FLAGS(SINE|LFO)
	GO4K_VCF	FREQUENCY(32),RESONANCE(32),VCFTYPE(ALLPASS)
	GO4K_FOP	OP(FOP_MULP)
	GO4K_DLL	PREGAIN(64),DRY(128),FEEDBACK(64),DAMP(64),FREQUENCY(0),DEPTH(0),DELAY(17),COUNT(1) ; ERROR
	GO4K_PAN	PANNING(64)
	GO4K_OUT	GAIN(64), AUXSEND(64)