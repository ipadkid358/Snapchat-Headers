/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensDataProviderBase.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCLensCameraScreenDataProviderProtocol.h>

@class NSArray, NSString;

@interface SCAdsCameraLensDataProvider : SCLensDataProviderBase <SCTimeProfilable, SCLensCameraScreenDataProviderProtocol> {

	NSArray* _categoryIds;
	NSArray* _unlockedLenses;
	BOOL _showBirthdayReplyLens;
	NSArray* _onDemandGeoLenses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showBirthdayReplyLens;                 //@synthesize showBirthdayReplyLens=_showBirthdayReplyLens - In the implementation block
@property (nonatomic,readonly) NSArray * onDemandGeoLenses;              //@synthesize onDemandGeoLenses=_onDemandGeoLenses - In the implementation block
+(int)context;
-(id)lenses;
-(id)initWithUserSession:(id)arg1 ;
-(void)updateLenses:(id)arg1 ;
-(id)applicableContext;
-(id)originalLens;
-(void)clearLenses;
-(id)categoryIds;
-(void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2 ;
-(NSArray *)onDemandGeoLenses;
-(void)setShowBirthdayReplyLens:(BOOL)arg1 ;
-(id)lensForId:(id)arg1 ;
-(id)firstApplicableLens;
-(BOOL)isRegressorNeeded;
-(void)updateLenses;
-(void)updateDownloadableData;
-(void)_unlockedLensesDataStoreDidUpdate:(id)arg1 ;
-(id)lensesForCameraPosition:(unsigned long long)arg1 applicableContext:(id)arg2 categoryIds:(id)arg3 ;
-(void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2 applicableContext:(id)arg3 ;
-(void)setCategoryIds:(id)arg1 ;
-(BOOL)showBirthdayReplyLens;
@end

