/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCHereBaseCall.h>

@interface SCHereMissCall : SCHereBaseCall {

	BOOL _shouldAnimate;

}

@property (assign,nonatomic) BOOL shouldAnimate;              //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)shouldAutoRetry;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 ;
-(BOOL)shouldAnimate;
-(void)setShouldAnimate:(BOOL)arg1 ;
-(long long)messageType;
@end

