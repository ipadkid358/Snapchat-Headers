/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFriendsFeedRankingScoring.h>

@class SCASTProvider, SCLazy, NSString;

@interface SCFriendsFeedRankingAstVMScorer : NSObject <SCFriendsFeedRankingScoring> {

	SCASTProvider* _astProvider;
	SCLazy* _astVMContainerLazy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)scoreForFeatures:(id)arg1 debugInfoPtr:(id*)arg2 ;
-(void)prepareForScoringItems:(id)arg1 ;
-(id)initWithASTProvider:(id)arg1 ;
@end

