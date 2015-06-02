/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSControlInterfaceMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int supportsDirectionalControl : 1; 
        unsigned int supportsSpeakerSelection : 1; 
        unsigned int supportsVolumeControl : 1; 
    } _has;
    BOOL _supportsDirectionalControl;
    BOOL _supportsSpeakerSelection;
    BOOL _supportsVolumeControl;
}

@property (nonatomic) BOOL hasSupportsDirectionalControl;
@property (nonatomic) BOOL hasSupportsSpeakerSelection;
@property (nonatomic) BOOL hasSupportsVolumeControl;
@property (nonatomic) BOOL supportsDirectionalControl;
@property (nonatomic) BOOL supportsSpeakerSelection;
@property (nonatomic) BOOL supportsVolumeControl;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSupportsDirectionalControl;
- (BOOL)hasSupportsSpeakerSelection;
- (BOOL)hasSupportsVolumeControl;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSupportsDirectionalControl:(BOOL)arg1;
- (void)setHasSupportsSpeakerSelection:(BOOL)arg1;
- (void)setHasSupportsVolumeControl:(BOOL)arg1;
- (void)setSupportsDirectionalControl:(BOOL)arg1;
- (void)setSupportsSpeakerSelection:(BOOL)arg1;
- (void)setSupportsVolumeControl:(BOOL)arg1;
- (BOOL)supportsDirectionalControl;
- (BOOL)supportsSpeakerSelection;
- (BOOL)supportsVolumeControl;
- (void)writeTo:(id)arg1;

@end