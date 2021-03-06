/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GPBEnumDescriptor;

@interface GPBExtensionDescriptor : NSObject <NSCopying> {

	GPBExtensionDescription* description_;
	SCD_Union_GP308 defaultValue_;
	Class containingMessageClass_;

}

@property (nonatomic,readonly) int wireType; 
@property (nonatomic,readonly) int alternateWireType; 
@property (nonatomic,readonly) unsigned fieldNumber; 
@property (nonatomic,readonly) Class containingMessageClass; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (getter=isRepeated,nonatomic,readonly) BOOL repeated; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) NSString * singletonName; 
@property (nonatomic,readonly) GPBEnumDescriptor * enumDescriptor; 
@property (nonatomic,readonly) id defaultValue; 
-(BOOL)isPackable;
-(GPBEnumDescriptor *)enumDescriptor;
-(Class)msgClass;
-(id)initWithExtensionDescription:(GPBExtensionDescription*)arg1 ;
-(NSString *)singletonName;
-(const char*)singletonNameC;
-(unsigned)fieldNumber;
-(int)wireType;
-(int)alternateWireType;
-(BOOL)isRepeated;
-(long long)compareByFieldNumber:(id)arg1 ;
-(Class)containingMessageClass;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultValue;
-(unsigned char)dataType;
@end

