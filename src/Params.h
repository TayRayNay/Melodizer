#pragma once

#define STEP_PARAM(paramName) paramName##First, paramName##Last = paramName##First + kSequencerSteps - 1

enum EParams
{
	kSequencerSteps = 16,

	kWaveform = 0,
	kScale,
	kKey,
	kTempo,
	kOctave,
	kRange,

	STEP_PARAM(kProbability),
	STEP_PARAM(kAttack),
	STEP_PARAM(kDecay),
	STEP_PARAM(kSustain),
	STEP_PARAM(kRelease),

	kNumParams
};

enum EParamSettings
{
	kTempoMin = 1,
	kTempoMax = 960,
};

enum WaveformType
{
	WT_Sine = 0,
	WT_Triangle,
	WT_Saw,
	WT_Square,
	WT_Quarterpulse,
	WT_Sine4,
	WT_Sine8,
	WT_Sine16,
	WT_Sine32,
	WT_Count,
};
