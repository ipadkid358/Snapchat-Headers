/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SCLensCameraScreenDataProviderProtocol <SCLensDataProviderProtocol>
@property (assign,nonatomic) BOOL showBirthdayReplyLens; 
@property (nonatomic,readonly) NSArray * onDemandGeoLenses; 
@required
-(id)lenses;
-(id)categoryIds;
-(void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2;
-(NSArray *)onDemandGeoLenses;
-(void)setShowBirthdayReplyLens:(BOOL)arg1;
-(id)lensForId:(id)arg1;
-(void)setSelectedLens:(id)arg1;
-(id)firstApplicableLens;
-(id)lensesForCameraPosition:(unsigned long long)arg1 applicableContext:(id)arg2 categoryIds:(id)arg3;
-(void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2 applicableContext:(id)arg3;
-(BOOL)showBirthdayReplyLens;

@end

