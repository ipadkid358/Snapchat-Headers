/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCCacheAttributesItem : NSObject {

	BOOL _encrypt;
	BOOL _persist;
	NSString* _filePath;
	NSString* _key;
	NSString* _clientEncryptionId;
	NSString* _encryptionKey;
	NSString* _initializationVector;

}

@property (assign,nonatomic) BOOL encrypt;                               //@synthesize encrypt=_encrypt - In the implementation block
@property (assign,nonatomic) BOOL persist;                               //@synthesize persist=_persist - In the implementation block
@property (nonatomic,copy) NSString * filePath;                          //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * clientEncryptionId;                //@synthesize clientEncryptionId=_clientEncryptionId - In the implementation block
@property (nonatomic,copy) NSString * encryptionKey;                     //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,copy) NSString * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
-(NSString *)clientEncryptionId;
-(void)setClientEncryptionId:(NSString *)arg1 ;
-(void)setPersist:(BOOL)arg1 ;
-(void)setEncrypt:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 persist:(BOOL)arg2 encrypt:(BOOL)arg3 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(BOOL)persist;
-(NSString *)encryptionKey;
-(void)setEncryptionKey:(NSString *)arg1 ;
-(NSString *)initializationVector;
-(void)setInitializationVector:(NSString *)arg1 ;
-(BOOL)encrypt;
@end
