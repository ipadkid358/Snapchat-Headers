/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface BTTokenizationService : NSObject {

	NSMutableDictionary* _tokenizationBlocks;

}

@property (nonatomic,retain) NSMutableDictionary * tokenizationBlocks;              //@synthesize tokenizationBlocks=_tokenizationBlocks - In the implementation block
@property (nonatomic,readonly) NSArray * allTypes; 
+(id)sharedService;
-(void)registerType:(id)arg1 withTokenizationBlock:(/*^block*/id)arg2 ;
-(BOOL)isTypeAvailable:(id)arg1 ;
-(NSMutableDictionary *)tokenizationBlocks;
-(void)tokenizeType:(id)arg1 options:(id)arg2 withAPIClient:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)tokenizeType:(id)arg1 withAPIClient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setTokenizationBlocks:(NSMutableDictionary *)arg1 ;
-(NSArray *)allTypes;
@end

