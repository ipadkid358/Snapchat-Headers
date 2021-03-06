/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsAdPlacement.h>

@class NSString, NSDictionary;

@interface SCDiscoverAdPlacement : NSObject <SCSnapAdsAdPlacement> {

	NSString* _adUnitId;
	NSDictionary* _targetingParams;
	NSString* _adRequestClientId;

}

@property (nonatomic,copy) NSString * adUnitId;                         //@synthesize adUnitId=_adUnitId - In the implementation block
@property (nonatomic,copy) NSDictionary * targetingParams;              //@synthesize targetingParams=_targetingParams - In the implementation block
@property (nonatomic,copy) NSString * adRequestClientId;                //@synthesize adRequestClientId=_adRequestClientId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)targetingParams;
-(NSString *)adUnitId;
-(void)setAdRequestClientId:(NSString *)arg1 ;
-(NSString *)adRequestClientId;
-(void)setAdUnitId:(NSString *)arg1 ;
-(id)initWithChunk:(id)arg1 ;
-(void)setTargetingParams:(NSDictionary *)arg1 ;
@end

