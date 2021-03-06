/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensDataFetcherListenerV2.h>
#import <Snapchat/SCLensCameraScreenDataProviderProtocol.h>

@class SCLens, NSString, SCUserSession, SCLensDataProviderListenerAnnouncer, NSArray;

@interface SCSingleLensCameraLensDataProvider : NSObject <SCLensDataFetcherListenerV2, SCLensCameraScreenDataProviderProtocol> {

	SCLens* _lens;
	BOOL _fetchingLensContent;
	BOOL _fetchingLensImage;
	NSString* _applicableContext;
	SCUserSession* _userSession;
	SCLensDataProviderListenerAnnouncer* _announcer;
	BOOL showBirthdayReplyLens;
	NSArray* onDemandGeoLenses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showBirthdayReplyLens; 
@property (nonatomic,readonly) NSArray * onDemandGeoLenses; 
-(id)lenses;
-(void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2 ;
-(void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4 ;
-(void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2 ;
-(void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4 ;
-(void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2 ;
-(void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4 ;
-(void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2 ;
-(void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4 ;
-(id)applicableContext;
-(id)originalLens;
-(id)selectedLens;
-(id)categoryIds;
-(void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2 ;
-(NSArray *)onDemandGeoLenses;
-(void)fetchLensesIfNeeded;
-(BOOL)isFetchingLens:(id)arg1 ;
-(void)fetchLens:(id)arg1 ;
-(void)setShowBirthdayReplyLens:(BOOL)arg1 ;
-(id)lensForId:(id)arg1 ;
-(void)setSelectedLens:(id)arg1 ;
-(id)firstApplicableLens;
-(id)startUpdatingLensData;
-(BOOL)isRegressorNeeded;
-(void)stopUpdatingLensDataWithToken:(id)arg1 ;
-(id)initWithLens:(id)arg1 userSession:(id)arg2 applicableContext:(id)arg3 ;
-(id)lensesForCameraPosition:(unsigned long long)arg1 applicableContext:(id)arg2 categoryIds:(id)arg3 ;
-(void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2 applicableContext:(id)arg3 ;
-(BOOL)showBirthdayReplyLens;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

