/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface SCCommerceStoreCategory : NSObject {

	NSMutableArray* _subCategories;
	NSString* _idValue;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * idValue;                   //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * subCategories; 
-(NSString *)idValue;
-(id)initWithIdValue:(id)arg1 name:(id)arg2 ;
-(NSArray *)subCategories;
-(NSString *)name;
-(void)addSubCategory:(id)arg1 ;
@end

