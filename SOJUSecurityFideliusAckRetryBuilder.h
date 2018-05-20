/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDictionary, NSString;

@interface SOJUSecurityFideliusAckRetryBuilder : NSObject {

	NSNumber* _snapId;
	NSNumber* _fideliusVersion;
	NSDictionary* _fideliusPackage;
	NSString* _senderOutBeta;
	NSString* _retrySource;
	NSString* _cleartextKey;

}
+(id)withJUSecurityFideliusAckRetry:(id)arg1 ;
-(id)setSnapId:(id)arg1 ;
-(id)setSnapIdValue:(long long)arg1 ;
-(id)setFideliusVersionValue:(int)arg1 ;
-(id)setFideliusVersion:(id)arg1 ;
-(id)setFideliusPackage:(id)arg1 ;
-(id)setSenderOutBeta:(id)arg1 ;
-(id)setRetrySource:(id)arg1 ;
-(id)setCleartextKey:(id)arg1 ;
-(id)build;
@end

