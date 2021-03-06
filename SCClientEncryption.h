/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface SCClientEncryption : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _encryptionKey;
	NSString* _initializationVector;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * encryptionKey;                     //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,readonly) NSString * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
-(id)initWithEncryptionKey:(id)arg1 initializationVector:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)encryptionKey;
-(NSString *)initializationVector;
@end

