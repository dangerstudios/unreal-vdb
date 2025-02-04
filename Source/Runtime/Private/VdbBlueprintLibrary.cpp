// Copyright 2022 Eidos-Montreal / Eidos-Sherbrooke

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http ://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "VdbBlueprintLibrary.h"
#include "VolumeRuntimeModule.h"
#include "Rendering/VdbMaterialRendering.h"

void UVdbBlueprintLibrary::SetRaymarchingSampleCount(int SampleCount)
{
	FVolumeRuntimeModule::GetRenderExtension()->SetNbSamples(SampleCount);
}

void UVdbBlueprintLibrary::SetMaximumRayDepth(int Depth)
{
	FVolumeRuntimeModule::GetRenderExtension()->SetMaxRayDepth(Depth);
}

void UVdbBlueprintLibrary::SetDenoiserMethod(EVdbDenoiserMethod Method)
{
	FVolumeRuntimeModule::GetRenderExtension()->SetDenoiserMethod(Method);
}