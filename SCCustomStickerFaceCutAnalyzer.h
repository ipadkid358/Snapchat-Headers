/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <Snapchat/Snapchat-Structs.h>
@class SCUserSession, SCPreferences, SCAutoStickerLogger, SCQueuePerformer, NSMutableSet, NSObject;

@interface SCCustomStickerFaceCutAnalyzer : NSObject {

	SCUserSession* _userSession;
	SCPreferences* _userPreferences;
	SCAutoStickerLogger* _logger;
	shared_ptr<face::Analyzer>* _faceAnalyzer;
	SCQueuePerformer* _performer;
	unique_ptr<SnapCutExt, std::__1::default_delete<SnapCutExt> >* _snapCut;
	NSMutableSet* _dedupMemoriesIds;
	NSMutableSet* _dedupCameraRollIds;
	NSObject*<OS_dispatch_group> _addStickerCompleteGroup;
	BOOL _isGenerating;

}

@property (assign,nonatomic) BOOL isGenerating;              //@synthesize isGenerating=_isGenerating - In the implementation block
-(BOOL)isFirstTime;
-(void)generateFaceCustomStickerWithCompletion:(/*^block*/id)arg1 ;
-(void)_stickersFromCameraAndMemoiresWithCompletion:(long long)arg1 scanCount:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)_analyze:(id)arg1 originId:(id)arg2 creationTime:(id)arg3 ;
-(void)_stickerFromMemoriesWithCompletion:(id)arg1 currentIdx:(unsigned long long)arg2 totalScanCount:(long long)arg3 totalSkipCount:(long long)arg4 totalStickerCount:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_getFetchResultsFromCameraRoll;
-(id)_getSnapsFromMemories;
-(void)_filterOutSnapchatAlbum;
-(BOOL)_shouldAutoUpdate;
-(void)_getFaceCutStickers:(/*^block*/id)arg1 ;
-(id)initAnalyzerWithUserSession:(id)arg1 ;
-(void)updateAutoSticker;
-(BOOL)isGenerating;
-(void)setIsGenerating:(BOOL)arg1 ;
-(id)debugString;
@end

