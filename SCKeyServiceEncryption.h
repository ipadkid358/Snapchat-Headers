/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCKeyServiceEncryption : NSObject {

	NSData* _encryptionKey;
	NSData* _initializationVector;

}

@property (nonatomic,copy,readonly) NSData * encryptionKey;                     //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
-(id)initWithEncryptionKey:(id)arg1 initializationVector:(id)arg2 ;
-(NSData *)encryptionKey;
-(NSData *)initializationVector;
@end

