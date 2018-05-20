/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContact.h>
@class NSString;


@protocol SCContact <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * display; 
@property (nonatomic,copy,readonly) NSString * phoneNumber; 
@required
-(NSString *)display;
-(NSString *)phoneNumber;

@end


@class NSString;

@interface SCContact : NSObject <SCContact> {

	NSString* _display;
	NSString* _phoneNumber;

}

@property (nonatomic,copy,readonly) NSString * display;                  //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDisplay:(id)arg1 phoneNumber:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
@end

