/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesTask.h>

@class NSString;

@interface SCSpectaclesTaskDeleteCorruptContent : SCSpectaclesTask {

	BOOL _finished;
	NSString* _contentName;

}

@property (nonatomic,copy) NSString * contentName;                         //@synthesize contentName=_contentName - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;              //@synthesize finished=_finished - In the implementation block
-(NSString *)contentName;
-(void)setContentName:(NSString *)arg1 ;
-(id)nextRequest:(long long)arg1 ;
-(BOOL)supportsBatchingOnTransferChannel:(long long)arg1 ;
-(double)requiredDelay;
-(id)initWithContentName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)handleResponse:(id)arg1 ;
@end

