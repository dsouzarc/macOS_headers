//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABCNContact.h>

@class NSArray, NSDate, NSDateComponents, NSDictionary, NSString;

@interface ABCNMutableContact : ABCNContact
{
}

@property(copy, nonatomic) NSArray *linkedContacts; // @dynamic linkedContacts;
@property(copy, nonatomic) ABCNContact *snapshot; // @dynamic snapshot;
- (void)setNilValueForKey:(id)arg1;
@property(copy, nonatomic) NSArray *calendarURIs; // @dynamic calendarURIs;
- (void)setTone:(id)arg1 forAlert:(id)arg2;
@property(copy, nonatomic) NSDictionary *alertTones; // @dynamic alertTones;
- (void)setTexttone:(id)arg1;
- (void)setRingtone:(id)arg1;
@property(copy, nonatomic) NSArray *postalAddresses; // @dynamic postalAddresses;
@property(copy, nonatomic) NSArray *socialProfiles; // @dynamic socialProfiles;
@property(copy, nonatomic) NSArray *relatedNames; // @dynamic relatedNames;
@property(copy, nonatomic) NSArray *instantMessageAddresses; // @dynamic instantMessageAddresses;
@property(copy, nonatomic) NSArray *otherDateComponents; // @dynamic otherDateComponents;
@property(copy, nonatomic) NSArray *urlAddresses; // @dynamic urlAddresses;
@property(copy, nonatomic) NSArray *emailAddresses; // @dynamic emailAddresses;
@property(copy, nonatomic) NSArray *phoneNumbers; // @dynamic phoneNumbers;
@property(copy, nonatomic) NSString *phonemeData; // @dynamic phonemeData;
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(copy, nonatomic) NSString *cardDAVUID; // @dynamic cardDAVUID;
@property(nonatomic) long long nameOrder; // @dynamic nameOrder;
@property(nonatomic) long long displayStyle; // @dynamic displayStyle;
@property(copy, nonatomic) NSString *preferredLikenessSource; // @dynamic preferredLikenessSource;
@property(copy, nonatomic) NSString *preferredApplePersonaIdentifier; // @dynamic preferredApplePersonaIdentifier;
@property(nonatomic, getter=isPreferredForPhoto) BOOL preferredForPhoto; // @dynamic preferredForPhoto;
@property(nonatomic, getter=isPreferredForName) BOOL preferredForName; // @dynamic preferredForName;
@property(copy, nonatomic) NSString *linkIdentifier; // @dynamic linkIdentifier;
@property(copy, nonatomic) NSString *note; // @dynamic note;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSDateComponents *alternateBirthdayComponents; // @dynamic alternateBirthdayComponents;
@property(copy, nonatomic) NSDateComponents *birthdayComponents; // @dynamic birthdayComponents;
@property(copy, nonatomic) NSString *jobTitle; // @dynamic jobTitle;
@property(copy, nonatomic) NSString *departmentName; // @dynamic departmentName;
@property(copy, nonatomic) NSString *phoneticCompanyName; // @dynamic phoneticCompanyName;
@property(copy, nonatomic) NSString *companyName; // @dynamic companyName;
@property(copy, nonatomic) NSString *sortingLastName; // @dynamic sortingLastName;
@property(copy, nonatomic) NSString *sortingFirstName; // @dynamic sortingFirstName;
@property(copy, nonatomic) NSString *phoneticLastName; // @dynamic phoneticLastName;
@property(copy, nonatomic) NSString *phoneticMiddleName; // @dynamic phoneticMiddleName;
@property(copy, nonatomic) NSString *phoneticFirstName; // @dynamic phoneticFirstName;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(copy, nonatomic) NSString *maidenName; // @dynamic maidenName;
@property(copy, nonatomic) NSString *nameSuffix; // @dynamic nameSuffix;
@property(copy, nonatomic) NSString *lastName; // @dynamic lastName;
@property(copy, nonatomic) NSString *middleName; // @dynamic middleName;
@property(copy, nonatomic) NSString *firstName; // @dynamic firstName;
@property(copy, nonatomic) NSString *nameTitle; // @dynamic nameTitle;
- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

