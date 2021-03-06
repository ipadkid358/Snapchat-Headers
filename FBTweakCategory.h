/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;

@interface FBTweakCategory : NSObject <NSCoding> {

	NSMutableArray* _orderedCollections;
	NSMutableDictionary* _namedCollections;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tweakCollections; 
-(id)tweakCollectionWithName:(id)arg1 ;
-(NSArray *)tweakCollections;
-(void)addTweakCollection:(id)arg1 ;
-(void)removeTweakCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

