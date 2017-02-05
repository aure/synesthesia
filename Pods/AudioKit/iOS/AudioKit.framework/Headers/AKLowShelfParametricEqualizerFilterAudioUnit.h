//
//  AKLowShelfParametricEqualizerFilterAudioUnit.h
//  AudioKit
//
//  Created by Aurelius Prochazka, revision history on Github.
//  Copyright (c) 2016 Aurelius Prochazka. All rights reserved.
//

#pragma once
#import "AKAudioUnit.h"

@interface AKLowShelfParametricEqualizerFilterAudioUnit : AKAudioUnit
@property (nonatomic) float cornerFrequency;
@property (nonatomic) float gain;
@property (nonatomic) float q;
@end

