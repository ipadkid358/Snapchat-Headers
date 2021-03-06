/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADLAuthDetails : NSObject {

	long long _userId;
	long long _expires;
	NSString* _salt;
	NSString* _signature;
	NSString* _token;
	NSString* _mac;

}

@property (nonatomic,readonly) long long userId;                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) long long expires;                 //@synthesize expires=_expires - In the implementation block
@property (nonatomic,readonly) NSString * salt;                   //@synthesize salt=_salt - In the implementation block
@property (nonatomic,readonly) NSString * signature;              //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * token;                  //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * mac;                    //@synthesize mac=_mac - In the implementation block
+(id)AuthDetailsWithUserId:(long long)arg1 expires:(long long)arg2 salt:(id)arg3 signature:(id)arg4 token:(id)arg5 mac:(id)arg6 ;
-(id)initWithUserId:(long long)arg1 expires:(long long)arg2 salt:(id)arg3 signature:(id)arg4 token:(id)arg5 mac:(id)arg6 ;
-(id)description;
-(NSString *)token;
-(long long)userId;
-(NSString *)signature;
-(NSString *)salt;
-(NSString *)mac;
-(long long)expires;
@end

