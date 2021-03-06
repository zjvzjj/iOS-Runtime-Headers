/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPNumberRandomizer : NSObject {
    double  _epsilon;
    _DPLaplaceNoiseGenerator * _generator;
    unsigned int  _range;
}

@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPLaplaceNoiseGenerator *generator;
@property (nonatomic, readonly) unsigned int range;

+ (id)numberRandomizerWithRange:(unsigned int)arg1 epsilon:(double)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)epsilon;
- (id)generator;
- (id)init;
- (id)initWithRange:(unsigned int)arg1 epsilon:(double)arg2;
- (id)randomize:(id)arg1;
- (unsigned int)range;

@end
