/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCExperimentContext.h>

@interface SCLensInPreviewExperimentContext : SCExperimentContext {

	BOOL _enableLensInPreviewPhoto;
	BOOL _enableLensInPreviewVideo;
	BOOL _requireFace;
	BOOL _showTooltip;
	BOOL _enableFirstLens;

}

@property (assign,nonatomic) BOOL enableLensInPreviewPhoto;              //@synthesize enableLensInPreviewPhoto=_enableLensInPreviewPhoto - In the implementation block
@property (assign,nonatomic) BOOL enableLensInPreviewVideo;              //@synthesize enableLensInPreviewVideo=_enableLensInPreviewVideo - In the implementation block
@property (assign,nonatomic) BOOL requireFace;                           //@synthesize requireFace=_requireFace - In the implementation block
@property (assign,nonatomic) BOOL showTooltip;                           //@synthesize showTooltip=_showTooltip - In the implementation block
@property (assign,nonatomic) BOOL enableFirstLens;                       //@synthesize enableFirstLens=_enableFirstLens - In the implementation block
-(void)setupParameters;
-(BOOL)showTooltip;
-(BOOL)enableLensInPreviewPhoto;
-(void)setEnableLensInPreviewPhoto:(BOOL)arg1 ;
-(BOOL)enableLensInPreviewVideo;
-(void)setEnableLensInPreviewVideo:(BOOL)arg1 ;
-(BOOL)requireFace;
-(void)setRequireFace:(BOOL)arg1 ;
-(void)setShowTooltip:(BOOL)arg1 ;
-(BOOL)enableFirstLens;
-(void)setEnableFirstLens:(BOOL)arg1 ;
-(id)experimentName;
@end

