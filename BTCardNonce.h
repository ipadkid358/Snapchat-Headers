/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BTPaymentMethodNonce.h>

@class NSString, BTBinData;

@interface BTCardNonce : BTPaymentMethodNonce {

	long long _cardNetwork;
	NSString* _lastTwo;
	BTBinData* _binData;

}

@property (nonatomic,readonly) long long cardNetwork;                //@synthesize cardNetwork=_cardNetwork - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastTwo;              //@synthesize lastTwo=_lastTwo - In the implementation block
@property (nonatomic,readonly) BTBinData * binData;                  //@synthesize binData=_binData - In the implementation block
+(id)cardNonceWithJSON:(id)arg1 ;
+(id)stringFromCardNetwork:(long long)arg1 ;
-(id)initWithNonce:(id)arg1 description:(id)arg2 cardNetwork:(long long)arg3 lastTwo:(id)arg4 isDefault:(BOOL)arg5 cardJSON:(id)arg6 ;
-(long long)cardNetwork;
-(NSString *)lastTwo;
-(BTBinData *)binData;
@end

